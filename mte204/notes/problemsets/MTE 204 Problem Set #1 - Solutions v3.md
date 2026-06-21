MTE 204 Problem Set #1
Roots of Equations (Chapter 5, 6, 8 in Chapra 8th edition, International Version)

0.6x2+
| 5.1  | Determine the real roots of  | f(x)= - | 2.4x+ 5.5:  |     |
| ---- | ---------------------------- | ------- | ----------- | --- |
(a)  Graphically.
(b)  Using the quadratic formula.
(c)  Using three iterations of the bisection method to determine the highest root. Employ initial guesses of x = 5
l
and x = 10. Compute the estimated error ε  and the true error ε after each iteration.
|     | u   |     | a   | t   |
| --- | --- | --- | --- | --- |

(a) A plot indicates that roots occur at about x = –1.6 and 5.6.

(b)

εa = (7.5-5)/7.5  x 100% = 33.33%
−1.62859
| −2.4± | (2.4)2−4(−0.6)(5.5) |     |     |     |
| ----- | ------------------- | --- | --- | --- |
|  x=   |                     | =   |     |     |
2(−0.6)
5.62859

(c) First iteration:
5+10
| x = | =7.5  |     |     |     |
| --- | ----- | --- | --- | --- |
r
2
This is eqn 5.3 in Chapra 8th ed.
|     | 5.62859−7.5   |     | 10−5              |     |
| --- | ------------- | --- | ----------------- | --- |
| ε = | ×100%=33.24%  |     | ε = ×100%=33.33%  |     |
| t   |               |     | a 10+5            |     |
5.62859

f(5)f(7.5)=2.5(−10.5)=−26.25

| Therefore, the bracket is x = 5 and x |     |     |     |  = 7.5.  |     |     |     |     |     |
| ------------------------------------- | --- | --- | --- | -------- | --- | --- | --- | --- | --- |
|                                       |     |     | l   | u        |     |     |     |     |     |

Second iteration:
5+7.5
| x = | =6.25  |     |     |     |     |     |     |     |     |
| --- | ------ | --- | --- | --- | --- | --- | --- | --- | --- |
r
2
|     | 5.62859−6.25 |               |     |     | 7.5−5 |               |     |     |     |
| --- | ------------ | ------------- | --- | --- | ----- | ------------- | --- | --- | --- |
| ε = |              | ×100%=11.04%  |     | ε   | =     | ×100%=20.00%  |     |     |     |
| t   |              |               |     | a   |       |               |     |     |     |
|     | 5.62859      |               |     |     | 7.5+5 |               |     |     |     |
f(5)f(6.25)=2.5(−2.9375)=−7.3438

| Consequently, the new bracket is x = 5 and x |     |     | l   |     | u  = 6.25.  |     |     |     |     |
| -------------------------------------------- | --- | --- | --- | --- | ----------- | --- | --- | --- | --- |

Third iteration:
5+6.25
| =   | =5.625  |     |     |     |     |     |     |     |     |
| --- | ------- | --- | --- | --- | --- | --- | --- | --- | --- |
x
r 2
|     | 5.62859−5.625 |                |     |     | 6.25−5 |               |     |     |     |
| --- | ------------- | -------------- | --- | --- | ------ | ------------- | --- | --- | --- |
| ε = |               | ×100%=0.0638%  |     | ε   | =      | ×100%=11.11%  |     |     |     |
| t   | 5.62859       |                |     | a   | 6.25+5 |               |     |     |     |

Or, in tabular form (note that we use capital L and U in Excel and Matlab because the lower case l and
number 1 appear very similar in several common fonts):

|     | xL  | xr    | xU  fxL  |      | fxr      | fxU     | fxL*fxr   | ea(%)     | et(%)     |
| --- | --- | ----- | -------- | ---- | -------- | ------- | --------- | --------- | --------- |
|     | 5   | 7.5   | 10       | 2.5  | -10.25   | -30.5   | -25.625   | 33.33333  | 33.24829  |
|     | 5   | 6.25  | 7.5      | 2.5  | -2.9375  | -10.25  | -7.34375  | 20        | 11.04024  |
5  5.625  6.25  2.5  0.015625  -2.9375  0.039063  11.11111  0.063785

5.5  Locate the first nontrivial root of sin x= x3 where x is in radians. Use a graphical technique and bisection
with the initial interval from 0.5 to 1. Perform the computation until ε  is less than ε 2%. Also perform an error
=
|     |     |     |     |     |     |     | a   | s   |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
check by substituting your final answer into the original equation.

