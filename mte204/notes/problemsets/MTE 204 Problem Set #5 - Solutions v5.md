MTE 204 Problem Set #5: Solutions
Integration and Differentiation
(Chapter 21, 22 and 23 in Chapra 8th edition, International Version)

21.6  Integrate the following function both analytically and numerically. Use both the trapezoidal and Simpson’s
1∕3 rules to numerically integrate the function. For both cases, use the multiple-application version, with n = 4.
Compute percent relative errors for the numerical results.

3
2 𝑥𝑥
|                       |     | � 𝑥𝑥 𝑒𝑒  𝑑𝑑𝑥𝑥 |     |     |     |
| --------------------- | --- | ------------- | --- | --- | --- |
| Analytical solution:  |     | 0             |     |     |     |

 3
|     | 2 𝑥𝑥     | 2                     | 𝑥𝑥   3         |     |     |
| --- | -------- | --------------------- | -------------- | --- | --- |
|     | �  𝑥𝑥 𝑒𝑒 |  𝑑𝑑𝑥𝑥 =[(𝑥𝑥 −2𝑥𝑥+2)𝑒𝑒 | ]  0 =98.42768 |     |     |
|     |  0       |                       |                |     |     |
Trapezoidal rule (n = 4):
Recall:

For n=4, step size =0.75

0+2(1.190813+10.0838+48.03166)+180.7698
|   𝐼𝐼 =(3−0) |     |     |     | =112.2684      𝜀𝜀𝑡𝑡 | =14.062% |
| ----------- | --- | --- | --- | ------------------- | -------- |
8
Alternatively:

Simpson’s rule (n = 4):

0+4(1.190813+48.03166)+2(10.0838)+180.7698
| 𝐼𝐼 =(3−0) |     |     |     | =99.45683      𝜀𝜀𝑡𝑡 | =1.046% |
| --------- | --- | --- | --- | ------------------- | ------- |
12

21.9 Suppose that the upward force of air resistance on a falling object is proportional to the square of the
velocity. For this case, the velocity can be computed as
ℎ
𝑔𝑔𝑔𝑔 𝑔𝑔𝑐𝑐𝑑𝑑
𝜐𝜐(𝑡𝑡)=� 𝑡𝑡𝑡𝑡𝑡𝑡 �� 𝑡𝑡�
where c = a second-order drag coefficient. (a) If g = 9𝑐𝑐. 𝑑𝑑 81 m/s2, m =𝑔𝑔 68.1 kg, and c = 0.25 kg/m, use analytical
d d
integration to determine how far the object falls in 10 s. (b) Make the same evaluation, but evaluate the integral with
the multiple-segment trapezoidal rule. Use a sufficiently high n that you get three significant digits of accuracy.
Analytical solution:
ℎ ℎ
𝑡𝑡 𝑡𝑡
𝑔𝑔𝑔𝑔 𝑔𝑔𝑐𝑐𝑑𝑑 𝑔𝑔 𝑔𝑔𝑐𝑐𝑑𝑑
𝑧𝑧(𝑡𝑡)=� � 𝑡𝑡𝑡𝑡𝑡𝑡 �� 𝑡𝑡� 𝑑𝑑𝑡𝑡 =� 𝑙𝑙𝑡𝑡�𝑐𝑐𝑐𝑐𝑐𝑐 �� 𝑡𝑡���
0 𝑐𝑐𝑑𝑑 𝑔𝑔 𝑐𝑐𝑑𝑑 𝑔𝑔 0
ℎ 10
68.1 9.81(0.25)
𝑧𝑧(10)=� 𝑙𝑙𝑡𝑡�𝑐𝑐𝑐𝑐𝑐𝑐 �� (10)��� =334.1782
0.25 68.1
Thus, the result to 3 significant digits is 334. Here are results for var 0ious multiple-segment trapezoidal
rules:
n I
1 247.1068
2 314.6304
3 325.7253
4 329.4623
5 331.1708
6 332.0937
7 332.6485
8 333.0079
9 333.254
10 333.4298
11 333.5599
Thus, an 11-segment application gives the result to 3 significant digits.
21.11 Evaluate the integral of the following tabular data with (a) the trapezoidal rule and (b) Simpson’s rules:

