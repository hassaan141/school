MTE 204 Problem Set #3: Solutions
Systems of Linear Equations (Chapter 11 in Chapra 8th edition, International Version)

11.9  Recall from Prob. 10.8, that the following system of equations is designed to determine concentrations (the
c’s in g/m3) in a series of coupled reactors as a function of amount of mass input to
each reactor (the right-hand sides are in g/day):
|     | 15c - 3c      | - c = 3300  |     |     |
| --- | ------------- | ----------- | --- | --- |
|     | 1 2           | 3           |     |     |
|   - | 3c +18c -     | 6c = 1200   |     |     |
|     | 1 2           | 3           |     |     |
|     | - 4c - c +12c | = 2400      |     |     |
|     | 1 2           | 3           |     |     |
Solve this problem with the Gauss-Seidel method to ε = 5%.
s

The first iteration can be implemented as

| 3300+3c | +c  | 3300+3(0)+0 |          |     |
| ------- | --- | ----------- | -------- | --- |
| =       | 2 3 | =           | =220.00  |     |
c 1
|         | 15  | 15                  |     |     |
| ------- | --- | ------------------- | --- | --- |
| 1200+3c | +6c | 1200+3(220.00)+6(0) |     |     |
1 3
| c =     |     | =                     |     | =103.33  |
| ------- | --- | --------------------- | --- | -------- |
| 2       | 18  |                       | 18  |          |
| 2400+4c | +c  | 2400+4(220.00)+103.33 |     |          |
| c =     | 1 2 | =                     |     | =281.94  |
3
|     | 12  |     | 12  |     |
| --- | --- | --- | --- | --- |

Second iteration:

| 3300+3c | +c  | 3300+3(103.33)+281.94 |     |     |
| ------- | --- | --------------------- | --- | --- |
2 3
| c =     |     | =                        |     | =259.46  |
| ------- | --- | ------------------------ | --- | -------- |
| 1       | 15  |                          | 15  |          |
| 1200+3c | +6c | 1200+3(259.46)+6(281.94) |     |          |
| c =     | 1 3 | =                        |     | =203.89  |
2
|         | 18  |                       | 18  |          |
| ------- | --- | --------------------- | --- | -------- |
| 2400+4c | +c  | 2350+4(259.46)+203.89 |     |          |
| c =     | 1 2 | =                     |     | =303.48  |
3
|     | 12  |     | 12  |     |
| --- | --- | --- | --- | --- |

The error estimates for the second iteration can be computed as

259.46−220.00
| ε = |     | ×100%=15.21%  |     |     |
| --- | --- | ------------- | --- | --- |
a,1
259.46

203.89−103.33
| ε = |        | ×100%=49.32%  |     |     |     |     |     |     |     |
| --- | ------ | ------------- | --- | --- | --- | --- | --- | --- | --- |
| a,2 | 203.89 |               |     |     |     |     |     |     |     |
303.48−281.94
| ε = |     | ×100%=7.10%  |     |     |     |     |     |     |     |
| --- | --- | ------------ | --- | --- | --- | --- | --- | --- | --- |
a,3
303.48

The remainder of the calculation proceeds until all the errors fall below the stopping criterion of 5%. The
entire computation can be summarized as

| i   | c1  ε a,1  |     | c2   | ε   | c3  | ε a,3  | max ε a  |     |     |
| --- | ---------- | --- | ---- | --- | --- | ------ | -------- | --- | --- |
a,2
| 0          | 0       |         | 0   |         |         | 0       |         |     |     |
| ---------- | ------- | ------- | --- | ------- | ------- | ------- | ------- | --- | --- |
| 1  220.00  | 100.00  | 103.33  |     | 100.00  | 281.94  | 100.00  | 100.00  |     |     |
| 2  259.46  | 15.21   | 203.89  |     | 49.32   | 303.48  | 7.10    | 49.32   |     |     |
| 3  281.01  | 7.67    | 214.66  |     | 5.02    | 311.56  | 2.59    | 7.67    |     |     |
| 4  283.70  | 0.95    | 217.80  |     | 1.44    | 312.72  | 0.37    | 1.44    |     |     |