A graph of the function can be generated with MATLAB interactively

>> x=[-0.5:0.1:1.2];
>> f= x.^3 – sin(x);
>> plot(x,f)
>> grid
Scripting can be used to change default plotting parameters and add chart elements, though the few
lines above are sufficient to solve the problem:
% Chapra 8e Chapter 5 problem 5
% RJ Genik II, 15 December 2019
clear
hold off
f = @(x) x.^3 - sin(x);
xtrue = fzero(f,0.6)
xmin = -0.5; xmax = 1.2;
% part a)
x = linspace(xmin, xmax);
y = f(x);
set(gcf,'Position',[400 400 800 400])
plot(x,y)
hold on

plot(xtrue,0,'mo','MarkerFaceColor','m')
set(gca, 'XAxisLocation','origin','YAxisLocation','origin','XMinorTick','on')
xlabel('x \rightarrow')
ylabel('\uparrow f(x)')
title('Graphical root finding f(x) = x^3 - sin(x)')
saveas(gcf,'ch5p5a.jpg')
Note that both functions
f(x)=x3 −sin(x) f(x)=sin(x)−x3
have the same root(s). These plots indicate that a nontrivial root (i.e., nonzero) is located at about 0.925.
Using bisection, the first iteration is
0.5+1
x = =0.75
r
2
f(0.5)f(0.75)=−0.35443(−0.25976)=0.092067
Therefore, the root is in the second interval and the lower guess is redefined as x = 0.75. The second
l
iteration is

0.75+1
x = =0.875
r
2
0.875−0.75
ε = 100%=14.29%
a
0.875
f(0.75)f(0.875)=−0.25976(−0.09762)=0.025359
Because the product is positive, the root is in the second interval and the lower guess is redefined as
x = 0.875. The remainder of the iterations are displayed in the following table:
l
i x x x f(x ) f(x) f(x) |ε| (%)
l r u u r l a
1 0.5 0.75 1 -0.35443 -0.25976 0.158529 33.33
2 0.75 0.875 1 -0.25976 -0.09762 0.158529 14.29
3 0.875 0.9375 1 -0.09762 0.017894 0.158529 6.67
4 0.875 0.90625 0.9375 -0.09762 -0.0429 0.017894 3.45
5 0.90625 0.921875 0.9375 -0.0429 -0.01328 0.017894 1.69
Therefore, after five iterations we obtain a root estimate of 0.921875 with an approximate error of
1.7%, which is below the stopping criterion of 2%. As in the above table, the function value at the root
estimate is −0.013277424.
5.14 Use bisection to determine the drag coefficient needed so that an 80-kg parachutist has a velocity of 35 m/s
after 3.9 s of free fall. Note: The acceleration due to gravity is 9.81 m/s2. Start with initial guesses of x = 3 and
l
x = 5 and iterate until the approximate relative error falls below 5%. Also perform an error check by substituting
u
your final answer into the original equation.
The function to evaluate is
f(c)=
9.81(82)( 1−e−(c/82)4)
−36=0
c
f(c)=9.81 * 80/c * (1-exp(-c/80*3.9))-35
[There is a slight misprint in the solutions manual. In the above equation, which is a rearrangement of
the example we did in class, the mass should be 80 (not 82) and the velocity should be 35 m/s (not 36
m/), and time is 3.9s. further down in the solution (below the table), the correct values are shown. You
are solving for 'c' in this example.]

The first iteration is
3+5
x = =4
r
2
f(3)f(4)=0.592854(−0.24016)=−0.142380
Therefore, the root is in the first interval and the upper guess is redefined as x = 4. The second iteration
u
is
3+4
x = =3.5
r
2
3.5−4
ε = 100%=14.29%
a
3.5
f(3)f(3.5)=0.592854(0.173011)=0.102571
Therefore, the root is in the upper interval and the lower bound is redefined as x = 3.5. The remaining
l
iterations are displayed in the following table:
i xl xr xu f(xl) f(xr) f(xu) f(xl)× f(xr) |ε a | (%)
1 3 4 5 0.592854 -0.24016 -1.04696697 -0.142380 25.00
2 3 3.5 4 0.592854 0.173011 -0.24015991 0.102571 14.29
3 3.5 3.75 4 0.173011 -0.034401 -0.24015991 -0.005952 6.67
4 3.5 3.625 3.75 0.173011 0.069098 -0.03440052 0.011955 3.45
5 3.625 3.6875 3.75 0.069098 0.017297 -0.03440052 0.001195 1.69
Thus, after five iterations, we obtain a root estimate of 3.6875 with an approximate error of 1.69%. This
result can be checked by substituting your final answer into the original equation to yield
v=
9.81(80)( 1−e−(3.6875/80)3.9)
=35.0173
3.6875
Note that this result is within 0.05% of the input velocity.

