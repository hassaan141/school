MTE 204 Problem Set #2
Systems of Linear Equations (Chapter 9 in Chapra 8th edition, International Version)
9.4 Use the graphical method to solve
2x −6x =−18
1 2
−x +8x =40
1 2
Check your results by substituting them back into the equations.
The equations can be rearranged into a format for plotting x versus x :
2 1
x
x =3+ 1
2
3
40 x
x = + 1
2
8 8
Therefore, the solution is x = 9.6, x = 6.2 (solution obtained using MATLAB graphical zoom). The results
1 2
can be checked by substituting them back into the original equations:
2(9.6)−6(6.2)=−18
−9.6+8(6.2)=40

9.5 Given the system of equations
0.77x +x =14.25
1 2
1.2x +1.7x =20
1 2
(a) Solve graphically and check your results by substituting them back into the equations.
(b) On the basis of the graphical solution, what do you expect regarding the condition of the system?
(c) Compute the determinant.
(d) Solve by the elimination of unknowns.
(a) The equations can be rearranged into a format for plotting x versus x :
2 1
x =14.25−0.77x
2 1
20 1.2
x = + x
2 1
1.7 1.7
If you zoom in, it appears that there is a root at about (38.76, -15.595).

The results can be checked by substituting them back into the original equations:
0.77(38.76)+ (−15.595)=14.2502≅14.25
1.2(38.76)+1.7(−15.595)=20.005≅20
(b) The plot suggests that the system may be ill-conditioned because the slopes are so similar.
(c) The determinant can be computed as
D=0.77(1.7)−1(1.2)=0.1090
which is relatively small. Note that if the system is normalized first by dividing each equation by the
largest coefficient,
0.77x +x =14.25
1 2
1.2/1.7x +x =20/1.7
1 2

the determinant is even smaller
D=0.77(1)−1(.70588)=0.06412
(d) Using Eqs. (9.10) and (9.11) yields
1.7(14.25)−1(20)
x = =38.76147
1 0.109
0.77(20)−(1.2)(14.25)
x = =−15.5963
2 0.109
9.6 For the set of equations
2x + 5x = 1
2 3
2x + x + x = 1
1 2 3
3x + x = 2
1 2
(a) Compute the determinant.
(b) Use Cramer’s rule to solve for the x’s.
(c) Substitute your results back into the original equations to check your results.
(a) The determinant can be computed as:
1 1
A = =1(0)−1(1)=−1
1 1 0
2 1
A = =2(0)−1(3)=−3
2 3 0
2 1
A = =2(1)−1(3)=−1
3 3 1
D=0(−1)−2(−3)+5(−1)=1
(b) Cramer’s rule

1 2 5
1 1 1
2 1 0 −1
x = = =−2
1 D 1
0 1 5
2 1 1
3 2 0 8
x = = =8
2 D 1
0 2 1
2 1 1
3 1 2 −3
x = = =−3
3 D 1
(c) The results can be checked by substituting them back into the original equations:
0(−2)+2(8)+5(−3)=1
2(−2)+1(8)+1(−3)=1
3(−2)+1(8)+0(−3)=2
9.10 Given the system of equations
−3x +7x =2
2 3
x +2x −x =3
1 2 3
5x −2x =2
1 2
(a) Compute the determinant.
(b) Use Cramer’s rule to solve for the x’s.
(c) Use Gauss elimination with partial pivoting to solve for the x’s.
(d) Substitute your results back into the original equations to check your solution.
(a) The determinant can be computed as:
2 −1
A = =2(0)−(−1)(−2)=−2
1 −2 0
1 −1
A = =1(0)−(−1)(5)=5
2 5 0

| 1 2 |                  |     |
| --- | ---------------- | --- |
| A = | =1(−2)−2(5)=−12  |     |
3 5 −2

D=0(−2)−(−3)5+7(−12)=−69

(b) Cramer’s rule