Thus, after 4 iterations, the maximum error is 1.44% and we arrive at the result: c  = 283.70, c  = 217.80
|     |     |     |     |     |     |     |     | 1   | 2   |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
and c  = 312.72. Note that after 10 iterations, the process would converge on c  = 284.56, c  = 218.45
| 3   |     |     |     |     |     |     |     | 1   | 2   |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
and c  = 313.06.
3

11.11  Use the Gauss-Seidel method to solve the following system until the percent relative error falls below ε =
s
5%:
|     | 10x 2x    | x    | 22    |     |     |     |     |     |     |
| --- | --------- | ---- | ----- | --- | --- | --- | --- | --- | --- |
|     | + -       | =    |       |     |     |     |     |     |     |
|     | 1 2       | 3    |       |     |     |     |     |     |     |
|   - | 3x - 6x + | 2x = | - 14  |     |     |     |     |     |     |
|     | 1 2       | 3    |       |     |     |     |     |     |     |
|     | x + x +   | 5x = | 14    |     |     |     |     |     |     |
|     | 1 2       | 3    |       |     |     |     |     |     |     |
|     |           |      |       |     |     |     |     |     |     |

The first iteration can be implemented as
| 22−2x | +x 22−2(0)+0 |     |     |     |     |     |
| ----- | ------------ | --- | --- | --- | --- | --- |
2 3
| x = | =   |     | =2.2 |     |     |     |
| --- | --- | --- | ---- | --- | --- | --- |
| 1   | 10  | 10  |      |     |     |     |

| −14+3x | −2x −14+3(2.2)−2(0) |     |        |     |     |     |
| ------ | ------------------- | --- | ------ | --- | --- | --- |
| x =    | 1 3 =               |     | =1.23  |     |     |     |
2
|      | −6               | −6  |     |     |     |     |
| ---- | ---------------- | --- | --- | --- | --- | --- |
| 14−x | −x 14−(2.2)−1.23 |     |     |     |     |     |
1 2
| x = | =   |     | =2.11 |     |     |     |
| --- | --- | --- | ----- | --- | --- | --- |
| 3   | 5   | 5   |       |     |     |     |

Second iteration:
22−2(1.23)−2.11
| x = | =2.16 |     |     |     |     |     |
| --- | ----- | --- | --- | --- | --- | --- |
| 1   | 10    |     |     |     |     |     |

−14+3(2.16)−2(2.11)
| x = |     | =1.96  |     |     |     |     |
| --- | --- | ------ | --- | --- | --- | --- |
2
−6
14−(2.16)−1.96
| x = | =1.98 |     |     |     |     |     |
| --- | ----- | --- | --- | --- | --- | --- |
| 3   | 5     |     |     |     |     |     |

The error estimates can be computed as
2.16−2.20
| ε = | ×100%=1.63%  |     |     |     |     |     |
| --- | ------------ | --- | --- | --- | --- | --- |
a,1
2.16
1.96−1.23
| ε = | ×100%=36.93%  |     |     |     |     |     |
| --- | ------------- | --- | --- | --- | --- | --- |
a,2
1.96
1.98−(2.11)
| ε = | ×100%=6.95%  |     |     |     |     |     |
| --- | ------------ | --- | --- | --- | --- | --- |
a,3
1.98
The remainder of the calculation proceeds until all the errors fall below the stopping criterion of 5%. The
entire computation can be summarized as

|        | ε             |       | ε       |       | ε max ε |         |
| ------ | ------------- | ----- | ------- | ----- | ------- | ------- |
| i  x1  | a,1           | x2    | a,2     | x3    | a,3     | a       |
| 0      | 0             | 0     |         | 0     |         |         |
| 1      | 2.20  100.00  | 1.23  | 100.00  | 2.11  | 100.00  | 100.00  |
| 2      | 2.16  1.63    | 1.96  | 36.93   | 1.98  | 6.95    | 36.93   |
| 3      | 2.01  7.88    | 1.99  | 1.67    | 2.00  | 1.25    | 7.88    |
| 4      | 2.00  0.21    | 2.00  | 0.52    | 2.00  | 0.06    | 0.52    |