6.2 Determine the highest real root of
f(x)=2.1x3−11.6x2+17.5x−6
(a) Graphically.
(b) Fixed-point iteration method (three iterations, x = 3). Note: Make certain that you develop a solution that
0
converges on the root.
(c) Newton-Raphson method (three iterations, x = 3).
0
(d) Secant method (three iterations, x = 3,x = 4).
-1 0
Compute the approximate percent relative errors for your solutions.
(a) Graphical
Root ≈ 3.2
(b) Fixed point
The equation can be solved in numerous ways. A simple way that converges is to solve for the x that is
not raised to a power to yield
6- 2.1x3+11.5x2
x=
17.5
The resulting iterations are

| i   | x   | ε       |     |     |     |
| --- | --- | ------- | --- | --- | --- |
|     | i   | a  (%)  |     |     |     |
|     | 3   |         |     |     |     |
0
| 1   | 3.068571  | 2.234637  |     |     |     |
| --- | --------- | --------- | --- | --- | --- |
|     | 3.117118  | 1.557426  |     |     |     |
2
|     | 3.14899  | 1.012117  |     |     |     |
| --- | -------- | --------- | --- | --- | --- |
3

(c) Newton-Raphson

| i   | x   | f(x)  |     | f'(x)  | ε       |
| --- | --- | ----- | --- | ------ | ------- |
|     | i   |       |     |        | a  (%)  |
|     | 3   | -1.2  |     | 4.6    |         |
0
|     | 3.26087  | 0.534068  | 8.837429  |     | 8   |
| --- | -------- | --------- | --------- | --- | --- |
1
|     | 3.200437  | 0.032199  | 7.779484  |     | 1.888256  |
| --- | --------- | --------- | --------- | --- | --------- |
2
|     | 3.196298  | 0.000147  | 7.708711  |     | 0.129492  |
| --- | --------- | --------- | --------- | --- | --------- |
3

(d) Secant

| i   | x   | f(x i)  |     | ε       |     |
| --- | --- | ------- | --- | ------- | --- |
|     | i   |         |     | a  (%)  |     |
|     | 3   | -1.2    |     |         |     |
-1
|     | 4   | 12.8  |     |     |     |
| --- | --- | ----- | --- | --- | --- |
0
| 1   | 3.085714  | -0.75076  |     | 25        |     |
| --- | --------- | --------- | --- | --------- | --- |
|     | 3.136369  | -0.43162  |     | 29.62963  |     |
2
|     | 3.204878  | 0.066916  |     | 1.615072  |     |
| --- | --------- | --------- | --- | --------- | --- |
3

6.4  Determine the real roots of  3.9x2+ 0.5x3: (a) graphically and (b) using the Newton-
|                            |     |     | f(x)=   | - 1.5+ | 6x- |
| -------------------------- | --- | --- | ------- | ------ | --- |
| Raphson method to within ε |     |     | 0.01%.  |        |     |
=
s

(a) A graph of the function indicates that there are 3 real roots at approximately 0.3, 1.7, and 5.8.

(b) The Newton-Raphson method can be set up as
−1.5+6x −3.9x2+0.5x3
x
i+1
= x
i
−
6−7
i
.8x +1
i
.5x2
i
i i
This formula can be solved iteratively to determine the three roots as summarized in the following
tables:
i x
i
f(x) f'(x) ε
a
(%)
0 -1.5 6
0
0.25 -0.23594 4.14375 100
1
0.306938 -0.01134 3.747199 18.55037
2
0.309963 -3.1E-05 3.726403 0.975949
3
0.309972 -2.4E-10 3.726345 0.002724
4
i x
i
f(x) f'(x) ε
a
(%)
2 -1.1 -3.6
0

