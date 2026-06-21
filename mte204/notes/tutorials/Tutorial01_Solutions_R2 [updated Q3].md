MTE 204 – Numerical Methods
Tutorial #1 Solutions

Question 1:
The volume   of liquid in a spherical tank of radius   is related to the depth of the liquid   by the following
equation.
| 𝑉𝑉� |     | 𝑅𝑅  |     | ℎ   |     |
| --- | --- | --- | --- | --- | --- |

2
|     |     | 𝜋𝜋ℎ (3𝑅𝑅−ℎ) |     |     |     |
| --- | --- | ----------- | --- | --- | --- |
𝑉𝑉� = ntaining 0.5 m3 of liquid, find the depth of the liquid in the
| For a spherical tank with a radius of 1 m and |     |  co |     |     |     |
| --------------------------------------------- | --- | --- | --- | --- | --- |
3
tank. Use fixed point iteration for this problem.
Solution:
First, let us reorganize our equation for volume such that all terms are on the right hand side. Let us further
expand our terms to form a standardized polynomial expression.

|     |     | 3           | 2 3   |     |     |
| --- | --- | ----------- | ----- | --- | --- |
|     |     | 0 = ℎ −3𝑅𝑅ℎ | + 𝑉𝑉� |     |     |
Lets plot this function for a range of heights to determine the overall shape, number of roots, and
𝜋𝜋
approximate location of those roots. Based on this graph (below), we can see there is a single root
| between   = 0.4 and  |  = 0.5.   |     |     |     |     |
| -------------------- | --------- | --- | --- | --- | --- |
| 0.5 ℎ                | ℎ         |     |     |     |     |
0
-0.5
-1
-1.5
-2
| 0 0.1 | 0.2 0.3 | 0.4 0.5 | 0.6 0.7 | 0.8 0.9 | 1   |
| ----- | ------- | ------- | ------- | ------- | --- |

The MATLAB code used to produce this graph is in the box below. Plotting requires creating an array of
heights, then sequentially evaluating the function at each height. In this case, we use a for loop.
% Initialize h array to be used for plotting. linspace(a,b,n) creates an
% array of n points between a and b
h = linspace(0,1,100);
% compute the function at all points in x
for i = 1:length(h)
y(i) = h(i)^3-3*R*h(i)^2+3/pi*V;
end
% Create the plot
figure(); % This forces matlab to create a new figure
hold on; % by default matlab overwrites every plot its mades. This stops
that behaviour
% create a line plot
plot(h,y)
grid on; % enables grid lines on the plot
% Set x plot limits. Matlab sets y-limits automatically to match
xlim([0,1])
To perform fixed-point iteration, we must modify our equation to be in the form , where x is
the variable we are solving for ( in this case). There are two options for doing this: 1) we can add to
𝑔𝑔(𝑥𝑥) = 𝑥𝑥
both sides or 2) rearrange the equation to place and isolated in the equation. Let’s try both options.
ℎ 𝑥𝑥
Recall, the equation we are trying to find roots for is 𝑥𝑥
3 2 3
Option 1: Add to both sides 0 = ℎ −3𝑅𝑅ℎ + 𝑉𝑉�
𝜋𝜋
ℎ
𝑔𝑔(𝑥𝑥) = 𝑥𝑥
3 2 3
ℎ = ℎ −3𝑅𝑅ℎ +ℎ+ 𝑉𝑉�
𝜋𝜋
3 2 3
𝑔𝑔(ℎ) = ℎ −3𝑅𝑅ℎ +ℎ+ 𝑉𝑉�
𝜋𝜋
Option 2: Rearrange equation to place an isolated on one side
Let’s rearrange our initial equation to place the squared on the left-hand side
ℎ
ℎ
2 3 3
3𝑅𝑅ℎ = ℎ + 𝑉𝑉�
𝜋𝜋

Now isolate   on the left-hand side.
ℎ

3
3
|     |     | ℎ + 𝑉𝑉� |     |     |
| --- | --- | ------- | --- | --- |
� 𝜋𝜋
|     |     | ℎ = |     |     |
| --- | --- | --- | --- | --- |
3𝑅𝑅

