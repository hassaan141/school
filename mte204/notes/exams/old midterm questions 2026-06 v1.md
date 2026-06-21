MTE 204 Previous Midterm Test Questions

Question
Solve the system of linear equations below using Gauss elimination with partial pivoting.

|     |     | 𝒙𝒙𝟏𝟏 +𝒙𝒙𝟐𝟐 | −𝒙𝒙𝟑𝟑           |       |     |
| --- | --- | ---------- | --------------- | ----- | --- |
|     |     |            | = −𝟑𝟑           |       |     |
|     |     | 𝟔𝟔𝒙𝒙𝟏𝟏     | +𝟐𝟐𝒙𝒙𝟐𝟐 +𝟐𝟐𝒙𝒙𝟑𝟑 | = 𝟐𝟐  |     |
Solution
|     |     | −𝟑𝟑𝒙𝒙𝟏𝟏 | +𝟒𝟒𝒙𝒙𝟐𝟐 +𝒙𝒙𝟑𝟑 | = 𝟏𝟏  |     |
| --- | --- | ------- | ------------- | ----- | --- |
Express the system of equations in matrix form

𝑥𝑥1
|                                                             |     | 1   | 1 −1 | −3  |     |
| ----------------------------------------------------------- | --- | --- | ---- | --- | --- |
| Place in the form of an augmented �m6atrix2 for m2o�re� 𝑥𝑥s |     |     | 2    |     |     |
tr�a=igh�tf2or�ward elimination
𝑥𝑥3
|     |     | −3  | 4 1 | 1   |     |
| --- | --- | --- | --- | --- | --- |

|     |     | 1   | 1 −1 −3 |     |     |
| --- | --- | --- | ------- | --- | --- |
Begin forward elimination of the first c�o6lumn2. Firs2t, we 2pi�vot by swapping rows 1 and 2
|     |     | −3  | 4 1 | 1   |     |
| --- | --- | --- | --- | --- | --- |

|                                   |     | 6   | 2 2      | 2   |     |
| --------------------------------- | --- | --- | -------- | --- | --- |
| Elimination formula for row 2 is  |     | � 1 | 1 −1 −3� |     |     |
|                                   |     | −3  | 4 1      | 1   |     |
𝑎𝑎21
|     |     | row 2 | = row 2− | row 1   |     |
| --- | --- | ----- | -------- | ------- | --- |
𝑎𝑎11
| Elimination formula for row 3  |     |       | 1        |       |     |
| ------------------------------ | --- | ----- | -------- | ----- | --- |
|                                |     | row 2 | = row 2− | row 1 |     |
6

𝑎𝑎31
|                                                              |       | row 3    | = row 3−         | row 1 |        |
| ------------------------------------------------------------ | ----- | -------- | ---------------- | ----- | ------ |
|                                                              |       |          | 𝑎𝑎11             |       |        |
| Applying these elimination equations yield−s 3the following  |       |          |                  |       | 1      |
|                                                              | row 3 | = row 3− | row 1 = row 3 +  |       |  row 1 |
|                                                              |       |          | 6                |       | 2      |

|     |     | 6 2  | 2     | 2   |     |
| --- | --- | ---- | ----- | --- | --- |
|     |     | 2    | 4     | 10  |     |
|     |     | �0 � | − � − | � � |     |
Continue elimination to the second column3. First, w3e pivot b3y swapping rows 2 and 3
|     |     | 0 5 | 2   | 2   |     |
| --- | --- | --- | --- | --- | --- |

|     |     | 6 2  | 2   | 2   |     |
| --- | --- | ---- | --- | --- | --- |
|     |     | �0 5 | 2   | 2   |     |
�
The elimination formula for row 3 is as follows
|     |     | 0 2 � | − 4 � − | 10 � |     |
| --- | --- | ----- | ------- | ---- | --- |
|     |     |       | 3 3     | 3    |     |

𝑎𝑎32
|     |     | row 3 | = row 3− | row 2 |     |
| --- | --- | ----- | -------- | ----- | --- |
|     |     |       | 𝑎𝑎22     |       |     |
2 �
|     |         |        | 3                 |     | 2      |
| --- | ------- | ------ | ----------------- | --- | ------ |
|     | row 3 = | row 3− | row 2  =  row 3 − |     | row 2  |
|     |         |        | 5                 |     | 15     |

Applying this elimination formula yields