|     | x     |     | −2  | 0     | 2    |     | 4  6  | 8   | 10  |
| --- | ----- | --- | --- | ----- | ---- | --- | ----- | --- | --- |
|     | f(x)  |     | 35  |    5  | −10  |     | 2  5  | 3   | 20  |

(a) Trapezoidal rule (n = 6):

35+2(5−10+2+5+3)+20
| 𝐼𝐼  =(10−(−2)) |     | 12  |     | =65 |     |     |     |     |     |
| -------------- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
(b) Simpson’s rules (n = 6):

|               | 35+4(5+2+3)+2(−10+5)+20 |     |     |     |     |           |     |     |     |
| ------------- | ----------------------- | --- | --- | --- | --- | --------- | --- | --- | --- |
| 𝐼𝐼 =(10−(−2)) |                         |     |     |     |     | =56.66667 |     |     |     |
|               |                         |     | 18  |     |     |           |     |     |     |

22.2  Use Romberg integration to evaluate

|     |     |     |     |     | 2   |     | 2   |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
1
|     |     |     |     |     | 𝐼𝐼 =� �𝑥𝑥+ | �   | 𝑑𝑑𝑥𝑥 |     |     |
| --- | --- | --- | --- | --- | ---------- | --- | ---- | --- | --- |
to an accuracy of ε  = 0.5% based on Eq. (22.9). Y1our res𝑥𝑥ults should be presented in the form of Fig. 22.3.
s
Use the analytical solution of the integral to determine the percent relative error of the result obtained
with Romberg integration. Check that ε is less than the stopping criterion ε.  t s

The integral can be evaluated analytically as,

|     |     |     |      |  2       | 2       |  2  |           |       |     |
| --- | --- | --- | ---- | -------- | ------- | --- | --------- | ----- | --- |
|     |     |     |      |          | 1       |     | 2         | −2    |     |
|     |     |     | 𝐼𝐼 = | �   �𝑥𝑥+ | �  𝑑𝑑𝑥𝑥 | = � |  𝑥𝑥 +2+𝑥𝑥 |  𝑑𝑑𝑥𝑥 |     |
|     |     |     |      |  1       | 𝑥𝑥      |  1  |           |       |     |

|     |     |     | 3     | 2    | 3      |     | 3        |          |     |
| --- | --- | --- | ----- | ---- | ------ | --- | -------- | -------- | --- |
|     |     | 𝑥𝑥  |       | 1    | 2      | 1   | 1        | 1        |     |
|     | 𝐼𝐼  | = � | +2𝑥𝑥− | � =  | +2(2)− |     | − −2(1)+ | = 4.8333 |     |
|     |     | 3   |       | 𝑥𝑥 1 | 3      | 2   | 3        | 1        |     |
The tableau depicting the implementation of Romberg integration to ε = 0.5% is
a

22.3  Use Romberg integration to evaluate

2 𝑥𝑥
|     | 𝑒𝑒  |  𝑐𝑐𝑠𝑠𝑡𝑡 𝑥𝑥 |     |
| --- | --- | ---------- | --- |
|     | �   | 2  𝑑𝑑𝑥𝑥    |     |
to an accuracy of ε  = 0.5%. Your results shoul0d be1 p+re𝑥𝑥sented in the form of Fig. 22.3.
s

|     | 1   | 2   | 3   |
| --- | --- | --- | --- |
a 
| n   | ε           |             |             |
| --- | ----------- | ----------- | ----------- |
|     |             | 7.9715%     | 0.0997%     |
| 1   | 1.34376994  | 1.97282684  | 1.94183605  |

| 2   | 1.81556261  | 1.94377297  |     |
| --- | ----------- | ----------- | --- |
|     |             |             |     |
| 4   | 1.91172038  |             |     |

22.4  Obtain an estimate of the integral from Prob. 22.2, but using two-, three-, and four-point Gauss-Legendre
formulas. Compute ε for each case on the basis of the analytical solution.
t