|     |     |     | 1.694444  | -0.09829  |     | -2.90995  | 18.03279  |
| --- | --- | --- | --------- | --------- | --- | --------- | --------- |
1
|     |     |     | 1.660667  | -0.00157  |     | -2.81648  | 2.033989  |
| --- | --- | --- | --------- | --------- | --- | --------- | --------- |
2
|     | 3   |     | 1.66011   | -4.4E-07  |     | -2.81491  | 0.033558  |
| --- | --- | --- | --------- | --------- | --- | --------- | --------- |
|     |     |     | 1.660109  | -3.6E-14  |     | -2.81491  | 9.36E-06  |
4

|     | i   |     | x   |     | f(x)  | f'(x)  | ε      |
| --- | --- | --- | --- | --- | ----- | ------ | ------ |
|     |     |     | i   |     |       |        | a (%)  |
|     |     |     |     | 6   | 2.1   | 13.2   |        |
0
|     |     |     | 5.840909  | 0.127067  |     | 11.61524  | 2.723735  |
| --- | --- | --- | --------- | --------- | --- | --------- | --------- |
1
|     |     |     | 5.829969  | 0.000581  |     | 11.50905  | 0.187646  |
| --- | --- | --- | --------- | --------- | --- | --------- | --------- |
2
|     | 3   |     | 5.829919  | 1.24E-08  |     | 11.50856  | 0.000866  |
| --- | --- | --- | --------- | --------- | --- | --------- | --------- |

Therefore, the roots are 0.309972, 1.660109, and 5.829919.

6.11  Use the Newton-Raphson method to find the root of

0.5x(4-
|     | f(x)= | e-  |     | x)- 2  |     |     |     |
| --- | ----- | --- | --- | ------ | --- | --- | --- |

Employ initial guesses of (a) 2, (b) 6, and (c) 8. Explain your results.

The Newton-Raphson method can be set up as

−0.5x
|     |      | e i(4−x | )−2 |     |     |     |     |
| --- | ---- | ------- | --- | --- | --- | --- | --- |
| x   | =x − |         | i   |     |     |     |     |
i+1 i
|     |     | −e −0.5x | i(3−0.5x | )   |     |     |     |
| --- | --- | -------- | -------- | --- | --- | --- | --- |
i

(a)

|     | i            | x   |           | f(x)  | f'(x)     |     |     |
| --- | ------------ | --- | --------- | ----- | --------- | --- | --- |
|     | 0            | 2   | -1.26424  |       | -0.73576  |     |     |
|     | 1  0.281718  |     | 1.229743  |       | -2.48348  |     |     |
|     | 2  0.776887  |     | 0.18563   |       | -1.77093  |     |     |

| 3  0.881708  |     | 0.006579  | -1.64678  |     |
| ------------ | --- | --------- | --------- | --- |
| 4  0.885703  |     | 9.13E-06  | -1.64221  |     |
| 5  0.885709  |     | 1.77E-11  | -1.6422   |     |
| 6  0.885709  |     | 0         | -1.6422   |     |

(b) The case does not work because the derivative is zero at x  = 6.
0

(c)
| i            | x   | f(x)      | f'(x)         |     |
| ------------ | --- | --------- | ------------- | --- |
| 0            | 8   | -2.07326  | 0.018316      |     |
| 1  121.1963  |     |           | -2  2.77E-25  |     |
| 2  7.21E+24  |     |           | -2  0         |     |

This guess breaks down because, as depicted in the following plot, the near zero, positive slope sends
the method away from the root.

33
22
11
|     | 44  | 88  | 1122 | 1166 |
| --- | --- | --- | ---- | ---- |
00
--11
--22
| --33 |     |     |     |     |
| ---- | --- | --- | --- | --- |

6.19  You are designing a spherical tank (Fig. P6.19) to hold water for a small village in a developing country. The
volume of liquid it can hold can be computed as
2[3R−h]
V =πh
|     |     | 3   |     |     |
| --- | --- | --- | --- | --- |
where V = volume (m3), h = depth of water in tank (m), and R = the tank radius (m). If R = 4 m, what
depth must the tank be filled to so that it holds 50 m3? Use three iterations of the Newton-Raphson
method to determine your answer. Determine the approximate relative error after each iteration. Note
that an initial guess of R will always converge.

The equation to be solved is
π
| f(h)=πRh2 | h3   |     |     |     |
| --------- | ----- | --- | --- | --- |
|           | − −V |     |     |     |
3

