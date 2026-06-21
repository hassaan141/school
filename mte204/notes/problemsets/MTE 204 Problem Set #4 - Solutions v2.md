MTE 204 Problem Set #4: Solutions
Regression and Interpolation (Chapter 17 and 18 in Chapra 8th edition, International Version)
17.3  Use least-squares regression to fit a straight line to

| x  0  2  | 4   | 6  9  | 11  12  15  | 17  19  |     |     |
| -------- | --- | ----- | ----------- | ------- | --- | --- |
| y  4  6  | 7   | 6  9  | 8  8  10    | 12  12  |     |     |

Along with the slope and intercept, compute the standard error of the estimate and the correlation coefficient. Plot
the data and the regression line. Then repeat the problem, but regress x versus y—that is, switch the variables.
Interpret your results.

The results can be summarized as

|     |     |     |     | y versus x  |     | x versus y  |
| --- | --- | --- | --- | ----------- | --- | ----------- |
Best fit equation  y = 4.5471295 + 0.3845127x  x = − 9.6688312 + 2.3376623y
| Standard error               |     |     |     | 2.616188916  |     | 6.450667493  |
| ---------------------------- | --- | --- | --- | ------------ | --- | ------------ |
| Correlation coefficient (r)  |     |     |     | 0.9481       |     | 0.9481       |
Coefficient of Determination
|     |     |     |     | 0.898860819  |     | 0.898860819  |
| --- | --- | --- | --- | ------------ | --- | ------------ |
(r2)

We can solve the second fit for the line on the same axes:  We did not cover standard error in
class
| x=a +a | y   |     |     |     |     |     |
| ------ | --- | --- | --- | --- | --- | --- |
0 1
| x a    | 1        |     | −9.66883           |     |     |     |
| ------ | -------- | --- | ------------------ | --- | --- | --- |
| y= − 0 | =        | x−  | =0.427778x+4.13611 |     |     |     |
| a a    | 2.337662 |     | 2.337662           |     |     |     |
| 1 1    |          |     |                    |     |     |     |

We can now plot both lines on the same graph  The value provided in the solution is
not the standard error of the
|     |     |     |     |     |     | estimate, but rather the standard  |
| --- | --- | --- | --- | --- | --- | ---------------------------------- |
deviation sy, which is defined below.

For this problem, the standard error
of the estimate sy/x for y vs x is
0.8825. The standard deviation sy is
2.6162.

14
12
10
8
6
4
2
0
0 5 10 15 20 25
The “best” fit lines and standard errors differ depending on the choice of independent and dependent
variable. This makes sense because in the development of the technique, the independent variable is
assumed to have negligible error. We thus minimize the residuals with different assumptions, leading to
slightly different values for the fit parameters. The standard error calculation is significantly different
between the two choices, with the y as dependent having much smaller standard error than x as
dependent. This makes sense if x is actually an independent rather than stochastic variable. In contrast,
the correlation coefficients are identical since this statistic is measuring how well the linear regression
method models the set of points, regardless of dependent / independent choice. This can also be
thought of as the same amount of uncertainty is explained through linear regression, regardless of how
the data points are plotted.
17.8 Fit the following data with the power model (y = axb). Use the resulting power equation to predict y at x = 9:
x 2.5 3.5 5 6 7.5 10 12.5 15 17.5 20
y 13 11 8.5 8.2 7 6.2 5.2 4.8 4.6 4.3
y
Effect of dependent variable choice
y, x tabular data
y(x) regression
x(y) regression
x

| We regress log | (y) versus log | (x) to give  |
| -------------- | -------------- | ------------ |
|                | 10             | 10           |

| y=1.325225−0.54029log |     | x   |
| --------------------- | --- | --- |
log
| 10  |     | 10  |
| --- | --- | --- |

Therefore, α = 101.325225 = 21.14583 and β = −0.54029, and the power model is
2 2

| y=21.14583x | −0.54029  |     |
| ----------- | --------- | --- |

The model and the data can be plotted as

14
y = 21.146x-0.5403
12
| 10  |     |     | R2 = 0.9951 |     |
| --- | --- | --- | ----------- | --- |
8
6
4
2
0
| 0   | 5   | 10  | 15  | 20  |
| --- | --- | --- | --- | --- |

The model can be used to predict a value of 21.14583(9)−0.54029 = 6.451453.
|     |     |     |     |     |
| --- | --- | --- | --- | --- |

