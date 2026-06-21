MTE 204 – Numerical Methods
Tutorial #3 Solutions

Question 1:
A manufacturing plant produces three different devices. Three materials (metal, plastic, and rubber) are
required to produce each device. The amount of material needed for each device is detailed in the table
below
|     | Device     |     | Metal     |           | Plastic  | Rubber    |      |
| --- | ---------- | --- | --------- | --------- | -------- | --------- | ---- |
|     |            |     | (g/unit)  | (g/unit)  |          | (g/unit)  |      |
|     | Device #1  |     |           | 15        | 0.25     |           | 1    |
|     | Device #2  |     |           | 17        | 0.33     |           | 1.2  |
|     | Device #3  |     |           | 19        | 0.42     |           | 1.6  |
The plant is consuming 2.12 kg of metal, 0.0434 kg of plastic, and 0.164 kg of rubber daily. Solve for the
number of devices produced daily. Use gaussian elimination with partial pivoting.
Solution:
We begin by setting up our system of equations. In this case, we want to determine how many devices
can be made for each source material daily. Note that material per device is given in grams, while total
material usage is given in kilograms. The equations for metal, plastic, and rubber, respectively, are given
below in units of grams.

15𝑥𝑥1+17𝑥𝑥2+19𝑥𝑥3
|     |     |     |     |     | = 2120 |     |     |
| --- | --- | --- | --- | --- | ------ | --- | --- |

0.25𝑥𝑥1+0.33𝑥𝑥2+0.42𝑥𝑥3
|                                                                   |     |     |     |         | = 43.4 |     |     |
| ----------------------------------------------------------------- | --- | --- | --- | ------- | ------ | --- | --- |
| Placing this system of equation in matrix 1fo𝑥𝑥r1m+ y1ie.2ld𝑥𝑥s2  |     |     |     | +1.6𝑥𝑥3 | = 164  |     |     |

𝑥𝑥1
|     |     | 15    | 17  | 19        | 2120      |     |     |
| --- | --- | ----- | --- | --------- | --------- | --- | --- |
|     |     | �0.25 |     | 0.42��𝑥𝑥2 | �= �43.4� |     |     |
0.33
| Elimination – Column 1  |     |     |     | 𝑥𝑥3 |     |     |     |
| ----------------------- | --- | --- | --- | --- | --- | --- | --- |
|                         |     | 1   | 1.2 | 1.6 | 164 |     |     |
Before we begin gaussian elimination to set all coefficients in the first column, except the pivot element,
to zero, we must perform partial pivoting. Partial pivoting swaps two (and only two) rows to ensure the
coefficient in the pivot element is the largest.
For the first column, the pivot element is is  . The coefficient in the pivot element, 15, is already the
largest of the three rows. Therefore, no pivoting is performed. Partial pivoting only swaps two rows; rows
𝑎𝑎11
are not sorted.
Row 2:

𝑎𝑎21
|     |     |     | 𝑟𝑟𝑟𝑟𝑟𝑟 2− | 𝑟𝑟𝑟𝑟𝑟𝑟 1 |     |     |     |
| --- | --- | --- | --------- | -------- | --- | --- | --- |
𝑎𝑎11

|     |     |     | 0.25 |     |     | 0.25 |     | 0.25 |     |
| --- | --- | --- | ---- | --- | --- | ---- | --- | ---- | --- |
𝑎𝑎2𝑗𝑗
|     |     | = �0.25− |     | 15  | 0.33− |     | 17  | 0.42− | 19� |
| --- | --- | -------- | --- | --- | ----- | --- | --- | ----- | --- |

|     |     |     | 15    |     |         | 15  |          |     | 15  |
| --- | --- | --- | ----- | --- | ------- | --- | -------- | --- | --- |
|     |     |     | 𝑎𝑎2𝑗𝑗 | [0  |         |     | 0.1033]  |     |     |
|     |     |     |       | =   | 0.04667 |     |          |     |     |

0.25
𝑏𝑏2
|     |     |     | =   | 43.4− |     | 2120= | 8.0667 |     |     |
| --- | --- | --- | --- | ----- | --- | ----- | ------ | --- | --- |
15
Row 3