|     |     | 3 3 |     |     |
| --- | --- | --- | --- | --- |
𝑉𝑉�
ℎ +
|     |       | � 𝜋𝜋 |     |     |
| --- | ----- | ---- | --- | --- |
|     | 𝑔𝑔(ℎ) | =    |     |     |
We have now created two different   for the same e3qu𝑅𝑅ation. Will both converge to the same
answer? Let’s find out. Starting with an initial guess of  , the table below details the first six
𝑔𝑔(ℎ)
iteration of the fixed-point method
|            |                      | ℎ0 = 0.5    |                     |             |
| ---------- | -------------------- | ----------- | ------------------- | ----------- |
| ITERATION  |                      | OPTION 1:   |                     | OPTION 2:   |
|            | ADD   TO BOTH SIDES  |             | REARRANGE EQUATION  |             |
|            |                      | 0.5         |                     | 0.5         |
0
𝒉𝒉
| 1   |     | 0.35246  |     | 0.44813  |
| --- | --- | -------- | --- | -------- |
| 2   |     | 0.50102  |     | 0.43492  |
| 3   |     | 0.35119  |     | 0.43195  |
| 4   |     | 0.50197  |     | 0.43130  |
| 5   |     | 0.35000  |     | 0.43116  |
| 6   |     | 0.50284  |     | 0.43113  |

For reference, the real root is 0.43112, which our second option converges to within six iterations.
Unfortunately, using the first and easiest option (adding   to both sides) does not produce a convergent
solution. Fixed-point iteration is not always guaranteed to converge. Fortunately, we can check if an
ℎ
equation will converge before we start iterating.
From the textbook (Box 6.1), we know that fixed-point iteration will converge if  . Let’s take
the derivative of the equations used in both options and test the derivative with our′ initial guess of
|𝑔𝑔 (𝑥𝑥)| < 1
.
ℎ0
=
0O.p5tion 1: Adding   to both sides
Original equation
ℎ

|     |           | 3 2       | 3   |     |
| --- | --------- | --------- | --- | --- |
|     | 𝑔𝑔(ℎ) = ℎ | −3𝑅𝑅ℎ +ℎ+ | 𝑉𝑉� |     |
Taking the derivative yields  𝜋𝜋

|     | ′   | 2   |     |     |
| --- | --- | --- | --- | --- |
At  ,  . Because th𝑔𝑔is (iℎs )gr=ea3teℎr t−ha6n𝑅𝑅 1ℎ, w+e1 know before we start that this
formulation w′ill not converge by fixed-point iteration.
ℎ = 0.5 |𝑔𝑔 (0.5)| = 1.25

Option 2: Rearranging to isolate
Original equation
ℎ
3 3
ℎ + 𝑉𝑉�
� 𝜋𝜋
𝑔𝑔(ℎ) =
Taking the derivative yields the following (hint: use chain3 r𝑅𝑅ule!)
2
′ ℎ
𝑔𝑔 (ℎ) =
3
ℎ 𝑉𝑉�
At , . Because this value2 is � less +than 1, we know this formulation will converge
3𝑅𝑅 𝜋𝜋𝑅𝑅
using fixed-poi′nt iteration.
ℎ = 0.5 |𝑔𝑔 (0.5)| = 0.1225
While the derivative can be messy, it is always best to check for convergence before you start iterating.
There is no hard and fast rule as to if it is better to add to both sides or rearrange the equation to isolate
. You must always check for convergence. This is one of the reasons the other root finding methods
𝑥𝑥
discussed in this course are more commonly used. They typically don’t have the degree of sensitivity to
𝑥𝑥
problem formulation.

Question 2:
Determine the largest real root of using the following two methods
3 2
a) The graphical method 𝑓𝑓(𝑥𝑥) = 𝑥𝑥 −6𝑥𝑥 +11𝑥𝑥−6.1
b) The Newton-Raphson method. Perform 3 iterations using = 3.5
𝑥𝑥0
Solution:
Part a) Graphical Method
6
4
2
0
X 3.07071
Y 0.0567661
-2
-4
-6
0 0.5 1 1.5 2 2.5 3 3.5 4
MATLAB code used to generate this plot. Here we make use of MATLAB’s element-wise operators to
compute all values of in a single line of code instead of using a for loop.
% Initialize x a𝑦𝑦rray to be used for plotting. linspace(a,b,n) creates an
% array of n points between a and b
x = linspace(0,4,100);
% compute the function at all points in x. In this problem, we forgo using
% a for loop to make use of Matlab's element-wise operators. Using .* and
% .^ performs multiplication and exponents for every element in the initial
% array. Addition and subtraction do not need a dot.
y = x.^3 - 6.*x.^2 + 11.*x - 6.1;
% Create the plot
figure(); % This forces matlab to create a new figure
hold on; % by default matlab overwrites every plot its makes. This stops
that behaviour
% create a line plot
plot(x,y)
grid on; % enables grid lines on the plot
% Set x and y plot limits. Matlab sets these automatically otherwise
xlim([0,4])
ylim([-6,6])

Part b) Newton-Raphson Method
Recall the function is defined as:

