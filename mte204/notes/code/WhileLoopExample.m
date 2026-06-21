%% While loop example
% Divide a starting value by a factor repeatedly until the value falls
% below a set tolerance or reaches a maximum number of iterations

clear;
clc;
close all;

xStart = 1000;
divideBy = 2;

stoppingTol = 1e-2;
iterMax = 100;

fprintf('iteration %d, value = %f\n', 0, xStart)

iter = 1;
while (xStart > stoppingTol) && (iter < iterMax)
    xStart = xStart / divideBy;
    fprintf('iteration %d, value = %f\n', iter, xStart)
    iter = iter + 1;
end