𝑎𝑎31
|     |     |     |     | 𝑟𝑟𝑟𝑟𝑟𝑟 3− |     | 𝑟𝑟𝑟𝑟𝑟𝑟 1 |     |     |     |
| --- | --- | --- | --- | --------- | --- | -------- | --- | --- | --- |
𝑎𝑎11

|     |     |     |     | 1   |     | 1   |     | 1   |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
𝑎𝑎3𝑗𝑗
|     |     | =   | �1− | 15  | 1.2− | 17  | 1.6− |   19� |     |
| --- | --- | --- | --- | --- | ---- | --- | ---- | ----- | --- |
|     |     |     |     | 15  |      | 15  |      | 15    |     |
𝑎𝑎3𝑗𝑗 = [0 0.06667 0.3333]

1
|     |     |     | 𝑏𝑏3 = | 164− |     | 2120 = | 22.6667 |     |     |
| --- | --- | --- | ----- | ---- | --- | ------ | ------- | --- | --- |

15
After the first iteration of elimination, we have the following matrix

𝑥𝑥1
|     |     | 15  |     | 17  | 19  |     |     | 2120 |     |
| --- | --- | --- | --- | --- | --- | --- | --- | ---- | --- |
0.1033��𝑥𝑥2
|                         |     | � 0 | 0.04667 |     |        |     | �= �    | 8.0667 � |     |
| ----------------------- | --- | --- | ------- | --- | ------ | --- | ------- | -------- | --- |
| Elimination – Column 2  |     |     |         |     |        | 𝑥𝑥3 | 22.6667 |          |     |
|                         |     | 0   | 0.06667 |     | 0.3333 |     |         |          |     |
For the elimination of coefficients in column 3, the pivot element will be  . However, the coefficient in
the pivot element, 0.04667, it not presently the largest. As such, we swap the second and third row to
𝑎𝑎22
maximize the pivot element, yielding

𝑥𝑥1
|     |     | 15  |         | 17  | 19          |     |              | 2120 |     |
| --- | --- | --- | ------- | --- | ----------- | --- | ------------ | ---- | --- |
|     |     | � 0 | 0.06667 |     | 0.3333��𝑥𝑥2 |     | �= �22.6667� |      |     |
Remember,  gaussian  eliminatio n  s e e k s   to   cr e a t e   an 𝑥𝑥u3pper  t ri a n g u lar  matrix  and  only  eliminates
|     |     | 0   | 0 . 0 | 4 6 6 7 | 0 . 1 0 | 3 3 |     | 8 . 0 6 6 7 |     |
| --- | --- | --- | ----- | ------- | ------- | --- | --- | ----------- | --- |
coefficients below the current pivot element. Elements above are not affected.
Row 3

𝑎𝑎32
|     |     |     |     | 𝑟𝑟𝑟𝑟𝑟𝑟 3− |     | 𝑟𝑟𝑟𝑟𝑟𝑟 2 |     |     |     |
| --- | --- | --- | --- | --------- | --- | -------- | --- | --- | --- |
𝑎𝑎22

|     |     |     |     | 0.04667 |     |     |     | 0.04667 |     |
| --- | --- | --- | --- | ------- | --- | --- | --- | ------- | --- |
𝑎𝑎3𝑗𝑗
|     | =   | �0 0.04667− |     |         | 0.06667 |          | 0.1033−   |         | 0.3333� |
| --- | --- | ----------- | --- | ------- | ------- | -------- | --------- | ------- | ------- |
|     |     |             |     | 0.06667 |         |          |           | 0.06667 |         |
|     |     |             |     | 𝑎𝑎3𝑗𝑗 = | [0      | 0 −0.13] |           |         |         |

0.04667
|     |     | 𝑏𝑏3 | = 8.0667− |     |     | 22.6667= −7.8 |     |     |     |
| --- | --- | --- | --------- | --- | --- | ------------- | --- | --- | --- |
After gaussian elimination, we have the following matrix.
0.06667

|     | 15 17 | 19 𝑥𝑥1 | 2120 |
| --- | ----- | ------ | ---- |
0.3333��𝑥𝑥2
|                               | � 0 0.06667 | �=    | �22.6667� |
| ----------------------------- | ----------- | ----- | --------- |
| We can now perform back subst | itution     | 𝑥𝑥3   |           |
|                               | 0 0         | −0.13 | −7.8      |