Thus, after 5 iterations, the maximum error is 0.59% and we arrive at the result: x 1  = 2.00, x 2  = 2.00 and
x  = 2.00. Note that the exact result is [2 2 2].
3

11.12  Use the Gauss-Seidel method (a) without relaxation and (b) with relaxation (λ = 0.95) to solve the following
system to a tolerance of ε = 5%. If necessary, rearrange the equations to achieve convergence.
s
| -   | 3x + x + 15x | = 44    |
| --- | ------------ | ------- |
|     | 1 2          | 3       |
|     | 6x - 2x +    | x = 5   |
|     | 1 2          | 3       |
| 5x  | + 10x +      | x = 28  |
|     | 1 2          | 3       |

The equations should first be rearranged so that they are diagonally dominant,
| 6x −2x | +x =5  |     |
| ------ | ------ | --- |
| 1 2    | 3      |     |
| +10x   | +x =28 |     |
5x
| 1      | 2 3      |     |
| ------ | -------- | --- |
| −3x +x | +15x =44 |     |
| 1 2    | 3        |     |
Each can be solved for the unknown on the diagonal as
| 5+2x | −x  |     |
| ---- | --- | --- |
2 3
x =
| 1     | 6   |     |
| ----- | --- | --- |
| 28−5x | −x  |     |
| x =   | 1 3 |     |
2
10
| 44+3x | −x  |     |
| ----- | --- | --- |
1 2
x =
| 3   | 15  |     |
| --- | --- | --- |

(a) The first iteration can be implemented as
5+2(0)−0
| x = | =0.83333 |     |
| --- | -------- | --- |
1
6
28−5(0.83333)−0
| =   |     | =2.38333 |
| --- | --- | -------- |
x
| 2   | 10  |     |
| --- | --- | --- |
44+3(0.83333)−2.38333
| x = |     | =2.94111 |
| --- | --- | -------- |
3
15
Second iteration:
5+2(2.38333)−2.94111
| x = |     | =1.13759 |
| --- | --- | -------- |
1
6
28−5(1.13759)−2.94111
| x = |     | =1.93709 |
| --- | --- | -------- |
| 2   | 10  |          |
44+3(1.13759)−1.93709
| x = |     | =3.03171 |
| --- | --- | -------- |
3
15

The error estimates can be computed as
1.13759−0.83333
| ε = |         | ×100%=26.75% |
| --- | ------- | ------------ |
| a,1 | 1.13759 |              |

1.93709−2.38333
| ε = |     | ×100%=23.04% |
| --- | --- | ------------ |
a,2
1.93709

3.03171−2.94111
| ε = |     | ×100%=2.99% |
| --- | --- | ----------- |
a,3
3.03171

The remainder of the calculation proceeds until all the errors fall below the stopping criterion of 5%. The
entire computation can be summarized as

| i  x1  | ε a,1  | x2   ε   | x3  | ε a,3  max ε a  |
| ------ | ------ | -------- | --- | --------------- |
a,2
| 0           | 0                | 0       | 0        |                 |
| ----------- | ---------------- | ------- | -------- | --------------- |
| 1  0.83333  | 100.00  2.38333  | 100.00  | 2.94111  | 100.00  100.00  |
| 2  1.13759  | 26.75  1.93709   | 23.04   | 3.03171  | 2.99  26.75     |
| 3  0.97375  | 16.83  2.00996   | 3.63    | 2.99409  | 1.26  16.83     |
| 4  1.00430  | 3.04  1.99844    | 0.58    | 3.00096  | 0.23  3.04      |

Thus, after 4 iterations, the maximum error is 3.04% and we arrive at the result: x  = 1.00430, x  =
1 2
1.99844 and x  = 3.00096. The exact solution, achieved in 22 iterations where the maximum error is
3
below machine precision, but practically achieved in 10 iterations, is [1 2 3].
|     |     |     |     |     |
| --- | --- | --- | --- | --- |