|     |     | 6   | 2 2 | 2   |     |     |
| --- | --- | --- | --- | --- | --- | --- |
|     |     | �0  | 5 2 | 2   |     |     |
�
Placed in the standard matrix form
|     |     |     | 8     | 18  |     |     |
| --- | --- | --- | ----- | --- | --- | --- |
|     |     | 0   | 0 − � | − � |     |     |
|     |     |     | 5     | 5   |     |     |

𝑥𝑥1
|     |     | 6 2  | 2       | 2   |     |     |
| --- | --- | ---- | ------- | --- | --- | --- |
|     |     | �0 5 | 2 ��𝑥𝑥2 | 2   |     |     |
� = � �
Applying back substitution yields the following
|     |     |     | 8 𝑥𝑥3 | 18  |     |     |
| --- | --- | --- | ----- | --- | --- | --- |
|     |     | 0 0 | − �   | − � |     |     |
|     |     |     | 5     | 5   |     |     |

18
−
5
|     |     |     | 𝑥𝑥3 = = | 2.25 |     |     |
| --- | --- | --- | ------- | ---- | --- | --- |
8
|     |     |     | −   |     |     |     |
| --- | --- | --- | --- | --- | --- | --- |
5
|     |     | 1   | 1   |     |     |     |
| --- | --- | --- | --- | --- | --- | --- |
𝑥𝑥2 (2−2𝑥𝑥3)
|     |               | =      | = �2−2(2.25)�        | = −0.50 |         |     |
| --- | ------------- | ------ | -------------------- | ------- | ------- | --- |
|     |               | 5      | 5                    |         |         |     |
|     | 1             |        | 1                    |         |         |     |
|     | 𝑥𝑥1 = (2−2𝑥𝑥3 | −2𝑥𝑥2) | = �2−2(2.25)−2(0.5)� |         | = −0.25 |     |
|     | 6             |        | 6                    |         |         |     |

Question
A mass   is released a distance   above a non-linear spring. The resistance force of the spring
is defined with respect to the compression of the spring   as shown below
|    𝑚𝑚 | ℎ   |     |     |     |     | 𝐹𝐹  |
| ----- | --- | --- | --- | --- | --- | --- |
𝑑𝑑

3/2
|     |     | 𝐹𝐹 = | −(𝑘𝑘1𝑑𝑑+𝑘𝑘2𝑑𝑑 | )   |     |     |
| --- | --- | ---- | ------------- | --- | --- | --- |

The conservation of energy between the undropped mass (state a) and the fully
compressed spring (state b) is given by:

|     |     | 𝐸𝐸𝑝𝑝𝑝𝑝𝑝𝑝𝑝𝑝𝑝𝑝𝑝𝑝𝑝𝑝𝑝𝑝𝑝𝑝 | = 𝐸𝐸𝑠𝑠𝑝𝑝𝑠𝑠𝑝𝑝𝑝𝑝𝑠𝑠  |     |     |     |
| --- | --- | -------------------- | ----------------- | --- | --- | --- |
5/2
2𝑘𝑘2𝑑𝑑
1 2
|                                                  | 𝑚𝑚𝑚𝑚𝑑𝑑+𝑚𝑚𝑚𝑚ℎ |     | =                  | + 𝑘𝑘1𝑑𝑑 |                    |     |
| ------------------------------------------------ | ------------ | --- | ------------------ | ------- | ------------------ | --- |
|                                                  |              |     |  =5 40,0002 g/s2,  |         | = 40 g/(s2 m0.5),  |     |
| For this problem, use the following parameters:  |              |     |                    |         |  = 95 g,           |     |
 = 9.81 m/s2, and  = 0.33 m.
|     |     |     | 𝑘𝑘1 |     | 𝑘𝑘2 |     |
| --- | --- | --- | --- | --- | --- | --- |
  𝑚𝑚
g a)  Estimate thℎe  value of d using the graphical method. Include the plot used to
estimate   in your solution. (hint: substitute x values of 0.0 and 1.0 as a start to
generate a plot)
𝑑𝑑

b)  Solve for d using the secant method, with an initial guess of d=1.0 m and a second
initial guess from your graphical solution in part a. Show calculations for the first 3
| iterations and calculate the relative percent error ε |     |     |     |     | .   |     |
| ----------------------------------------------------- | --- | --- | --- | --- | --- | --- |
a