|     |     |     | 3   | 2   |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
Taking the derivative yields:
|     |     |     | 𝑓𝑓(𝑥𝑥) = 𝑥𝑥 −6𝑥𝑥 | +11𝑥𝑥−6.1 |     |     |     |     |
| --- | --- | --- | ---------------- | --------- | --- | --- | --- | --- |

|     |     |     | ′ 2 |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
The Newton-Raphson method is defined𝑓𝑓 a(s𝑥𝑥 )
|     |     |     | = 3𝑥𝑥 | −12𝑥𝑥+11 |     |     |     |     |
| --- | --- | --- | ----- | -------- | --- | --- | --- | --- |

𝑓𝑓(𝑥𝑥𝑖𝑖)
|     |     |     | 𝑥𝑥𝑖𝑖+1 = 𝑥𝑥𝑖𝑖 | − ′   |     |     |     |     |
| --- | --- | --- | ------------- | ----- | --- | --- | --- | --- |
 Three iterations of this Newton-Raphson method are d𝑓𝑓et(a𝑥𝑥il𝑖𝑖e)d in the table below. After three iterations,
the solution converges to 3.04668.
| ITERATION  |     |     |     |     |     |     |     |     |
| ---------- | --- | --- | --- | --- | --- | --- | --- | --- |
′
|     |     |          | 𝒙𝒙𝒊𝒊         | 𝒇𝒇(𝒙𝒙𝒊𝒊) | 𝒇𝒇           | (𝒙𝒙𝒊𝒊) | 𝒙𝒙𝒊𝒊+𝟏𝟏  |     |
| --- | --- | -------- | ------------ | -------- | ------------ | ------ | -------- | --- |
|     | 𝟎𝟎  | 3.50000  | 1.7750𝑒𝑒+00  |          | 5.7500𝑒𝑒+00  |        | 3.19130  |     |
|     | 𝟏𝟏  | 3.19130  | 3.9940𝑒𝑒−01  |          | 3.2576𝑒𝑒+00  |        | 3.06869  |     |
|     | 𝟐𝟐  | 3.06869  | 5.1880𝑒𝑒−02  |          | 2.4263𝑒𝑒+00  |        | 3.04731  |     |

|     | 𝟑𝟑  | 3.04731  | 1.4560𝑒𝑒−03  |     | 2.2906𝑒𝑒+00  |     | 3.04668  |     |
| --- | --- | -------- | ------------ | --- | ------------ | --- | -------- | --- |

|     |     |     |     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |

Question 3:
The velocity of a falling parachutist is given by . Using the bisection method,
𝑐𝑐
𝑔𝑔𝑔𝑔 −�𝑚𝑚�𝑡𝑡
determine the drag coefficient needed such that an 80 kg parachutist has a velocity of 35 m/s after 3.9 s
𝑣𝑣 = 𝑐𝑐 �1−𝑒𝑒 �
of freefall. Assume gravity is 9.81 m/s2. Use an initial bracket of [3,5] and iterate until approximate relative
error falls below 5%. Perform an error check by substituting your final answer into the initial equation.
Solution:
The first step is to reorganize the velocity equation to place all terms on the right-hand side.
𝑐𝑐
𝑔𝑔𝑔𝑔 −� 𝑔𝑔 �𝑡𝑡
𝑓𝑓(𝑐𝑐) = �1−𝑒𝑒 �−𝑣𝑣
This solution manual will detail the first two iterations
𝑐𝑐
Iteration 1: The bounds for this iteration are
[3,5]
𝑥𝑥𝑙𝑙𝑙𝑙𝑙𝑙 +𝑥𝑥𝑢𝑢𝑢𝑢𝑢𝑢 3+5
𝑥𝑥𝑔𝑔𝑖𝑖𝑚𝑚 = = = 4
2 2
𝑥𝑥𝑙𝑙𝑙𝑙𝑙𝑙 = 3, 𝑓𝑓(𝑥𝑥𝑙𝑙𝑙𝑙𝑙𝑙) = 0.59285
𝑥𝑥𝑔𝑔𝑖𝑖𝑚𝑚 = 4, 𝑓𝑓(𝑥𝑥𝑔𝑔𝑖𝑖𝑚𝑚) = −0.24016
𝑥𝑥𝑢𝑢𝑢𝑢𝑢𝑢 = 5, 𝑓𝑓�𝑥𝑥𝑢𝑢𝑢𝑢𝑢𝑢� = −1.046967
Since 𝑓𝑓(𝑥𝑥𝑙𝑙𝑙𝑙𝑙𝑙)𝑓𝑓(,𝑥𝑥 w𝑔𝑔e𝑖𝑖𝑚𝑚 k)n=ow𝑓𝑓 t(h3e) 𝑓𝑓ro(o4t) f=all s− b0e.t1w4e2e3n9 . So, we replace with
. We can calculate the approximate error at the second iteration.
𝑓𝑓(𝑥𝑥𝑙𝑙𝑙𝑙𝑙𝑙)𝑓𝑓(𝑥𝑥𝑔𝑔𝑖𝑖𝑚𝑚) = −0.14239 < 0 [3,4] 𝑥𝑥𝑢𝑢𝑢𝑢𝑢𝑢
T𝑥𝑥h𝑔𝑔e𝑖𝑖𝑚𝑚 relative error for the bisection method is calculated as:
Iteration 2: The bounds for this iteration are
[3,4]
𝑥𝑥𝑙𝑙𝑙𝑙𝑙𝑙 +𝑥𝑥𝑢𝑢𝑢𝑢𝑢𝑢 3+4
𝑥𝑥𝑔𝑔𝑖𝑖𝑚𝑚 = = = 3.5
2 2
𝑥𝑥𝑙𝑙𝑙𝑙𝑙𝑙 = 3, 𝑓𝑓(𝑥𝑥𝑙𝑙𝑙𝑙𝑙𝑙) = 0.59285
𝑥𝑥𝑔𝑔𝑖𝑖𝑚𝑚 = 3.5, 𝑓𝑓(𝑥𝑥𝑔𝑔𝑖𝑖𝑚𝑚) = 0.173011