(b) Our recursion equations for relaxation in Gauss-Seidel are
5+2xold −xold
x = 2r 3r
1
6
x =λx +(1−λ)xold
1r 1 1r
28−5x −xold
x = 1r 3r
2
10
x =λx +(1−λ)xold
2r 2 2r
44+3x −x
x = 1r 2r
3
15
x =λx +(1−λ)xold
3r 3 3r
First iteration: To start, assume x =xold =x =xold =x =xold =0
1 1r 2 2r 3 3r
5+2(0)−0
x = =0.83333
1
6
Apply relaxation:
x =0.95(0.83333)+(1−0.95)0=0.791667
1r
28−5(0.791667)−0
x = =2.404167
2
10
x =0.95(2.404167)+(1−0.95)0=2.283958
2r
44+3(0.791667)−2.283958
x = =2.939403
3
15
x =0.95(2.939403)+(1−0.95)0=2.792433
3r
Note that error estimates are not necessary on the first iteration, as all errors will be 100%; however, in
developing a spreadsheet or macro, these are useful values to calculate as a check. If something other
than 100% is found, it indicates an error in programming.
Second iteration:

5+2(2.283958)−2.792433
x = =1.129247
1
6
x =0.95(1.129247)+(1−0.95)(0.791667)=1.112368
1
At this point, an error estimate can be made
1.112368−0.791667
ε = 100%=28.83%
a,1
1.112368
Because this error exceeds the stopping criterion, it will not be necessary to compute error estimates for
the remainder of this iteration.
28−5(0.791667)−2.792433
x = =1.964573
2
10
x =0.95(1.964573)+(1−0.95)2.283958=1.980542
2r
44+3(1.112368)−1.980542
x = =3.023771
3
15
x =0.95(3.023771)+(1−0.95)2.792433=3.012204
3r
The computations can be continued for one more iteration. The entire calculation is summarized in the
following table.
i x1 x1r ε a1 (%) x2 x2r ε a2 (%) x3 x3r ε a3 (%)
0 0 0 0 0 0 0
1 0.833333 0.791667 100.00 2.404167 2.283958 100.00 2.939403 2.792433 100.00
2 1.129247 1.112368 28.83 1.964573 1.980542 15.32 3.023771 3.012204 7.30
3 0.99148 0.997524 11.51 2.000017 1.999044 0.93 2.999569 3.0002 0.40
4 0.999648 0.999542 0.20 2.000209 2.000151 0.06 2.999898 2.999913 0.01
After 3 iterations, the approximate errors fall below the stopping criterion with the final result: x =
1r
0.999542, x = 2.000151 and x = 2.999913. Note that the relaxed values converge on the exact solution
2r 3r

after 15 iterations at x  = 1, x  = 2 and x  = 3. This is significantly faster than the 22 iterations of the non-
|     |     |     | 1 2 | 3   |     |     |
| --- | --- | --- | --- | --- | --- | --- |
relaxed method.

11.13  Use the Gauss-Seidel method (a) without relaxation and (b) with relaxation (λ = 1.2) to solve the following
system to a tolerance of ε = 5%. If necessary, rearrange the equations to achieve convergence.
s
|     | 2x -   | 6x -   | x = - 38 |     |     |     |
| --- | ------ | ------ | -------- | --- | --- | --- |
|     | 1      | 2      | 3        |     |     |     |
|     | - 3x - | x + 7x | = - 34   |     |     |     |
|     | 1      | 2      | 3        |     |     |     |
|     | - 8x + | x - 2x | = - 20   |     |     |     |
|     | 1      | 2      | 3        |     |     |     |
The equations must first be rearranged so that they are diagonally dominant

|     | −8x +x | −2x =−20 |     |     |     |     |
| --- | ------ | -------- | --- | --- | --- | --- |
|     | 1 2    | 3        |     |     |     |     |
|     | 2x −6x | −x =−38  |     |     |     |     |
|     | 1 2    | 3        |     |     |     |     |
|     | −3x −x | +7x =−34 |     |     |     |     |
|     | 1 2    | 3        |     |     |     |     |

(a) The first iteration can be implemented as