Solution
Part A
We begin by placing reorganizing the conservation of energy equation so that the equation
equals zero

5/2
2𝑘𝑘2𝑑𝑑
|     |     |     | 1 2     |                |     |     |
| --- | --- | --- | ------- | -------------- | --- | --- |
|     | 0 = |     | + 𝑘𝑘1𝑑𝑑 | −𝑚𝑚𝑚𝑚𝑑𝑑 −𝑚𝑚𝑚𝑚ℎ |     |     |
|     | 5   | 5   | 2       |                |     |     |
Perhaps the easiest way to sketch this function2 by hand is to create a table of several values
2
between  =0 and  =1. T0his= w1i6ll𝑑𝑑 all+ow2 o0n0e0 0to𝑑𝑑 es−tim9a3t1e .w95h𝑑𝑑ere− th3e0 7ro.5o4t 3o5ccurs. An example of this
is provided below with the actual plotted function. From these evaluated points, we know our
root is be𝑑𝑑tween 0.1𝑑𝑑 and 0.2. Let us estimate that the root occurs at
. The actual root
value is 0.148292.
𝑑𝑑 = 0.15

|        |     |               | 20000 |     |     |     |     |     |     |     |     |     |     |
| ------ | --- | ------------- | ----- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 0      |     | -307.5        |       |     |     |     |     |     |     |     |     |     |     |
| 𝑑𝑑0.1  |     | 𝑓𝑓-1(9𝑑𝑑6).7  |       |     |     |     |     |     |     |     |     |     |     |
| 0.2    |     | 314.0         |       |     |     |     |     |     |     |     |     |     |     |
| 0.3    |     | 1225          | 15000 |     |     |     |     |     |     |     |     |     |     |
| 0.4    |     | 2536          |       |     |     |     |     |     |     |     |     |     |     |
| 0.5    |     | 4247          |       |     |     |     |     |     |     |     |     |     |     |
| 0.6    |     | 6357          |       |     |     |     |     |     |     |     |     |     |     |
| 0.7    |     | 8868          |       |     |     |     |     |     |     |     |     |     |     |
10000
| 0.8  |     | 11 780  |     |     |     |     |     |     |     |     |     |     |     |
| ---- | --- | ------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 0.9  |     | 15 090  |     |     |     |     |     |     |     |     |     |     |     |
| 1.0  |     | 18 800  |     |     |     |     |     |     |     |     |     |     |     |

5000
0
-5000
|     |     |     |     | 0   | 0.1 | 0.2 | 0.3 | 0.4 | 0.5 | 0.6 0.7 | 0.8 | 0.9 | 1   |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | ------- | --- | --- | --- |

Part B
The update equation for the secant method is as follows

|                                     |     |     |     |     |            |                      | 𝑓𝑓(𝑥𝑥𝑝𝑝)(𝑥𝑥𝑝𝑝−1 | −𝑥𝑥𝑝𝑝) |     |     |     |     |     |
| ----------------------------------- | --- | --- | --- | --- | ---------- | -------------------- | --------------- | ------ | --- | --- | --- | --- | --- |
| The relative percent error used for |     |     |     |     |  t𝑝𝑝h+e1 s | ec a𝑝𝑝nt  method is  |                 |        |     |     |     |     |     |
|                                     |     |     |     |     | 𝑥𝑥         | = 𝑥𝑥 +               |                 |        |     |     |     |     |     |
𝑓𝑓(𝑥𝑥𝑝𝑝−1)−𝑓𝑓(𝑥𝑥𝑝𝑝)

𝑥𝑥𝑝𝑝+1−𝑥𝑥𝑝𝑝
We will initialize the secant method w 𝜖𝜖𝑝𝑝ith    an d   . The first three iterations of the
|                                                     |     |     |     |     |     | =   |        | ∗ 1 00% |     |     |     |     |     |
| --------------------------------------------------- | --- | --- | --- | --- | --- | --- | ------ | ------- | --- | --- | --- | --- | --- |
| secant method for these initial values are liste𝑥𝑥d |     |     |     |     |     |     | 𝑝𝑝 + 1 |         |     |     |     |     |     |
  in  the table below.
