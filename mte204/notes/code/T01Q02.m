% Matlab Initialization 
close all;  % closes all plot windows
clear;      % clears variables from memory
clc;        % clear the command window

%% Part a - Graphical Method
% Initialize x array to be used for plotting. linspace(a,b,n) creates an
% array of n points between a and b
x = linspace(0,4,100); % array of 100 points between 0 and 4
% compute the function at all points in x. In this problem, we forgo using
% a for loop to make use of Matlab's element-wise operators. Using .* and
% .^ performs multiplication and exponents for every element in the initial
% array. Addition and subtraction do not need a dot. 
y = x.^3 - 6.*x.^2 + 11.*x - 6.1;
% Create the plot
figure();   % This forces matlab to create a new figure
hold on;    % by default matlab overwrites every plot its mades. This stops that behaviour
% create a line plot
plot(x,y)
grid on;    % enables grid lines on the plot
% Set x and y plot limits. Matlab sets these automatically otherwise
xlim([0,4]) 
ylim([-6,6])

%% Part b - Newton-Raphson Method
xOld = 3.5;  % Set initial guess
iterMax = 3;
% Begin iterations. Use for loop because we are limiting to 3 iterations
for iter = 1:iterMax+1
    % compute function and deriviative at x_i
    f = xOld^3 - 6*xOld^2 + 11*xOld - 6.1;
    fPrime = 3*xOld^2 - 12*xOld + 11;
    
    % Compute x_i+1
    xNew = xOld - f/fPrime;
   
    % The following code displays the output in a cleanly formatted way
    if iter == 1
        fprintf('iter |  x_i          |  f(x_i)       |  f`(x_i)      |  x_i+1 \n')
    end
    fprintf('%4d | %13e | %13e | %13e | %13e \n', iter-1, xOld, f, fPrime, xNew)
    
    % Replace x_i with x_i+1
    xOld = xNew;
    % At this point you would add code to check convergance.
end