|     | −20−x | +2x | −20−0+2(0) |       |     |     |
| --- | ----- | --- | ---------- | ----- | --- | --- |
|     | x =   | 2   | 3 =        | =2.5  |     |     |
1
|     |        | −8  | −8           |            |     |     |
| --- | ------ | --- | ------------ | ---------- | --- | --- |
|     | −38−2x | +x  | −38−2(2.5)+0 |            |     |     |
|     | =      | 1   | 3 =          | =7.166667  |     |     |
x
|     | 2      | −6  | −6  |     |     |     |
| --- | ------ | --- | --- | --- | --- | --- |
|     | −34+3x | +x  |     |     |     |     |
−34+3(2.5)+7.166667
|     | x = | 1   | 2 = |     | =−2.761905  |     |
| --- | --- | --- | --- | --- | ----------- | --- |
|     | 3   | 7   |     | 7   |             |     |

Second iteration:

−20−7.166667+2(−2.761905)
|     | x =    |     |                            | =4.08631  |     |            |
| --- | ------ | --- | -------------------------- | --------- | --- | ---------- |
|     | 1      |     | −8                         |           |     |            |
|     | −38−2x | +x  | −38−2(4.08631)+(−2.761905) |           |     |            |
|     | x =    | 1   | 3 =                        |           |     | =8.155754  |
|     | 2      | −6  |                            | −6        |     |            |
|     | −34+3x | +x  | −34+3(4.08631)+8.155754    |           |     |            |
|     | x =    | 1   | 2 =                        |           |     | =−1.94076  |
3
|     |     | 7   |     | 7   |     |     |
| --- | --- | --- | --- | --- | --- | --- |

The error estimates can be computed as

4.08631−2.5
| ε = | ×100%=38.82%  |     |     |     |
| --- | ------------- | --- | --- | --- |
a,1
4.08631
8.155754−7.166667
| ε = |     | ×100%=12.13%  |     |     |
| --- | --- | ------------- | --- | --- |
a,2
8.155754
−1.94076−(−2.761905)
| ε = |     | ×100%=42.31%  |     |     |
| --- | --- | ------------- | --- | --- |
a,3 −1.94076

The remainder of the calculation proceeds until all the errors fall below the stopping criterion of 5%.
The entire computation can be summarized as

|            |          |        | ε   | maximum ε   |
| ---------- | -------- | ------ | --- | ----------- |
| iteration  | unknown  | value  | a   | a           |
|            | x1       |        |     |             |
| 0          |          |        | 0   |             |
|            | x2       |        |     |             |
0
|     | x3  |     |     |     |
| --- | --- | --- | --- | --- |
0
|     | x1  |           |          |          |
| --- | --- | --------- | -------- | -------- |
| 1   |     | 2.5       | 100.00%  |          |
|     | x2  |           |          |          |
|     |     | 7.166667  | 100.00%  |          |
|     | x3  |           |          |          |
|     |     | -2.7619   | 100.00%  | 100.00%  |
|     | x1  |           |          |          |
| 2   |     | 4.08631   | 38.82%   |          |
|     | x2  |           |          |          |
|     |     | 8.155754  | 12.13%   |          |
x3

|     |     | -1.94076  | 42.31%  | 42.31%  |
| --- | --- | --------- | ------- | ------- |
|     | x1  |           |         |         |
| 3   |     | 4.004659  | 2.04%   |         |
|     | x2  |           |         |         |
|     |     | 7.99168   | 2.05%   |         |
|     | x3  |           |         |         |
|     |     | -1.99919  | 2.92%   | 2.92%   |

Thus, after 3 iterations, the maximum error is 2.92% and we arrive at the result: x  = 4.004659, x  =
1 2
7.99168 and x  = −1.99919.
3

(b) The same computation can be developed with relaxation where λ = 1.2.

First iteration:

| −20−x | +2x −20−0+2(0) |       |
| ----- | -------------- | ----- |
| x = 2 | 3 =            | =2.5  |
1
−8 −8

| Relaxation yields: x | =1.2(2.5)−0.2(0)=3  |     |
| -------------------- | ------------------- | --- |
1

