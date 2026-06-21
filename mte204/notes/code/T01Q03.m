% Matlab initialization
close all;  % closes all plots
clear;      % clears memory
clc;        % clears command window

% set model parameters
g = 9.81;
t = 3.9;
m = 80;
v = 35;

% Set initial variables
xLow = 3;
xUpp = 5;
errorTol = 0.05;
iterMax = 10;


% Set up a function handle for convenience
dragFun = @(c) (g*m/c)*(1 - exp(-c/m*t))-v;

% Start the bracketing method. This implimentation does take some steps to
% minimize the number of function evaluations for efficiency. Specifically,
% it save values from previous iterations so only one new evaluation is 
% needed for each new iteration. 
error = 1;
iter = 1;
% Compute functions at bounds
fLow = dragFun(xLow);
fUpp = dragFun(xUpp);

% Pretty-printing
fprintf(' iter|   xLow|   xMid|   xUpp|    f(xLow)|    f(xMid)|    f(xUpp)|   fBracket| Error\n')

% Iterate until our error falls below tolerance or we reach the maximum
% number of iterations. The latter option prevents the computer from
% falling into an infinate loop. NOTE: hitting crtl+c will cause Matlab to
% force-quit its current process, breaking infinate loops. 
while (error > errorTol) && (iter <= iterMax)  
    % Compute the midpoint and function at midpoint
    xMid = 0.5*(xLow + xUpp);
    fMid = dragFun(xMid);
    
    % Compute fLow*fMid
    fBracket = fLow*fMid;
    
    % This code pretty-prints data
    fprintf('%4d | %2.4f| %2.4f| %2.4f| %10f| %10f| %10f| %10f|',...
        iter, xLow, xMid, xUpp, fLow, fMid, fUpp, fBracket)
    
    % Start logic for bracket replacement
    if (fBracket < 0)  % replace xLow with xMid
        xUpp = xMid;
        fUpp = fMid;    % Minimizes function evaluations
        error = abs((xMid-xLow)/xMid);     
    else % replace xHigh with xMid
        xLow = xMid;
        fLow = fMid; % minimizes function evaluations
        error = abs((xMid-xUpp)/xMid);
    end
    
    % More pretty-printing
    fprintf(' %2.5f\n', error)
    
    % increase iteration count
    iter = iter + 1;  
end    
    