|            |     |     |     |       |         | 𝑑𝑑− 1 | = 1     | 𝑑𝑑  0 = | 0  .15  |         |          |     |     |
| ---------- | --- | --- | --- | ----- | ------- | ----- | ------- | ------- | ------- | ------- | -------- | --- | --- |
| Iteration  |     |     |     |       |         |       |         |         |         |         |          |     |     |
|            | 1   | 1   |     | 0.15  | 18 880  |       | 8.6640  |         | 0.1496  | 6.6652  | 0.2619%  |     |     |
𝒙𝒙0 𝒊𝒊 − 𝟏𝟏 0.149𝒙𝒙6 𝒊𝒊 𝒇𝒇8(𝒙𝒙.6 𝒊𝒊 − 𝟏𝟏 0)  6𝒇𝒇.6(6𝒙𝒙5 𝒊𝒊 3)  0.1𝒙𝒙4 𝒊𝒊+ 𝟏𝟏 𝒇𝒇0(𝒙𝒙.0 𝒊𝒊 + 𝟏𝟏 4)  0.8812𝝐𝝐% 𝒂𝒂
|     | 2   | . 15   |     |     |     | 6 4 |     |     | 83  |   4 4 |     |     |     |
| --- | --- | ------ | --- | --- | --- | --- | --- | --- | --- | ----- | --- | --- | --- |
3  0.1496  0.1483  6.6653  0.0444  0.14829  0.0002  0.00591%

The actual root is 0.1482924. Solutions from students will be evaluated against the   they have
determined from their graphical method.
𝑑𝑑0
|     |     |     |     |     |     |     |     |     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |

Question
For the following three sets of linear equations:
a)  Identify which set(s) would not converge using the naive Gauss-Seidel algorithm
based on the convergence criterion demonstrated in class. Do not change the
ordering of the equations for this part.
b)  For the equation set(s) that do not meet the convergence criterion, apply pivoting
and demonstrate if this leads to convergence.
|              |          | Set 1   |      |           | Set 2    |     |     |              | Set 3      |     |     |
| ------------ | -------- | ------- | ---- | --------- | -------- | --- | --- | ------------ | ---------- | --- | --- |
|              |          |         |      |           |          |     |     |              |            |     |     |
|              |          |         |      |           |          |     |     |              |            |     |     |
|              | 9𝑥𝑥      | +3𝑦𝑦+𝑧𝑧 | = 3  | 𝑥𝑥+𝑦𝑦+6𝑧𝑧 |          | =   | 8   | −3𝑥𝑥         | +4𝑦𝑦+5𝑧𝑧 = |     | 6   |
|              | −6𝑥𝑥+8𝑧𝑧 |         | = 8  | 𝑥𝑥+5𝑦𝑦−𝑧𝑧 |          | =   | 5   | −2𝑥𝑥+2𝑦𝑦−4𝑧𝑧 |            | =   | −3  |
| Solutio2n𝑥𝑥  |          | +5𝑦𝑦−𝑧𝑧 | = 6  | 4𝑥𝑥       | +2𝑦𝑦−2𝑧𝑧 | =   | 4   |              | 2𝑦𝑦−𝑧𝑧     | = 1 |     |
Part A
There are two criteria for convergence using the naive Gauss-Seidel algorithm. 1) Diagonal
elements must be non-zero, and 2) the matrix must be diagonally dominant. To test for diagonal
dominance, we use the following condition.

𝑝𝑝
Let us place each set of equations into m|𝑎𝑎a 𝑝𝑝𝑝𝑝 tr|i>x for�m an|d𝑎𝑎 t 𝑝𝑝𝑖𝑖 e|s ting if the two conditions apply
𝑖𝑖=1,𝑖𝑖≠𝑝𝑝
Set 1:

|     |     |     |     | 9   | 3 1 | 𝑥𝑥  | 3   |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
Because   is a zero, this system of� −eq6uati0ons c8an�n�o𝑦𝑦t� b=e s�o8l�ved using the naive G-S algorithm
| Set 2:  |     |     |     | 2   | 5 −1 | 𝑧𝑧  | 6   |     |     |     |     |
| ------- | --- | --- | --- | --- | ---- | --- | --- | --- | --- | --- | --- |
𝑎𝑎22

𝑥𝑥
|     |     |     |     | 1   | 1 6 |     | 8   |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
This system of equations does pass th�e1 firs5t co−nd1i�ti�o𝑦𝑦n�. =Ch�e5c�king for diagonal dominance
|     |     |     |     | 4   | 2 −2 | 𝑧𝑧  | 4   |     |     |     |     |
| --- | --- | --- | --- | --- | ---- | --- | --- | --- | --- | --- | --- |

