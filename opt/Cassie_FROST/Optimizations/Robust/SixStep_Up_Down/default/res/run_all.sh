#!/bin/bash
# Run multiple optimizations in parallel
MAX_CPU=100

declare -a names=("inplace" "forward_0p25" "forward_0p50" "forward_0p75" "forward_1p00" "backward_0p25" "backward_0p50" "backward_0p75" "backward_1p00")

# Run multiple optimizations in parallel
echo "Running all optimizations"
for i in ${names[@]}; do
  # Wait until CPU usage is < MAX_CPU
  CPU=$(mpstat 1 1 | awk '$2 ~"all" {print int($3)}')
  while [ $CPU -gt $MAX_CPU ]; do
    CPU=$(mpstat 1 1 | awk '$2 ~"all" {print int($3)}')
    echo "CPU usage is greater than ${MAX_CPU}%: ${CPU}%"
  done
  # Start next optimization
  echo "Starting optimization: $i"
  bounds="res/bounds_${i}.json"
  output="../local/output_${i}.json"
  log="../local/log_${i}.txt"
  ./program --initial '../res/x0.json' --options '../res/ipopt.opt' --data 'res/data.json' --bounds "$bounds" --output "$output" > "${log}" & 
  pids[${i}]=$!
  sleep 1
done

# wait for all pids
echo "Waiting until optimizations finish..."
for pid in ${pids[*]}; do
  wait $pid
done 
echo "Done!"
