function [t0, x0, u0] = shift(DT, t0, x0, u,f)
st = x0;
con = u(1,:)';
f_value = f(st,con);
st = st+ (DT*f_value);
x0 = full(st);

t0 = t0 + DT;
u0 = [u(2:size(u,1),:);u(size(u,1),:)];
end