17.9 Fit an exponential model to
x 0.4 0.8 1.2 1.6 2 2.3
y 800 980 1500 1945 2900 3600
Plot the data and the equation on both standard and semilogarithmic graph paper.
We regress ln(y) versus x to give
lny=6.306136+0.817507x
Therefore, α = e6.306136 = 547.923501 and β = 0.817507, and the exponential model is
1 1
y=547.923501e0.817507x
The model and the data can be plotted as
4000
3500
3000
2500 y = 547.923501e0.817507x
R² = 0.996523
2000
1500
1000
500
0
0 0.5 1 1.5 2 2.5
)y(nl
Exponential fit
x

A semi-log plot can be developed by plotting the natural log y versus x. As expected, both the data and
the best-fit line are linear when plotted in this way.
10
8
6
y = 0.817507x + 6.306136
4
R² = 0.993689
2
0
0 0.5 1 1.5 2 2.5
17.17 Given these data
x 5 10 15 20 25 30 35 40 45 50
y 17 24 31 33 37 37 40 40 42 41
use least-squares regression to fit (a) a straight line, (b) a power equation, (c) a saturation-growth-rate equation, and
(d) a parabola. Plot the data along with all the curves. Is any one of the curves superior?
If so, justify.
(a) We regress y versus x to give
y = 20.6 + 0.494545x
The model and the data can be plotted as
)y(nl
Semi-log plot
50
40
30
y = 0.4945x + 20.6
20
R2 = 0.8385
10
0
0 10 20 30 40 50 60

(b) We regress log y versus log x to give
10 10
log y=0.99795+0.385077log x
10 10
Therefore, α = 100.99795 = 9.952915 and β = 0.385077, and the power model is
2 2
y=9.952915x0.385077
The model and the data can be plotted as
50
40
30
y = 9.9529x0.3851
20
R2 = 0.9553
10
0
0 10 20 30 40 50 60
(d) We employ polynomial regression to fit a parabola
y=−0.01606x2+1.377879x+11.76667
The model and the data can be plotted as
50
40
30
y = -0.0161x2 + 1.3779x + 11.767
20
R2 = 0.98
10
0
0 10 20 30 40 50 60

Comparison of fits: The linear fit is obviously inadequate. Although the power fit follows the general
trend of the data, it is also inadequate because (1) the residuals do not appear to be randomly
distributed around the best fit line and (2) it has a lower r2 than the saturation and parabolic models.
The best fits are for the saturation-growth-rate and the parabolic models. They both have randomly
distributed residuals and they have similar high coefficients of determination. The saturation model has
a slightly higher r2. Although the difference is probably not statistically significant, in the absence of
additional information, we can conclude that the saturation model represents the best fit.
18.3 Estimate the natural logarithm of 10 using linear interpolation.
(a) Interpolate between ln 8 = 2.0794415 and ln 12 = 2.4849066.
(b) Interpolate between ln 9 = 2.1972246 and ln 11 = 2.3978953. For each of the interpolations, compute the
percent relative error based on the true value.
(a)
2.484907−2.079442
f (10)=2.079442+ (10−8)=2.282174
1 12−8
2.302585−2.282174
ε = ×100%=0.886%
t
2.302585
(b)
2.397895−2.197225
f (10)=2.197225+ (10−9)=2.29756
1 11−9
2.302585−2.29756
ε = ×100%=0.218%
t
2.302585

Question 18.4
Textbook solution…
18.4 Fit a second-order Newton’s interpolating polynomial to estimate ln 10 using the data from Prob. 18.3 at x =
8, 9, and 11. Compute the true percent relative error.
First, order the points
x = 9 f(x ) = 2.197224577
0 0
x = 11 f(x ) = 2.397895273
1 1

x = 8 f(x ) = 2.079441542
2 2
Applying Eq. (18.4)
b = 0.9542425
0
Equation (18.5) yields
2.397895−2.197225
b = =−0.00582
1 11−9
Equation (18.6) gives
2.079442−2.397895
−0.100335
8−11 0.106151−0.100335
b = = =−0.00582
2 8−9 8−9
Substituting these values into Eq. (18.3) yields the quadratic formula
f (x)=2.197225+0.100335(x−9)−0.00582(x−9)(x−11)
2
which can be evaluated at x = 10 for
f (x)=2.197225+0.100335(10−9)−0.00582(10−9)(10−11)=2.303376
2
as cross-check, we can calculate the true relative error, and it should be less than the first order:
2.303376−2.302585
ε t (%)=  ×100%=0.034341%
 2.302585 

18.5  Fit a third-order Newton’s interpolating polynomial to estimate ln 10 using the data from
Prob. 18.3.

Problem 18.5 (see also example 18.3 in the textbook)
Data
| x   | f(x)=ln(x) |     |      |     |     |
| --- | ---------- | --- | ---- | --- | --- |
| x0  | 8 2.079442 |     | 2.55 |     |     |
2.50
| x1  | 9 2.197225  |     |      |     |     |
| --- | ----------- | --- | ---- | --- | --- |
| x2  | 11 2.397895 |     | 2.45 |     |     |
| x3  | 12 2.484907 |     | 2.40 |     |     |
2.35
2.30
| General form: |     |     | y   |     |     |
| ------------- | --- | --- | --- | --- | --- |
2.25
2.20
2.15
2.10
2.05
|     |     |     | 6 7 | 8 9 10 | 11 12 13 |
| --- | --- | --- | --- | ------ | -------- |
| or  |     |     |     | x      |          |
bo 2.079442
|     |     | b1 0.117783 | 0.100335 |     |     |
| --- | --- | ----------- | -------- | --- | --- |
0.087011
b2 -0.00582
|     | 0.000344 | b3 0.000344 |     | -0.00582 |     |
| --- | -------- | ----------- | --- | -------- | --- |
-0.00444
| x f3(x)     | ln(10)   |     |     |     |     |
| ----------- | -------- | --- | --- | --- | --- |
| 10 2.302689 | 2.302585 |     |     |     |     |
εt 0.004495%

Or using divided differences:
*** Note, the true error calculated in the textbook solution below is not quite right. it should be the abs{[ln(10)-
2.302689]/ln(10)}. The correct answer is shown above.

First, order the points

| x  = 9  | f(x ) = 2.197224577  |     |     |     |     |
| ------- | -------------------- | --- | --- | --- | --- |
| 0       | 0                    |     |     |     |     |

| x  = 11  f(x | ) = 2.397895273  |     |
| ------------ | ---------------- | --- |
| 1            | 1                |     |
x f(x
| 2  = 8       | 2 ) = 2.079441542  |     |
| ------------ | ------------------ | --- |
| x  = 12  f(x | ) = 2.48490665     |     |
| 3            | 3                  |     |

The first divided differences can be computed as

2.397895−2.197225
| f[x ,x ]= | =0.100335  |     |
| --------- | ---------- | --- |
1 0
11−9
2.079442−2.397895
| f[x ,x ]= | =0.106151  |     |
| --------- | ---------- | --- |
| 2 1       | 8−11       |     |
2.484907−2.079442
| f[x ,x ]= | =0.101366  |     |
| --------- | ---------- | --- |
| 3 2       | 12−8       |     |

The second divided differences are

0.106151−0.100335
| f[x ,x ,x | ]= =−0.00582  |     |
| --------- | ------------- | --- |
| 2 1       | 0 8−9         |     |
0.101366−0.106151
| f[x ,x ,x | ]= =−0.00478  |     |
| --------- | ------------- | --- |
3 2 1
12−11

The third divided difference is

−0.00478−(−0.00582)
| f[x ,x ,x | ,x ]=    | =0.000344  |
| --------- | -------- | ---------- |
| 3 2       | 1 0 12−9 |            |

Substituting the appropriate values into Eq. (18.7) gives

f (x)=2.197225+0.100335(x−9)−0.00582(x−9)(x−11)
3

                                                                    +0.000344(x−9)(x−11)(x−8)

which can be evaluated at x = 10 for

f (10)=2.197225+0.100335(10−9)−0.00582(10−9)(10−11)
3

                                                                    +0.000344(10−9)(10−11)(10−8)=2.302689

as cross-check, we can calculate the true relative error, and it should be less than the second order:

2.303376−2.302689
| ε (%)=  |          | ×100%=0.004492%  |
| -------- | -------- | ----------------- |
| t       | 2.302585 |                  |

18.15  Develop quadratic splines for the first five data points in Prob. 18.7 and predict f(3.4) and f(2.2).

For the present problem, we have five data points and n = 4 intervals. Therefore, 3(4) = 12 unknowns
must be determined. Equations 18.29 and 18.30 yield 2(4) – 2 = 6 conditions

| 4a +2b +c    | =8      |     |
| ------------ | ------- | --- |
| 1 1          | 1       |     |
| 4a +2b +c    | =8      |     |
| 2 2          | 2       |     |
| 6.25a +2.5b  | +c =14  |     |
| 2            | 2 2     |     |
| 6.25a +2.5b  | +c =14  |     |
| 3            | 3 3     |     |
| 10.24a +3.2b | +c =15  |     |
| 3            | 3 3     |     |
| 10.24a +3.2b | +c =15  |     |
| 4            | 4 4     |     |

|     |     |     |
| --- | --- | --- |

Passing the first and last functions through the initial and final values adds 2 more

| 2.56a +1.6b | +c =2  |     |     |     |     |     |     |
| ----------- | ------ | --- | --- | --- | --- | --- | --- |
| 1           | 1 1    |     |     |     |     |     |     |
| 16a +4b +c  | =8     |     |     |     |     |     |     |
| 4 4         | 4      |     |     |     |     |     |     |

Continuity of derivatives creates an additional 4 – 1 = 3.

| 4a +b =4a | +b   |     |     |     |     |     |     |
| --------- | ---- | --- | --- | --- | --- | --- | --- |
| 1 1       | 2 2  |     |     |     |     |     |     |
| 5a +b =5a | +b   |     |     |     |     |     |     |
| 2 2       | 3 3  |     |     |     |     |     |     |
| +b =6.4a  | +b   |     |     |     |     |     |     |
| 6.4a      |      |     |     |     |     |     |     |
| 3 3       | 4 4  |     |     |     |     |     |     |

Finally, Eq. 18.34 specifies that a  = 0. Thus, the problem reduces to solving 11 simultaneous equations
1
for 11 unknown coefficients,

|         |     |         |     |         |     | 0b   |  8   |
| -------- | --- | ------- | --- | ------- | --- | ------ | ------- |
| 2 1 0    | 0   | 0 0     | 0   | 0 0     | 0   | 1      |         |
|         |     |         |     |         |     | 0c   |  8   |
| 0 0 4    | 2   | 1 0     | 0   | 0 0     | 0   | 1      |         |
|         |     |         |     |         |     | 0a   |  14  |
| 0 0 6.25 | 2.5 | 1 0     | 0   | 0 0     | 0   | 2      |         |
|         |     |         |     |         |     | 0b   |  14  |
| 0 0 0    | 0   | 0 6.25  | 2.5 | 1 0     | 0   | 2     |         |
|         |     |         |     |         |     | 0 c  | 15    |
| 0 0 0    | 0   | 0 10.24 | 3.2 | 1 0     | 0   |  2   |       |
|         |     |         |     |         |     | 1 a  | =15  |
| 0 0 0    | 0   | 0 0     | 0   | 0 10.24 | 3.2 | 3      |         |
|         |     |         |     |         |     |       |         |
| 1.6 1 0  | 0   | 0 0     | 0   | 0 0     | 0   | 0 b   |  2   |
|         |     |         |     |         |     |  c 3 |  8   |
| 0 0 0    | 0   | 0 0     | 0   | 0 16    | 4   | 1      |         |
|  −4     | −1  |         |     |         |     |  a 3 |  0   |
| 1 0      |     | 0 0     | 0   | 0 0     | 0   | 0      |         |
|         |     | −5      | −1  |         |     |  b 4 |  0   |
| 0 0 5    | 1   | 0       |     | 0 0     | 0   | 0      |         |
|         |     |         |     | −6.4    | −1  |   4  |  0  |
|  0 0 0  | 0   | 0 6.4   | 1   | 0       |     | 0  c |       |
4
which can be solved for

| b  = 15          | c  = −22       |     |                |     |              |                  |     |
| ---------------- | -------------- | --- | -------------- | --- | ------------ | ---------------- | --- |
| 1                | 1              |     |                |     |              |                  |     |
| a  = −6          | b              |     |                | c   |  = −46       |                  |     |
| 2                | 2  = 39        |     |                |     | 2            |                  |     |
| a  = −10.816327  |                | b   |  = 63.081633   |     |              | c  = −76.102041  |     |
| 3                |                | 3   |                |     |              | 3                |     |
| a  = −3.258929 b |  = 14.714286   |     |                | c   |  = 1.285714  |                  |     |
| 4                | 4              |     |                |     | 4            |                  |     |

The predictions can be made as

f(3.4)=−3.258929(3.4)2+14.714286(3.4)+1.285714=13.64107
f(2.2)=−6(2.2)2+39(2.2)−46=10.76
Finally, here is a plot of the data along with the quadratic spline,
20
spline
15 data
10
5
0
0 1 2 3 4 5