Change of variable:

2+1 2−1
𝑥𝑥𝑑𝑑 1.5+0.5𝑥𝑥𝑑𝑑
|     |     | 𝑥𝑥 = | +   |     | =   |     |     |
| --- | --- | ---- | --- | --- | --- | --- | --- |
2 2

2−1
|     |     |     | 𝑑𝑑𝑥𝑥 = | 𝑑𝑑𝑥𝑥𝑑𝑑 | = 0.5𝑑𝑑𝑥𝑥𝑑𝑑 |     |     |
| --- | --- | --- | ------ | ------ | ----------- | --- | --- |
2

|     |     |  1  |     |     |     |     | 2   |
| --- | --- | --- | --- | --- | --- | --- | --- |
1
|     |     |   �1.5+0.5𝑥𝑥𝑑𝑑 |     |     |             |     |  0.5𝑑𝑑𝑥𝑥𝑑𝑑 |
| --- | --- | -------------- | --- | --- | ----------- | --- | ---------- |
|     |     | 𝐼𝐼 = �         |     | +   |             | �   |            |
|     |     |  −1            |     |     | 1.5+0.5𝑥𝑥𝑑𝑑 |     |            |
Therefore, the transformed function is

2
1
|     |     | 𝑓𝑓(𝑥𝑥𝑑𝑑)= | 0.5�1.5+0.5𝑥𝑥𝑑𝑑 |     | +           |     | �   |
| --- | --- | --------- | --------------- | --- | ----------- | --- | --- |
|     |     |           |                 |     | 1.5+0.5𝑥𝑥𝑑𝑑 |     |     |
Two-point formula:

|     |      | −1        | 1                     |     |     |     |          |
| --- | ---- | --------- | --------------------- | --- | --- | --- | -------- |
|     | 𝐼𝐼 = | 𝑓𝑓� �+𝑓𝑓� | �= 2.074414+2.755961= |     |     |     | 4.830375 |
|     |      | √3        | √3                    |     |     |     |          |
4.833333−4.830375
|     |     | 𝜀𝜀𝑡𝑡 = � |          |     | �×100%= |     | 0.0612% |
| --- | --- | -------- | -------- | --- | ------- | --- | ------- |
|     |     |          | 4.833333 |     |         |     |         |
Three-point formula:

𝐼𝐼 = 0.5555556𝑓𝑓(−0.7745967)+0.8888889𝑓𝑓(0)+0.5555556𝑓𝑓(0.7745967)

   = 0.5555556(2.022895)+0.8888889(2.347222)+0.5555556(2.921322)
|    = 1.123831+2.08642+1.622957= |     |     | 4.833207 |     |     |     |     |
| ------------------------------- | --- | --- | -------- | --- | --- | --- | --- |

4.833333−4.833207
| 𝜀𝜀𝑡𝑡 =� |     | �×100% | = 0.0026% |     |     |     |     |
| ------- | --- | ------ | --------- | --- | --- | --- | --- |

4.833207
Four-point formula:
𝐼𝐼 = 0.3478548𝑓𝑓(−0.861136312)+0.6521452𝑓𝑓(−0.339981044)+0.6521452𝑓𝑓(0.339981044)
+0.3478548𝑓𝑓(0.861136312)
   = 0.3478548(2.009026)+0.6521452(2.16712)+0.6521452(2.573718)

+0.3478548(2.997699)
|    = 0.698849+1.413277+1.678438+1.042764= |     |     |     |     | 4.833328 |     |     |
| ----------------------------------------- | --- | --- | --- | --- | -------- | --- | --- |

4.833333−4.833328
𝜀𝜀𝑡𝑡 =� �×100% = 0.00010%
4.833333

