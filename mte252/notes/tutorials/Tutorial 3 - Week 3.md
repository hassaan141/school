Tutorial 3 – Week 3
Convolution
MTE 252
Niloo (Niloofar) Azad
MASc student in SYDE department
Vision and Image Processing Lab, EC4
Email: n2azad@uwaterloo.ca

Question 2.4-1
Graphical Convolution Steps:
| 1-Keep the first signal fixed, ℎ |     |     |     | 𝜏  . |
| -------------------------------- | --- | --- | --- | ---- |
1
2-Flip and shift the second signal, ℎ 𝑡 − 𝜏  .
2
| 3-Move ℎ       | 𝑡 − | 𝜏 across ℎ | 𝜏  . |             |
| -------------- | --- | ---------- | ---- | ----------- |
|                | 2   |            | 1    |             |
| 4-Find where ℎ |     | 𝜏 and ℎ    | 𝑡 −  | 𝜏 overlap.  |
|                |     | 1          | 2    |             |
5-Multiply the two signals in the overlap region.
6-Integrate the product over the overlap region
∞
|     | 𝑓 𝑡 | = න ℎ | 𝜏 ℎ | 𝑡 − 𝜏 𝑑𝜏 |
| --- | --- | ----- | --- | -------- |
|     |     |       | 1 2 |          |
−∞
PAGE  2

Solution 2.4-1 a)
In graphical convolution, we keep ℎ 𝜏 fixed because 𝜏 is our horizontal axis.
1
Then we flip and shift the second signal, ℎ 𝑡 − 𝜏 .
2
For each value of 𝑡, ℎ 𝑡 − 𝜏 moves to a new position, and we check how much it overlaps with ℎ 𝜏 .
2 1
That overlap gives the convolution value 𝑓 𝑡 .

Solution 2.4-1 a)
In graphical convolution, we keep ℎ 𝜏 fixed because 𝜏 is our horizontal axis.
1
Then we flip and shift the second signal, ℎ 𝑡 − 𝜏 .
2
For each value of 𝑡, ℎ 𝑡 − 𝜏 moves to a new position, and we check how much it overlaps with ℎ 𝜏 .
2 1
That overlap gives the convolution value 𝑓 𝑡 .

Solution 2.4-1 b)
To find the breakpoints of 𝑓 𝑡 ,we
move the breakpoints of ℎ 𝑡 − 𝜏 ,
2
until they hit the endpoints of
ℎ 𝜏 ,which are 1and 3.
1

Solution 2.4-1 b)
To understand the correct integral for each region:
Step 1: Write the fixed nonzero interval of the first signal ℎ 𝜏
1
Step 2: For each region, substitute the region condition into the ℎ 𝑡 − 𝜏 breakpoints
2
This tells us where the breakpoints of ℎ 𝑡 − 𝜏 are located compared to ℎ 𝜏 .S
1
2
Step 3: Put the moving breakpoints in order with the fixed endpoints 1and 3.
Step 4: Identify which parts of ℎ 𝑡 − 𝜏 overlap with ℎ 𝜏 .
2 1
Step 5: Write the integral only over the nonzero overlap.
Step 1: h1(τ) ≠ 0, only in 1<τ<3
Step 2:
Step 3:
Step 4:
Step 5:
after ordering the points, we find out ℎ 𝑡 − 𝜏 is 2 over the
2
interval 1 < 𝜏 < 3.

Solution 2.4-1 b)

Solution 2.4-1 b)

Solution 2.4-1 c)

Question 2.4-2
PAGE 10

Solution 2.4-2 a)