|       |     | 𝑥𝑥𝑢𝑢𝑢𝑢𝑢𝑢                 |      | 𝑓𝑓�𝑥𝑥𝑢𝑢𝑢𝑢𝑢𝑢� |            |     |     |
| ----- | --- | ------------------------ | ---- | ------------ | ---------- | --- | --- |
|       |     |                          | = 4, |              | = −0.24016 |     |     |
| Since |     | 𝑓𝑓(𝑥𝑥𝑙𝑙𝑙𝑙𝑙𝑙)𝑓𝑓(𝑥𝑥𝑔𝑔𝑖𝑖𝑚𝑚) |      | 𝑓𝑓(3)𝑓𝑓(3.5) |            |     |     |
|       |     |                          |      | =            | =  0.10257 |     |     |
  𝑓𝑓(𝑥𝑥𝑙𝑙𝑙𝑙𝑙𝑙)𝑓𝑓(𝑥𝑥𝑔𝑔𝑖𝑖𝑚𝑚) =  0.10257 > 0, we know the root falls between [3.5,4]. So, we replace 𝑥𝑥𝑙𝑙𝑙𝑙𝑙𝑙
3.5−4
with 𝑥𝑥𝑔𝑔𝑖𝑖𝑚𝑚. The error for this iteration is � � = 0.1429. Since this error is greater than 5%, we
3.5
continue to the next iteration.
ThIeT EtRab le belo w deta ils the fi rst four itera tions of the b racketing me thod for this prob lemE RROR
𝒙𝒙𝒍𝒍𝒍𝒍𝒍𝒍 𝒙𝒙𝒎𝒎𝒊𝒊𝒎𝒎 𝒙𝒙𝒖𝒖𝒖𝒖𝒖𝒖 𝒇𝒇(𝒙𝒙𝒍𝒍𝒍𝒍𝒍𝒍) 𝒇𝒇(𝒙𝒙𝒎𝒎𝒊𝒊𝒎𝒎) 𝒇𝒇�𝒙𝒙𝒖𝒖𝒖𝒖𝒖𝒖� 𝒇𝒇(𝒙𝒙𝒍𝒍𝒍𝒍𝒍𝒍)𝒇𝒇(𝒙𝒙𝒎𝒎𝒊𝒊𝒎𝒎)

| 1  3  | 4    | 5   | 0.59285  | -0.24016  | -1.04697  | -0.14238  |         |
| ----- | ---- | --- | -------- | --------- | --------- | --------- | ------- |
| 2  3  | 3.5  | 4   | 0.59285  | 0.17301   | -0.24016  | 0.10257   | 0.1429  |
(14.3%)
3  3.5  3.75  4  0.17301  -0.03440  -0.24016  -0.00595  0.0667
(6.67%)
3.5  3.625  3.75  0.17301  0.06910  -0.03440  0.01196  0.03448
4
(3.45%)

After four iterations, the absolute relative error falls below 5%, yielding an estimated root of 3.625.
Inserting   into our equation for velocity yields 35.0691 m/s, an error of 0.2% from the inputted
velocity of 35 m/s.
𝑐𝑐 = 3.625