| −38−2x | +x −38−2(3)+0 |            |
| ------ | ------------- | ---------- |
| =      | 1 3 =         | =7.333333  |
x
| 2 −6 | −6  |     |
| ---- | --- | --- |

| Relaxation yields: x | =1.2(7.333333)−0.2(0)=8.8  |     |
| -------------------- | -------------------------- | --- |
2

| −34+3x | +x −34+3(3)+8.8 |     |
| ------ | --------------- | --- |
1 2
| x = | =   | =−2.3142857  |
| --- | --- | ------------ |
| 3 7 | 7   |              |

| Relaxation yields: x | =1.2(−2.3142857)−0.2(0)=−2.7771429  |     |
| -------------------- | ----------------------------------- | --- |
3

|     |     |     |
| --- | --- | --- |

Second iteration:

| −20−x | +2x −20−8.8+2(−2.7771429) |     |             |     |     |
| ----- | ------------------------- | --- | ----------- | --- | --- |
| x = 2 | 3 =                       |     | =4.2942857  |     |     |
1
| −8  |     | −8  |     |     |     |
| --- | --- | --- | --- | --- | --- |

| Relaxation yields: x | =1.2(4.2942857)−0.2(3)=4.5531429  |     |     |     |     |
| -------------------- | --------------------------------- | --- | --- | --- | --- |
1

| −38−2x | +x −38−2(4.5531429)−2.7771429 |     |             |     |     |
| ------ | ----------------------------- | --- | ----------- | --- | --- |
| =      | 1 3 =                         |     | =8.3139048  |     |     |
x
| 2 −6 |     | −6  |     |     |     |
| ---- | --- | --- | --- | --- | --- |

| Relaxation yields: x | =1.2(8.3139048)−0.2(8.8)=8.2166857  |     |     |     |     |
| -------------------- | ----------------------------------- | --- | --- | --- | --- |
2

| −34+3x | +x −34+3(4.5531429)+8.2166857 |     |     |     |     |
| ------ | ----------------------------- | --- | --- | --- | --- |
1 2
| x = | =   |     | =−1.7319837  |     |     |
| --- | --- | --- | ------------ | --- | --- |
| 3 7 |     | 7   |              |     |     |

| Relaxation yields: x | =1.2(−1.7319837)−0.2(−2.7771429)=−1.5229518  |     |     |     |     |
| -------------------- | -------------------------------------------- | --- | --- | --- | --- |
3

The error estimates can be computed as

4.5531429−3
| ε = | ×100%=34.11%  |     |     |     |     |
| --- | ------------- | --- | --- | --- | --- |
a,1
4.5531429
8.2166857−8.8
| ε = | ×100%=7.1%  |     |     |     |     |
| --- | ----------- | --- | --- | --- | --- |
a,2
8.2166857
−1.5229518−(−2.7771429)
| ε = |     | ×100%=82.35%  |     |     |     |
| --- | --- | ------------- | --- | --- | --- |
a,3
−1.5229518

The remainder of the calculation proceeds until all the errors fall below the stopping criterion of 5%.
The entire computation can be summarized as

|            |          |        |             | ε   maximum ε |     |
| ---------- | -------- | ------ | ----------- | ------------- | --- |
| iteration  | unknown  | value  | relaxation  | a             | a   |

|     |     | x1  |            |      |            |      |          |           |
| --- | --- | --- | ---------- | ---- | ---------- | ---- | -------- | --------- |
|     | 1   |     |            | 2.5  |            | 3    | 100.00%  |           |
|     |     | x2  |            |      |            |      |          |           |
|     |     |     | 7.3333333  |      |            | 8.8  | 100.00%  |           |
|     |     | x3  |            |      |            |      |          |           |
|     |     |     | -2.314286  |      | -2.777143  |      | 100.00%  | 100.000%  |
|     |     | x1  |            |      |            |      |          |           |
|     | 2   |     | 4.2942857  |      | 4.5531429  |      | 34.11%   |           |
x2
|     |     |     |            |     |            |     |         |          |
| --- | --- | --- | ---------- | --- | ---------- | --- | ------- | -------- |
|     |     |     | 8.3139048  |     | 8.2166857  |     | 7.10%   |          |
|     |     | x3  |            |     |            |     |         |          |
|     |     |     | -1.731984  |     | -1.522952  |     | 82.35%  | 82.353%  |
|     |     | x1  |            |     |            |     |         |          |
|     | 3   |     | 3.9078237  |     | 3.7787598  |     | 20.49%  |          |
|     |     | x2  |            |     |            |     |         |          |
|     |     |     | 7.8467453  |     | 7.7727572  |     | 5.71%   |          |
|     |     | x3  |            |     |            |     |         |          |
|     |     |     | -2.12728   |     | -2.248146  |     | 32.26%  | 32.257%  |
x1