−7.8
|     | 𝑥𝑥3 =  | = 60 |     |
| --- | ------ | ---- | --- |

−0.13
22.6667−0.3333(60)
𝑥𝑥2
|     | =   |     | = 40   |
| --- | --- | --- | ------ |
0.06667
2120−19(60)−17(40)
|     | 𝑥𝑥1 = |     | =  20 |
| --- | ----- | --- | ----- |
|     |       |     |       |
15

Question 2:
Four springs of differing stiffness are placed in series and a 20 N force is applied to the springs. The
following equations are the force balances between each spring, with displacement defined relative to
the fixed end of the springs.

|     |     |     |     | 𝑘𝑘2(𝑥𝑥2−𝑥𝑥1)= |     | 𝑘𝑘1𝑥𝑥1 |     |     |     |
| --- | --- | --- | --- | ------------- | --- | ------ | --- | --- | --- |

|     |     |     |     | 𝑘𝑘3(𝑥𝑥3−𝑥𝑥2)= |     | 𝑘𝑘2(𝑥𝑥2−𝑥𝑥1) |     |     |     |
| --- | --- | --- | --- | ------------- | --- | ------------ | --- | --- | --- |

|                                                        |         |         |     | 𝑘𝑘4(𝑥𝑥4−𝑥𝑥3)=  |     | 𝑘𝑘3(𝑥𝑥3−𝑥𝑥2)         |     |     |     |
| ------------------------------------------------------ | ------- | ------- | --- | -------------- | --- | -------------------- | --- | --- | --- |
| Let                                                    |  N/cm,  |  N/cm,  |     |  N/cm, an𝐹𝐹d=  |     | 𝑘𝑘4(𝑥𝑥4− N𝑥𝑥/c3m).   |     |     |     |
| 𝑘𝑘a1) =Ex1p5ress the𝑘𝑘 e2q=ua5tions ma𝑘𝑘tr3ix= fo8rm.  |         |         |     |                |     | 𝑘𝑘4 =                | 23  |     |     |
b)  Demonstrate that using the Gauss-Seidel method will result in convergence.
c)  Solve the problem iteratively using the Gauss-Seidel method. Show the system of equations
used to perform a Gauss-Seidel iteration. Carry out two iterations of the Gauss-Seidel method,
showing you work for the first iteration. Use 10 cm as an initial value for all displacements.
Solution:
Part a:
Let begin by rearranging all equations to make placing them in matrix form simpler.

(𝑘𝑘1+𝑘𝑘2)𝑥𝑥1−𝑘𝑘2𝑥𝑥2
= 0

−𝑘𝑘2𝑥𝑥1+(𝑘𝑘2+𝑘𝑘3)𝑥𝑥2−𝑘𝑘3𝑥𝑥3
= 0

|                                                |     |     | −𝑘𝑘3𝑥𝑥2+(𝑘𝑘3+𝑘𝑘4)𝑥𝑥3−𝑘𝑘4𝑥𝑥4 |         |         |                |      | = 0      |     |
| ---------------------------------------------- | --- | --- | --------------------------- | ------- | ------- | -------------- | ---- | -------- | --- |
| Placing these equations in matrix form yields  |     |     |                             |         |         | −𝑘𝑘4𝑥𝑥3+𝑘𝑘4𝑥𝑥4 |      | =  𝐹𝐹    |     |
|                                                |     |     | 𝑘𝑘1+𝑘𝑘2                     | −𝑘𝑘2    |         |                |      | 𝑥𝑥1      |     |
|                                                |     |     |                             |         |         | 0              | 0    |          | 0   |
|                                                |     |     | −𝑘𝑘2                        | 𝑘𝑘2+𝑘𝑘3 |         | −𝑘𝑘3           |      | 𝑥𝑥2      |     |
|                                                |     |     |                             |         |         |                | 0    |          | 0   |
|                                                |     |     | �                           |         |         |                |      | �� 𝑥𝑥3�= | � � |
|                                                |     |     | 0                           | −𝑘𝑘3    | 𝑘𝑘3+𝑘𝑘4 |                | −𝑘𝑘4 |          | 0   |
𝑥𝑥4
| Inserting numerical values yields0  |     |     |     |     | 0   | −𝑘𝑘3 | 𝑘𝑘4 |     | 𝐹𝐹  |
| ----------------------------------- | --- | --- | --- | --- | --- | ---- | --- | --- | --- |
|                                     |     |     |     |     |     |      | 𝑥𝑥1 |     |     |
|                                     |     |     | 20  | −5  | 0   | 0    |     | 0   |     |
𝑥𝑥2
|     |     |     | −5  | 13  | −8  | 0   |          | 0   |     |
| --- | --- | --- | --- | --- | --- | --- | -------- | --- | --- |
|     |     |     | �   |     |     |     | �� 𝑥𝑥3�= | �   | �   |
|     |     |     | 0   | −8  | 31  | −23 |          | 0   |     |
For trivia, this is known as a banded 0  matr 0 ix, as −  it 2  s 3 ymm 2 e 3 tric a𝑥𝑥b4out th 2 e 0  diagonal of the matrix.
It satisfies:
|     |     |     |     |     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
These type of matrix are actually very common i𝑎𝑎n𝑖𝑖 𝑗𝑗m=an𝑎𝑎y𝑗𝑗 𝑖𝑖situations (Like finite element analysis and heat
transfer, and structural problems) and a number of specialized algorithms have been developed to solve