Because this equation is easy to differentiate, the Newton-Raphson is the best choice to achieve results
efficiently. It can be formulated as
π
| πRx2 | − x3 | −V  |     |     |
| ---- | ------ | --- | --- | --- |
|      | i i    |     |     |     |
3
x =x −
i+1 i
|     | 2πRx −πx2 |     |     |     |
| --- | --------- | --- | --- | --- |
|     | i         | i   |     |     |
or substituting the parameter values,
π
| π(4)x | 2− x | 3−50 |     |     |
| ----- | ------ | ---- | --- | --- |
|       | i      | i    |     |     |
 3
x =x −
i+1 i
|     | 2π(4)x −πx2 |     |     |     |
| --- | ----------- | --- | --- | --- |
|     | i           | i   |     |     |
The iterations can be summarized as

|     | x i   | f(x i )  | f'(x i )  | |ε | (%)  |
| --- | ----- | -------- | --------- | --------- |
a
iteration

| 0   | 4         | 84.04129  | 50.26548  |           |
| --- | --------- | --------- | --------- | --------- |
|     | 2.328052  | 4.894374  | 41.48344  | 71.81749  |
1
|     | 2.210068  | 0.074837  | 40.20027  | 5.338469  |
| --- | --------- | --------- | --------- | --------- |
2
|     | 2.208206  | 1.95E-05  | 40.17932  | 0.084304  |
| --- | --------- | --------- | --------- | --------- |
3

Thus, after only three iterations, the root is determined to be 2.208206 with an approximate relative
error of 0.084%.

8.4 The following equation pertains to the concentration of a chemical in a completely mixed reactor:
c= c (1- e-0.04t)+ c e-0.04t
in 0
If the initial concentration c = 4 and the inflow concentration c = 10, compute the time required for c to be 93% of
0 in
c .
in
The function to be solved is
f(t)= 10(1- e-0.04t)+ 4e-0.04t- 9.3= 0
A plot of the function indicates a root at about t = 55.
2
0
0 20 40 60 80 100
-2
-4
-6
Bisection with initial guesses of 0 and 60 can be used to determine a root of 53.711 after 16 iterations
with ε = 0.002%.
a
8.44 The upward velocity of a rocket can be computed with the following formula:
m
υ= uln 0 - gt
m - qt
0
where υ = upward velocity, u = the velocity at which fuel is expelled relative to the rocket, m = the initial mass of
0
the rocket at time t = 0, q = the fuel consumption rate, and g = the downward acceleration of gravity (assumed
constant = 9.81 m/s2). If u = 2200 m/s, m = 160,000 kg, and q = 2680 kg/s, compute the time at which υ = 1000
0
m/s. (Hint: t is somewhere between 10 and 50 s.) Determine your result so that it is within 1% of the true value.
Check your answer.
The solution can be formulated as
m
f(t)=uln 0 −gt−v
m −qt
0

Substituting the parameter values gives

160,000
| f(t)=2,200ln |     | −9.81t−1,000  |     |     |     |
| ------------ | --- | ------------- | --- | --- | --- |
160,000−2,680t

A plot of this function indicates a root at about t = 26.
3000
2000
1000
0
| -1000 0 | 10 20 | 30 40 | 50 60 |     |     |
| ------- | ----- | ----- | ----- | --- | --- |

Because two initial guesses are given, a bracketing method like bisection can be used to determine the
root,

|        |        | f(tl)             | f(tr)     | f(tl)×f(tr)  |         |
| ------ | ------ | ----------------- | --------- | ------------ | ------- |
| i  tl  | tu     | tr                |           |              | ε a     |
| 1  10  | 50     | 30  -694.791      | 241.6514  | -167897      |         |
| 2  10  | 30     | 20  -694.791      | -298.67   | 207513.3     | 50.00%  |
| 3  20  | 30     | 25  -298.67       | -51.5865  | 15407.33     | 20.00%  |
| 4  25  | 30     | 27.5  -51.5865    | 88.38228  | -4559.33     | 9.09%   |
| 5  25  | 27.5   | 26.25  -51.5865   | 16.86085  | -869.792     | 4.76%   |
| 6  25  | 26.25  | 25.625  -51.5865  | -17.7329  | 914.7789     | 2.44%   |
7  25.625  26.25  25.9375  -17.7329  -0.53026  9.403139  1.20%
8  25.9375  26.25  26.09375  -0.53026  8.141517  -4.31716  0.60%

Thus, after 8 iterations, the approximate error falls below 1% with a result of t = 26.09375. Note that if
the computation is continued, the root can be determined as 25.94708.