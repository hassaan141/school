%% Plotting Example
% Create a plot of with two functions between x=[0,2]
% y1 = x^3 - 10*x^2 +4*x +2;
% y2 = 2*x + 2*sin(10*x); 

clear;
clc;
close all;

% Define x-Array
x = linspace(0, 2, 100);

% calculate both function in for loop
for i = 1:length(x)
    y1(i) = x(i)^3 - 10*x(i)^2 + 4*x(i) + 2;
    y2(i) = 2*x(i) + 2*sin(10*x(i));
end

% % element-wise operation .*, ./, .^
% y1 = x.^3 - 10.*x.^2 +4.*x +2;
% y2 = 2.*x + 2.*sin(10.*x); 

figure(); % open a new plot window
hold on; % Ensures that multiple plots are drawn
plot(x, y1);
plot(x, y2);
xlabel('x')
ylabel('y')
legend('y1', 'y2')