|     | 4   |     | 4.0336312  |     | 4.0846055  |     | 7.49%   |          |
| --- | --- | --- | ---------- | --- | ---------- | --- | ------- | -------- |
|     |     | x2  |            |     |            |     |         |          |
|     |     |     | 8.0695595  |     | 8.12892    |     | 4.38%   |          |
|     |     | x3  |            |     |            |     |         |          |
|     |     |     | -1.945323  |     | -1.884759  |     | 19.28%  | 19.280%  |
|     |     | x1  |            |     |            |     |         |          |
|     | 5   |     | 3.9873047  |     | 3.9678445  |     | 2.94%   |          |
|     |     | x2  |            |     |            |     |         |          |
|     |     |     | 7.9700747  |     | 7.9383056  |     | 2.40%   |          |
|     |     | x3  |            |     |            |     |         |          |
|     |     |     | -2.022594  |     | -2.050162  |     | 8.07%   | 8.068%   |
|     |     | x1  |            |     |            |     |         |          |
|     | 6   |     | 4.0048286  |     | 4.0122254  |     | 1.11%   |          |
|     |     | x2  |            |     |            |     |         |          |
|     |     |     | 8.0124354  |     | 8.0272613  |     | 1.11%   |          |
|     |     | x3  |            |     |            |     |         |          |
|     |     |     | -1.990866  |     | -1.979007  |     | 3.60%   | 3.595%   |

Thus, relaxation actually seems to retard convergence. After 6 iterations, the maximum error is
 = −1.979007.
| 3.595% and we arrive at the result: x |     |     |     | 1  = 4.0122254, x |     | 2  = 8.0272613 and x |     | 3   |
| ------------------------------------- | --- | --- | --- | ----------------- | --- | -------------------- | --- | --- |

11.18  An electronics company produces transistors, resistors, and computer chips. Each transistor requires four
units of copper, one unit of zinc, and two units of glass. Each resistor requires three, three, and one units of the three
materials, respectively, and each computer chip requires two, one, and three units of these materials, respectively.
Putting this information into table form, we get:

| Component       |     | Copper  | Zinc  |     | Glass  |     |     |     |
| --------------- | --- | ------- | ----- | --- | ------ | --- | --- | --- |
| Transistors     |     | 4       |       | 1   | 2      |     |     |     |
| Resistors       |     | 3       |       | 3   | 1      |     |     |     |
| Computer chips  |     | 2       |       | 1   | 3      |     |     |     |

Supplies of these materials vary from week to week, so the company needs to determine a different production run
each week. For example, one week the total amounts of materials available are 960 units of copper, 510 units of

zinc, and 610 units of glass. Set up the system of equations modeling the production run, and use Excel, MATLAB,
or Mathcad to solve for the number of transistors, resistors, and computer chips to be manufactured this week.
Define the quantity of transistors, resistors, and computer chips as x , x and x . The system equations
1 2 3
can then be defined as
4x +3x +2x =960
1 2 3
x +3x +x =510
1 2 3
2x +x +3x =610
1 2 3
The solution can be implemented in Excel as shown below:
The following view shows the formulas that are employed to determine the inverse in cells A7:C9 and
the solution in cells D7:D9.
Here is the same solution generated in MATLAB:
>> A=[4 3 2;1 3 1;2 1 3];
>> B=[960 510 610]';
>> x=A\B

x =
120
100
90
In both cases, the answer is x = 120, x = 100, and x = 90
1 2 3