these types of problems quickly and efficiently. However, we will limit our focus to the Gauss-Seidel
method.
In finite element analysis, the structure is divided into many small elements. Each node is usually
connected only to neighbouring nodes. Therefore, the coefficient matrix often has many zeros, and the
non-zero entries are concentrated near the diagonal.
In heat transfer or heat-treatment simulations, the temperature at one node is mainly affected by
neighbouring nodes. After discretization, this local interaction leads to a banded coefficient matrix.
Part b:
Prior to carrying out Gauss-Seidel iteration, we first need to demonstrate that this system of equations
will converge using the Gauss-Seidel method. This means the matrix must meet the condition below. In
plain English, convergence is demonstrated if the element along the diagonal for a given row is larger then
the sum of the absolute value of all other elements in the same row.
𝑛𝑛
|𝑎𝑎𝑖𝑖𝑖𝑖|> � |𝑎𝑎𝑖𝑖𝑗𝑗|
Checking the convergence criteria yields 𝑗𝑗=1,𝑗𝑗≠𝑖𝑖

|     | |𝑎𝑎11| |     | |𝑎𝑎12| |     |
| --- | ------ | --- | ------ | --- |
|𝑎𝑎22| |𝑎𝑎21|+|𝑎𝑎23|
|     | �   | �> � |     | �   |
| --- | --- | ---- | --- | --- |
|𝑎𝑎33| |𝑎𝑎32|+|𝑎𝑎34|
|𝑎𝑎44| |𝑎𝑎43|

20 5
13 13
� � > � �
31 31
You will note that convergence is not strictly met for all equations. While this does not guarantee the
23 23
system will converge, it also doesn’t mean the system will not converge. Unfortunately, this is a somewhat
contradictory case. For the sake of this problem, let us continue under the assumption this system will
converge.

Part c:
Lets begin by setting up the equations need for Gauss-Seidel iteration. As a reminder, the general form of
the equation used for this method is as follows
|     |     |     | 𝑛𝑛  |     |
| --- | --- | --- | --- | --- |
1
|     | 𝑥𝑥𝑖𝑖 = | � ��𝑏𝑏𝑖𝑖 − | � 𝑎𝑎𝑖𝑖𝑗𝑗𝑥𝑥𝑗𝑗� |     |
| --- | ------ | ---------- | ------------- | --- |
𝑎𝑎𝑖𝑖𝑖𝑖
𝑗𝑗=1,𝑗𝑗≠𝑖𝑖
The diagonal coefficient in each row should be larger than the sum of the other coefficients in that row.
|     |       |     | 𝑥𝑥1 |     |
| --- | ----- | --- | --- | --- |
|     | 20 −5 | 0   | 0   | 0   |
𝑥𝑥2
|     | −5 13 | −8     | 0        | 0   |
| --- | ----- | ------ | -------- | --- |
|     | �     |        | �� 𝑥𝑥3�= | � � |
|     | 0 −8  | 31 −23 |          | 0   |
|     |       |        | 𝑥𝑥4      |     |
|     | 0 0   | −23    | 23       | 20  |
The four equations are (after substituting real values)

