#!/bin/bash
# Run multiple optimizations in parallel
MAX_CPU=50

echo "Running all optimizations"
index=0
for file in "res"/*; do
  # Wait until CPU usage is < MAX_CPU
  CPU=$(mpstat 1 1 | awk '$2 ~"all" {print int($3)}')
  while [ $CPU -gt $MAX_CPU ]; do
    CPU=$(mpstat 1 1 | awk '$2 ~"all" {print int($3)}')
    echo "CPU usage is greater than ${MAX_CPU}%: ${CPU}%"
  done
  # Remove path and file extension
  name=${file##*/}
  name=${name%.*}
  # Check to see if a bounds file is selected
  if [[ ${name:0:6} == bounds ]]; then
    # Start next optimization
    echo "Starting optimization: $name"
    bounds="$file"
    output="../local/output/output_$name.json"
    log="../local/log/log_$name.txt"
    ./program --initial 'res/init.json' --options '../ipopt.opt' --data 'res/data.json' --bounds "$bounds" --output "$output" > "${log}" & 
    pids[${index}]=$!
    index=$((index+1))
  fi
done

# Wait for all optimizations to complete
echo "Waiting until optimizations finish..."
for pid in ${pids[*]}; do
  wait $pid
done 
echo "Done!"
