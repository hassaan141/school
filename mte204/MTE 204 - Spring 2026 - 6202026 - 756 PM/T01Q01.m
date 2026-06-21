% Matlab initialization
close all;  % Closes all open plots
clear;      % Clears all variables from memory
clc;        % Clears the command window

% Problem parameters
R = 1;      % Radius
V = 0.5;    % Volume

%% Graph the problem
% Allows us to observe where and how many roots exist

% Initialize x array to be used for plotting. linspace(a,b,n) creates an
% array of n points between a and b
h = linspace(0,1,100); 

% compute the function at all points in x
for i = 1:length(h)
    y(i) = h(i)^3-3*R*h(i)^2+3/pi*V;
end

% Create the plot
figure();   % This forces matlab to create a new figure
hold on;    % by default matlab overwrites every plot its mades. This stops that behaviour
% create a line plot
plot(h,y)
grid on;    % enables grid lines on the plot
% Set x and y plot limits. Matlab sets these automatically otherwise
xlim([0,1]) 