|     | 1                 | 5   |     |     |
| --- | ----------------- | --- | --- | --- |
| 𝑥𝑥1 | = � �(0−(−5)𝑥𝑥2)= |     | 𝑥𝑥2 |     |

|     | 20                        | 20  |     |             |
| --- | ------------------------- | --- | --- | ----------- |
|     | 1                         |     | 1   |             |
| 𝑥𝑥2 | = � �(0−(−5)𝑥𝑥1−(−8)𝑥𝑥3)= |     |     | (5𝑥𝑥1+8𝑥𝑥3) |

|     | 13                     |     | 13         |               |
| --- | ---------------------- | --- | ---------- | ------------- |
|     | 1                      |     |            | 1             |
| 𝑥𝑥3 | �(0−(−8)𝑥𝑥2−(−23)𝑥𝑥4)= |     |            | (8𝑥𝑥2 +23𝑥𝑥4) |
|     | = �                    |     |            |               |
|     | 31                     |     |            | 31            |
|     | 1                      |     | 1          |               |
| 𝑥𝑥4 | ��20−(−23𝑥𝑥3)�=        |     | (20+23𝑥𝑥3) |               |
= �
| Iteration 1  | 23  |     | 23  |     |
| ------------ | --- | --- | --- | --- |
Now we can begin our first iteration. Remember, we are initializing all displacements to equal 10 cm.
For ease of writing, equations are organized in matrix form. Remember, we solve each equation
incrementally and can use the newly calculated value of in subsequent equations. This is why the second
| equation below uses a value of 2.5 for  |     |     |     |     |
| --------------------------------------- | --- | --- | --- | --- |
𝑥𝑥1

5
|     |     |     |     |     | ⎡   |     | (10) | ⎤   |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | ---- | --- | --- | --- | --- |
20
|     |     |     |     | 𝑥𝑥1 | ⎢   |                |     | ⎥   |     |     |     |
| --- | --- | --- | --- | --- | --- | -------------- | --- | --- | --- | --- | --- |
|     |     |     |     |     | 1   |                |     | 2.5 |     |     |     |
|     |     |     |     |     | ⎢   | �5(2.5)+8(10)� |     | ⎥   |     |     |     |
𝑥𝑥 2
|     |     |     |     |      | ⎢ 13              |     |     | ⎥ 7 . 1 1 | 5 4 |     |     |
| --- | --- | --- | --- | ---- | ----------------- | --- | --- | --------- | --- | --- | --- |
|     |     |     |     | � 3  | � =               |     |     | = �       | �   |     |     |
|     |     |     |     | 𝑥𝑥   | 1                 |     |     | 9 . 2 5   | 5 6 |     |     |
|     |     |     |     |      | ⎢                 |     |     | ⎥         |     |     |     |
|     |     |     |     | 𝑥𝑥4  | �8(7.115)+23(10)� |     |     |           |     |     |     |
|     |     |     |     |      | ⎢31               |     |     | ⎥ 10.152  |     |     |     |
1
|     |     |     |     |     | ⎢   |     |     | ⎥   |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
�20+23(9.2556)�
|     |     |     |     |     | ⎣   |     |     | ⎦   |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
23
Iteration 2:
While the question only asks that one iteration be shown, we show the second iteration here in the hopes
it will help to demonstrate how variables from earlier equations in an iteration can be used in the same
iteration.
5
|     |     |     |     |     | ⎡   | (7.1154) |     | ⎤   |     |     |     |
| --- | --- | --- | --- | --- | --- | -------- | --- | --- | --- | --- | --- |
20
|     |     |     |     | 𝑥𝑥1  | ⎢                       |     |     | ⎥         |             |     |     |
| --- | --- | --- | --- | ---- | ----------------------- | --- | --- | --------- | ----------- | --- | --- |
|     |     |     |     |      | 1                       |     |     |           | 1.7789      |     |     |
|     |     |     |     |      | ⎢                       |     |     | ⎥         |             |     |     |
|     |     |     |     | 𝑥𝑥 2 | �5(1.7789)+8(9.2556)�   |     |     |           |             |     |     |
|     |     |     |     |      | 13                      |     |     |           | 6 . 3 7 9 9 |     |     |
|     |     |     | �   | �=   | ⎢                       |     |     | ⎥ = �     | �           |     |     |
|     |     |     | 𝑥𝑥  | 3    | 1                       |     |     |           | 9 . 1 5 8 7 |     |     |
|     |     |     |     |      | ⎢                       |     |     | ⎥         |             |     |     |
|     |     |     |     | 𝑥𝑥4  | �8(6.3799)+23(10.1252)� |     |     |           |             |     |     |
|     |     |     |     |      | ⎢31                     |     |     | ⎥ 10.0283 |             |     |     |
|     |     |     |     |      | ⎢ 1                     |     |     | ⎥         |             |     |     |
�20+23(9.1587)�
|     |     |     |     |     | ⎣   |     |     | ⎦   |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
23
The table below provides the first four Gauss-Seidel iterations for this system of equations, along with the
relative absolute error for each variable.