|     |     |     |     | 1    |             | 1+6 |     |     |     |     |     |
| --- | --- | --- | --- | ---- | ----------- | --- | --- | --- | --- | --- | --- |
|     |     |     |     | � 5  | � >?�1+|1|� |     |     |     |     |     |     |
|     |     |     |     | |−2| |             | 4+  |     |     |     |     |     |
2
|     |     |     |     |     | 1   | 7   |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
This matrix is not diagonally dominant as ro�5w�s >1 ?an�2d� 3 violate the conditions for diagonal
dominance. Therefore, G-S convergence is n2ot guar6anteed.
Set 3:

|     |     |     |     | −3  | 4 5 | 𝑥𝑥  | 6   |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
This matrix does pass the first cond�i−tio2n. L2et u−s 4c�h�e𝑦𝑦ck� =for� −di3ag�onal dominance.
|     |     |     |     | 0   | 2 −1 | 𝑧𝑧  | 1   |     |     |     |     |
| --- | --- | --- | --- | --- | ---- | --- | --- | --- | --- | --- | --- |

|     | |−3| |     | 4+5 |
| --- | ---- | --- | --- |
� 2 � >?�|−2|+|−4|�
|     | |−1| |     | 2   |
| --- | ---- | --- | --- |
|     |      | 3   | 9   |
This matrix is not diagonally dominant as a�ll2 r�o>w?s �v6io�late the conditions for diagonal dominance.
| Part B:  |     | 1   | 1   |
| -------- | --- | --- | --- |
Set 1:
Pivoting is performed to ensure that there is a non-zero value in each diagonal element and that
the diagonal element of each row is as large as possible. For set 1, this was accomplished by
swapping row 3 with row 2.

|                                           | 9   | 3 1       | 𝑥𝑥 3  |
| ----------------------------------------- | --- | --------- | ----- |
| Testing the dominance condition yie�ld2s  |     | 5 −1��𝑦𝑦� | = �6� |
|                                           | −6  | 0 8       | 𝑧𝑧 8  |

|     | 9   | 3+1 |     |
| --- | --- | --- | --- |
>?�2+|−1|�
�5�
|     | 8   | |−6|  |     |
| --- | --- | ----- | --- |
|     |     | 9     | 4   |
This matrix is diagonally dominant. The nai�v5e� G>-?S� a3l�gorithm has guaranteed convergence.
| Set 2:  |     | 8   | 6   |
| ------- | --- | --- | --- |
Pivot row 3 with row 1

|                                           |     |         |       |
| ----------------------------------------- | --- | ------- | ----- |
|                                           | 4 2 | −2      | 𝑥𝑥 4  |
| Testing the dominance condition yiel�d2s  | 5   | −1��𝑦𝑦� | = �5� |
|                                           | 1 1 | 6       | 𝑧𝑧 8  |

|     | 4   | 2+|−2| |     |
| --- | --- | ------ | --- |
�5� >?�1+|−1|�
1+1
6
|     |     | 4   | 4   |
| --- | --- | --- | --- |
The diagonal of all rows except the first is l�a5rg�e>r t?h�a2n� the absolute sum of off-diagonal terms.
However, the first row does show that the di6agonal i2s equal to the absolute sum of off-diagonal
terms. This does not strictly meet the conditions for diagonal dominance. However, the G-S
algorithm may still converge in this case, as this row is so close to fulfilling the dominance
criteria and the remaining rows also do. One would need to perform the naive G-S algorithm to
be sure.
Set 3:
Pivoting is accomplished by swapping rows 2 and 3.

|                                           | −3 4 | 5       | 𝑥𝑥 6    |
| ----------------------------------------- | ---- | ------- | ------- |
| Testing the dominance condition yi�el0ds  | 2    | −1��𝑦𝑦� | = � 1 � |
|                                           | −2 2 | 4       | 𝑧𝑧 −3   |

|−3| 4+5
� 2 � >?� |−1| �
4 |−2| +4
3 9
No matter how pivoting is accomplished, th�i2s �sy>s?te�m1 �of equations will not produce convergent
behaviour using the naive G-S algorithm. 4 6

Question
Use least-squares regression to fit a straight line to the following data:

| x  6       | 7  11  15  | 17  21  23  | 29  29  37  39  |
| ---------- | ---------- | ----------- | --------------- |
| y  29  21  | 29  14     | 21  15  7   | 7  13  0  3     |

