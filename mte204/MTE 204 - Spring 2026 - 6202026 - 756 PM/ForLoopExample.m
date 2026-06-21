%% For Loop Example
% Compute the Fibonacci sequence out to a set number of values

clear;
clc;
close all;

x2 = 0;
x1 = 1;

iterMax = 10;

fprintf('iteration %d, value = %d\n', 0, x2)
fprintf('iteration %d, value = %d\n', 1, x1)

for iter = 3:iterMax
    xnew = x2+x1;
    fprintf('iteration %d, value = %d\n', iter, xnew)
    x2 = x1;
    x1 = xnew;
end