| 2 −3 | 7     |            |
| ---- | ----- | ---------- |
| 3 2  | −1    |            |
| 2 −2 | 0 −68 |            |
| x =  | =     | =0.985507  |
| 1    | −69   |            |
D
| 0 2  | 7            |            |
| ---- | ------------ | ---------- |
| 1 3  | −1           |            |
| 5 2  | 0 −101       |            |
| x =  | =            | =1.463768  |
| 2 D  | −69          |            |
| 0 −3 | 2            |            |
| 1 2  | 3            |            |
| 5 −2 | 2 −63        |            |
| x =  | = =0.913043  |            |
| 3 D  | −69          |            |

9.9  Use Gauss elimination to solve:

| 8x +2x | −2x =8  |     |
| ------ | ------- | --- |
| 1      | 2 3     |     |
| 10x    | +2x +4x | =16 |
1 2 3
| 12x | +2x +2x | =16 |
| --- | ------- | --- |
|   1 | 2 3     |     |

Employ partial pivoting, and check your answers by substituting them into the original equations.

(a) The system is first expressed as an augmented matrix:

| 8 2 −2   | 8   |     |
| --------- | ---- | --- |
|          |     |     |
| 10 2 4    | 16   |     |
|          |     |     |
|  12 2 2 | 16  |     |


Forward elimination: Before the first normalization, maximize the pivot element. Searching within the
column belowa , it is found that  a > a ; therefore, maximize the pivot element by switching rows 1
|     | 11  | 31 11 |
| --- | --- | ----- |
and 3:

| 12 2 2 | 16 |     |
| ------- | --- | --- |
|        |    |     |

|  10 2 4 | 16  |     |
| -------- | ---- | --- |
|  −2     | 8   |     |
| 8 2     |     |     |

Complete the first forward elimination step: multiply row 1 by 10/12 = 0.83333 and subtract from row 2
to eliminatea . Multiply row 1 by 8/12 = 0.66667 and subtract from row 3 to eliminatea .
21 31

| 12 2 | 2 16 |    |
| ----- | ---- | --- |
|      |      |    |

|  0 0.33333 | 2.33333 2.66667    |    |
| ----------- | ------------------ | --- |
|            | −3.33333 −2.66667 |     |
| 0 0.66667  |                    |    |

Maximize the next pivot element by switching rows 2 and 3:

| 12 2        | 2 16              |    |
| ------------ | ----------------- | --- |
|             |                   |    |
| 0 0.66667    | −3.33333 −2.66667 |     |
|             |                   |    |
|  0 0.33333 | 2.33333 2.66667   |    |


Complete the second forward elimination step: multiply row 2 by 0.33333/0.66667 = 0.5 and subtract
| from row 3 to eliminate a | 32 .   |     |
| ------------------------- | ------ | --- |

| 12 2     | 2 16              |    |     |
| --------- | ----------------- | --- | --- |
|          |                   |    |     |
| 0 0.66667 | −3.33333 −2.66667 |     |     |
|          |                   |    |     |
|  0 0    | 4 4               |    |     |


Back substitution:

4
x = =1
3
4
−2.66667−(−3.3333)1
| x = | =1  |     |     |
| --- | --- | --- | --- |
2
0.66667
16−2(1)−2(1)
| =   | =1  |     |     |
| --- | --- | --- | --- |
x
| 1   | 12  |     |     |
| --- | --- | --- | --- |
Check by substituting back into the original equations:
8(1)+2(1)−2(1)=8
10(1)+2(1)+4(1)=16
12(1)+2(1)+2(1)=16

9.10  Given the system of equations

| −3x | +7x =2 |     |     |
| --- | ------ | --- | --- |
2 3
|   x +2x | −x =3  |     |     |
| ------- | ------ | --- | --- |
| 1       | 2 3    |     |     |
| 5x      | −2x =2 |     |     |
| 1       | 2      |     |     |
(c)  Use Gauss elimination with partial pivoting to solve for the x’s.
(d)  Substitute your results back into the original equations to check your solution.