a)  Calculate the slope and intercept of the straight line (linear) fit using linear
regression.
b)  Compute the coefficient of determination (r2).
c)  Plot the data and the regression line by hand (approximate is fine). If someone
made an additional measurement of x = 10, y = 10, would you suspect, based on a
visual assessment that the measurement may be an outlier?

Solution
Part A)
The equation of a line is be defined as

Using linear regression, coefficients are given by
𝑎𝑎0 +𝑎𝑎1𝑥𝑥
𝑦𝑦 =

|     | 𝑛𝑛∑𝑥𝑥𝑝𝑝𝑦𝑦𝑝𝑝 | −∑𝑥𝑥𝑝𝑝∑𝑦𝑦𝑝𝑝 |     |
| --- | ----------- | ----------- | --- |

|     | 𝑎𝑎1 = | 2   | 2    |
| --- | ----- | --- | ---- |
𝑝𝑝 (∑𝑥𝑥𝑝𝑝)
Computing the required intermediate values𝑛𝑛 ∑yi𝑥𝑥e ld−s
|     | 𝑎𝑎0 | 𝑝𝑝𝑥𝑥̅ |     |
| --- | --- | ----- | --- |
= 𝑦𝑦�−𝑎𝑎

𝑛𝑛 = 11

|     | 𝑥𝑥̅ | = 21.2727  |     |
| --- | --- | ---------- | --- |
|     | 𝑦𝑦� | = 14.4545  |     |
∑𝑥𝑥𝑝𝑝
= 234
|     | ∑𝑦𝑦𝑝𝑝 | = 159 |     |
| --- | ----- | ----- | --- |

|     | ∑𝑥𝑥𝑝𝑝𝑦𝑦 | 𝑝𝑝 = 2380 |     |
| --- | ------- | --------- | --- |
Computing the coefficients yields  2
|     | ∑𝑥𝑥𝑝𝑝 | = 6262 |     |
| --- | ----- | ------ | --- |

𝑎𝑎1
This linear regression is plotted below.   = −0.7805
𝑎𝑎0
= 31.0589

30
25
20
15
10
5
0
-5
|     | 5 10 | 15 20 | 25 30 | 35 40  |
| --- | ---- | ----- | ----- | ------ |
Part B)
Compute the coefficient of determination   using the following equation
2

𝑟𝑟
2 𝑆𝑆𝑝𝑝 −𝑆𝑆𝑠𝑠
Where
|     |     | 𝑟𝑟  | =   |     |
| --- | --- | --- | --- | --- |
𝑆𝑆𝑝𝑝

|                                        |      |                                 | 2                     |     |
| -------------------------------------- | ---- | ------------------------------- | --------------------- | --- |
| This yields a coefficient of determ𝑆𝑆i |      | 𝑝𝑝 n=ati o∑n (  o𝑦𝑦f 𝑝𝑝  −=𝑦𝑦�0 | ) .8=122 96 62.7273   |     |
|                                        | 𝑆𝑆𝑠𝑠 | = ∑(𝑦𝑦𝑝𝑝 −𝑎𝑎0                   | − 𝑎𝑎1𝑥𝑥𝑝𝑝) = 180.3358 |     |
2
| Part C)  |     |     | 𝑟𝑟  |     |
| -------- | --- | --- | --- | --- |
Inserting  =10 into our linear fit produces a value of 23.2534, significantly larger than  =10.
Furthermore, if we examine points around  =10, none have values close to  =10. This tells us
the additio𝑥𝑥nal point would likely be an outlier.   𝑦𝑦
Plotted against the existing data and the lin𝑥𝑥ear fit (red x), we can see that (10𝑦𝑦,10) is much lower
than the rest of the data.

30
25
20
15
10
5
0
-5
5 10 15 20 25 30 35 40

Question
Evaluate the integral: ?_"0" ^"1" ?e^(x^2 ) dx using the trapezoid rule (n=4) and
Simpson's 1/3 rule (n=4).
a) Trapezoid rule (with n=4)
a) Simpson’s

b) Compare the results and discuss any differences in the estimates.
• The trapezoid rule has low accuracy in general (compared to other methods) and
using only 4 intervals will make the error quite large. Recommended to used
increased intervals and check for convergence of the solution.
Simpson’s 1/3 rule is much more accurate (error is on the order of 1/n4)