|     |        |         |           |       |             | �𝑥𝑥𝑛𝑛𝑛𝑛𝑛𝑛,𝑖𝑖 | −𝑥𝑥𝑜𝑜𝑜𝑜𝑜𝑜,𝑖𝑖� |         |           |          |           |
| --- | ------ | ------- | --------- | ----- | ----------- | ------------ | ------------- | ------- | --------- | -------- | --------- |
|     |        |         |           |       | �𝜖𝜖𝑎𝑎,𝑖𝑖� = | �            |               | �×100%  |           |          |           |
|     |        |         |           |       |             |              | 𝑥𝑥𝑛𝑛𝑛𝑛𝑛𝑛,𝑖𝑖   |         |           |          |           |
|     | Iter.  |  (cm)   |           |       |    (cm)     |              |               |  (cm)   |           |  (cm)    |           |
|     | 0      | 10      |           |       | -           | 10           | -             | 10      | -         | 10       | -         |
|     |        | 𝒙𝒙𝟏𝟏    | 𝝐𝝐𝒙𝒙𝟏𝟏(%) |       | 𝒙𝒙𝟐𝟐        |              | 𝝐𝝐𝒙𝒙𝟐𝟐(%)     | 𝒙𝒙𝟑𝟑    | 𝝐𝝐𝒙𝒙𝟑𝟑(%) | 𝒙𝒙𝟒𝟒     | 𝝐𝝐𝒙𝒙𝟒𝟒(%) |
|     | 1      | 2.5     |           | 300   | 7.1154      |              | 40.5          | 9.2556  | 8.04      | 10.1251  | 1.23      |
|     | 2      | 1.7788  |           | 40.5  | 6.3799      |              | 11.5          | 9.1586  | 1.06      | 10.0282  | 0.97      |
|     | 3      | 1.5920  |           | 11.5  | 6.2495      |              | 2.09          | 9.0531  | 1.17      | 9.9226   | 1.06      |
|     | 4      | 1.5624  |           | 2.09  | 6.1720      |              | 1.26          | 8.9547  | 1.10      | 9.8243   | 1.00      |

While a fixed number of iterations was carried out here, the inclusion of error calculations in the above
table raises the question what the actual error of the iteration is. Or, phrased somewhat differently, if we
were to allow the Gauss-Seidel method to converge automatically, what error metric should we use to
gauge convergence? The textbook recommends taking the sum of all errors to use a termination criterion.

For reference, the actual solution to this system of equations is
1.3333
5.3333
𝑥𝑥 = � �cm
7.8333
Using the naïve Gauss-Seidel method (no relaxation, no pivoting), it takes approximately 66 iterations for
8.7029
the Gauss-Seidel method to converge to within two decimal places of this answer for all variables. This is
very slow convergence behaviour. The use of relaxation (discussed in lecture) can help to improve
convergence behaviour.
The solution does not apply relaxation here because the question asks for the naïve Gauss-Seidel method.
The last sentence is just a note. Relaxation means modifying the Gauss-Seidel update by mixing the newly
computed value with the previous value. If the relaxation factor is greater than 1, it may accelerate
convergence. If it is less than 1, it may improve stability. In this example, the naïve method needs about
66 iterations, so relaxation could potentially reduce the number of iterations.