22.14 There is no closed form solution for the error function,
𝑎𝑎
2
2 −𝑥𝑥
𝑒𝑒𝑒𝑒𝑓𝑓(𝑡𝑡)= � 𝑒𝑒 𝑑𝑑𝑥𝑥
Use the two-point Gauss quadrature approach to e
√
s
𝜋𝜋
tim0ate erf(1.5). Note that the exact value is
0.966105.
Change of variable:
1.5+0 1.5−0
𝑥𝑥 = + 𝑥𝑥𝑑𝑑 = 0.75+0.75𝑥𝑥𝑑𝑑
2 2
1.5−0
𝑑𝑑𝑥𝑥 = 𝑑𝑑𝑥𝑥𝑑𝑑 = 0.75𝑑𝑑𝑥𝑥𝑑𝑑
2
1
2
1.5 −(0.75+0.75𝑥𝑥𝑑𝑑)
𝐼𝐼 = � 𝑒𝑒 𝑑𝑑𝑥𝑥𝑑𝑑
−1 √𝜋𝜋
Therefore, the transformed function is
2
1.5 −(0.75+0.75𝑥𝑥𝑑𝑑)
𝑓𝑓(𝑥𝑥𝑑𝑑)= 𝑒𝑒
√𝜋𝜋
Two-point formula:
−1 1
𝐼𝐼 = 𝑓𝑓� �+𝑓𝑓� �= 0.765382+0.208792 = 0.974173
√3 √3
0.966105−0.974173
𝜀𝜀𝑡𝑡 =� �×100% = 0.835%
0.966105

23.1  Compute forward and backward difference approximations of O(h) and O(h2), and central difference
approximations of O(h2) and O(h4) for the first derivative of y = sin x at x = π/4 using a value of h = π/12. Estimate
the true percent relative error, ε, for each approximation.  t

|     |     |     | f(x)  |     |
| --- | --- | --- | ----- | --- |
x
|     | xi−2   | 0.261799388  | 0.258819045  |      |
| --- | ------ | ------------ | ------------ | ---- |
|     | xi−1   | 0.523598776  |              | 0.5  |
|     | xi     | 0.785398163  | 0.707106781  |      |

|     | xi+1   | 1.047197551  | 0.866025404  |     |
| --- | ------ | ------------ | ------------ | --- |
|     | xi+2   | 1.308996939  | 0.965925826  |     |

true = −sin(π/4) = −0.70710678

The results are summarized as

|     |          | first-order  | second-order  |     |
| --- | -------- | ------------ | ------------- | --- |
|     | Forward  | 0.607024424  | 0.719740883   |     |
ε(%)
|           | t   | 14.154       |              | 1.787  |
| --------- | --- | ------------ | ------------ | ------ |
| Backward  |     | 0.791089631  | 0.726012753  |        |
ε(%)
|     |     | 11.877  |     | 2.674  |
| --- | --- | ------- | --- | ------ |
t
| Centered  |     | 0.699057028  | 0.706996958  |     |
| --------- | --- | ------------ | ------------ | --- |
ε(%)
|     | t   | 1.138  |     | 0.016  |
| --- | --- | ------ | --- | ------ |

23.8  Compute the first-order central difference approximations of O(h4) for each of the following functions at the
specified location and for the specified step size:
| (a)  y = x3 + 3x − 15  |     |     |     | at x = 0,    | h = 0.25  |     |
| ---------------------- | --- | --- | --- | ------------ | --------- | --- |
| (b)  y = x2 cos x      |     |     |     | at x = 0.5,  | h = 0.1   |     |
| (c)  y = tan(x∕3)      |     |     |     | at x = 2,    | h = 0.5   |     |
| (d)                    |     |     |     | at x = 1,    | h = 0.2   |     |
| (e)  y = ex + x        |     |     |     | at x = 3,    | h = 0.2   |     |
Com𝑦𝑦pa=re 𝑐𝑐y𝑠𝑠o𝑡𝑡u(r0 r.e5s√u𝑥𝑥lt)s/ w𝑥𝑥ith the analytical solutions.

(a)

|     |     |     |     |     | f(x)  |     |
| --- | --- | --- | --- | --- | ----- | --- |
x
|     |     |     | xi−2 |   -0.5  |     |     |
| --- | --- | --- | ---- | ------- | --- | --- |
-16.625
|     |     |     | xi−1 |   -0.25  | -15.7656  |     |
| --- | --- | --- | ---- | -------- | --------- | --- |
|     |     |     | xi   | 0        | -15       |     |
|     |     |     | xi+1 |   0.25   | -14.2344  |     |
|     |     |     | xi+2 |   0.5    |           |     |
-13.375