(c) The system is first expressed as an augmented matrix:
| é0 - 3 | 7 2ù |     |     |
| ------ | ---- | --- | --- |
| ê      | ú    |     |     |
| ê1     | 3ú   |     |     |
| 2 -    | 1    |     |     |
| ê      | ú    |     |     |
| ê5     | 2ú   |     |     |
| ë - 2  | 0 û  |     |     |
Forward elimination: First, we pivot by switching rows 1 and 3:
| é5 - 2 | 0 2ù  |     |     |
| ------ | ----- | --- | --- |
| ê      | ú     |     |     |
| ê1 2 - | 1 3ú  |     |     |
| ê      | ú     |     |     |
| ê0 - 3 | 7 2ú  |     |     |
| ë      | û     |     |     |

Multiply row 1 by 1/5 = 0.2 and subtract from row 2 to eliminate a . Because a already equals zero, it
21 31
does not have to be eliminated.
5 −2 0 2 
0 2.4 −1 2.6
 0 −3 7 2  
Pivot:
5 −2 0 2 
0 −3 7 2 
 0 2.4 −1 2.6 
Multiply row 2 by 2.4/(–3) = –0.8 and subtract from row 3 to eliminate a .
32
5 −2 0 2 
0 −3 7 2 
 0 0 4.6 4.2 
Back substitution:
4.2
x = =0.913043
3
4.6
2−7(0.913043)
x = =1.463768
2 −3
2−0(0.913043)−(−2)(1.463768)
x = =0.985507
1
5
(d) Check:
−3(1.463768)+7(0.913043)=2
(0.985507)+2(1.463768)−(0.913043)=3
5(0.985507)−2(1.463768)=2
9.11 Given the equations

| 2x    | −6x −x =−38 |       |
| ----- | ----------- | ----- |
|       | 1 2 3       |       |
|   −3x | −x +7x      | =−34  |
1 2 3
| −8x | +x −2x | =−20 |
| --- | ------ | ---- |
1 2 3
(a)  Solve by Gauss elimination with partial pivoting. Show all steps of the computation.
(b)  Substitute your results into the original equations to check your answers.
(a) The system is first expressed as an augmented matrix:
|  2 −6  | −1 −38 |     |
| ------- | ------- | --- |
| −3 −1  | 7 −34  |     |
|  −8 1 | −2 −20 |     |

Forward elimination: First, we pivot by switching rows 1 and 3:
| −8 1  | −2 −20   |     |
| ------ | --------- | --- |
| −3 −1 | 7 −34    |     |
|  2 −6 | −1 −38  |     |

Multiply row 1 by –3/(–8) = 0.375 and subtract from row 2 to eliminate a . Multiply row 1 by
21
2/(–8) = –0.25 and subtract from row 3 to eliminate a .
31

| −8 1      | −2           | −20  |
| ---------- | ------------ | ----- |
|  0 −1.375 | 7.75 −26.5  |       |
|  0 −5.75  | −1.5         | −43  |
|           |              |      |

Pivot:

| −8 1      | −2          | −20   |
| ---------- | ----------- | ------ |
|  0 −5.75  | −1.5        | −43   |
|  0 −1.375 | 7.75 −26.5 |        |
|           |             |       |

Multiply row 2 by –1.375/–5.75 = 0.23913 and subtract from row 3 to eliminate a 32 .

| −8 1     | −2       | −20        |
| --------- | -------- | ----------- |
|  0 −5.75 | −1.5     | −43        |
|   0 0   | 8.108696 | −16.2174  |

Back substitution:

−16.2174
x = =−2
3
8.108696
−43−(−1.5)(−2)
x = =8
2 −5.75
−20+2(−2)−1(8)
x = =4
1 −8
(b) Check:
2(4)−6(8)−(−2)=−38
−3(4)−(8)+7(−2)=−34
−8(4)+(8)−2(−2)=−20