|     |     | ′   |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- |
−(−13.375)+8(−14.2344)−8(−15.7656)−16.625
|              | ʹ   | 𝑓𝑓(𝑥𝑥)= |     |            | =3  |     |
| ------------ | --- | ------- | --- | ---------- | --- | --- |
| Analytical:  |     |         |     |   12(0.25) |     |     |
2
|     | 𝑓𝑓(𝑥𝑥)= | 3𝑥𝑥 +3 | = 3(0)+3 | = 3 |     |     |
| --- | ------- | ------ | -------- | --- | --- | --- |
″

−(−13.375)+16(−14.2344)−30(−15)+16(−15.7656)−(−16.625)
|              | 𝑓𝑓ʺ(𝑥𝑥)= |     |     |          | 2   | =0  |
| ------------ | -------- | --- | --- | -------- | --- | --- |
| Analytical:  |          |     |     | 12(0.25) |     |     |

|     | 𝑓𝑓 (𝑥𝑥) | = 6𝑥𝑥 = 6(0)= | 0   |     |     |     |
| --- | ------- | ------------- | --- | --- | --- | --- |
Therefore, for this case with a 3rd degree polynomial, the results are exact.
(b)
|     |     |     |     |     | f(x)  |     |
| --- | --- | --- | --- | --- | ----- | --- |
x
|     |     |     | xi−2  | 0.3  | 0.08598   |     |
| --- | --- | --- | ----- | ---- | --------- | --- |
|     |     |     | xi−1  | 0.4  | 0.14737   |     |
|     |     |     | xi    | 0.5  | 0.219396  |     |
|     |     |     | xi+1  | 0.6  | 0.297121  |     |
|     |     |     | xi+2  | 0.7  | 0.374773  |     |

′

−(0.374773)+8(0.297121)−8(0.14737)+0.08598
ʹ 𝑓𝑓(𝑥𝑥)= =0.75768
| Analytical:  |     | 12(0.1) |     |     |
| ------------ | --- | ------- | --- | --- |
|              | 2   |         | 2   |     |
𝑓𝑓 (0.4)= 2𝑥𝑥𝑐𝑐𝑐𝑐𝑐𝑐𝑥𝑥−𝑥𝑥 𝑐𝑐𝑠𝑠𝑡𝑡𝑥𝑥 = 2(0.5)𝑐𝑐𝑐𝑐𝑐𝑐(0.5)−0.5 𝑐𝑐𝑠𝑠𝑡𝑡(0.5)= 0.757726

0.757726−0.75768
𝜀𝜀𝑡𝑡
|     | =�  | �×100%=0.00608% |     |     |
| --- | --- | --------------- | --- | --- |
0.757726
″
−(0.374773)+16(0.297121)−30(0.219396)+16(0.14737)−(0.08598)
| 𝑓𝑓 (𝑥𝑥)= |     | 2   |     | =0.576893 |
| -------- | --- | --- | --- | --------- |

12(0.1)
Analytical:  ″
|     | 2   |     | 2   |     |
| --- | --- | --- | --- | --- |
𝑓𝑓 (0.4)=2𝑐𝑐𝑐𝑐𝑐𝑐𝑥𝑥−𝑥𝑥 𝑐𝑐𝑐𝑐𝑐𝑐𝑥𝑥−4𝑥𝑥𝑐𝑐𝑠𝑠𝑡𝑡𝑥𝑥 =2𝑐𝑐𝑐𝑐𝑐𝑐(0.5)−0.5 𝑐𝑐𝑐𝑐𝑐𝑐(0.5)−4(0.5)𝑐𝑐𝑠𝑠𝑡𝑡(0.5)=
0.576918

0.576918−0.576893
𝜀𝜀𝑡𝑡
|     | =�  | �×100%=0.0045% |     |     |
| --- | --- | -------------- | --- | --- |
0.576918