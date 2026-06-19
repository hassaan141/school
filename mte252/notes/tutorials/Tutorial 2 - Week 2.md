Tutorial 2 – Week 2
Linearity and Time Invariance
MTE 252
Niloo (Niloofar) Azad
MASc student in SYDE department
Vision and Image Processing Lab, EC4
Email: n2azad@uwaterloo.ca

Linearity
1) Define two inputs and their outputs:
|     |     |     |     |     |     |     |     | 𝑥 𝑡 | → 𝑦 | 𝑡   |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|     |     |     |     |     |     |     |     | 1   | 1   |     |
|     |     |     |     |     |     |     |     | 𝑥 𝑡 | → 𝑦 | 𝑡   |
To check whether a system is linear, we need to test both  2 2
additivity and scaling.
2) Form the combined input:
Equivalently, we can use the superposition principle:
|     |     |     |     |     |     |     | 𝑥 𝑡 | = 𝑘 | 𝑥 𝑡 + | 𝑘 𝑥 𝑡 |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | ----- | ----- |
|     |     |     |     |     |     |     |     | 1   | 1     | 2 2   |
If
|     |     | 𝑥 𝑡 | →   | 𝑦 𝑡 |     | 3) Substitute this combined input into the  |     |     |     |     |
| --- | --- | --- | --- | --- | --- | ------------------------------------------- | --- | --- | --- | --- |
|     |     | 1   |     | 1   |     |                                             |     |     |     |     |
system to find its (new) output
|     |     | 𝑥 𝑡 | →   | 𝑦 𝑡 |     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|     |     | 2   |     | 2   |     |     |     |     |     |     |
then the system is linear only if
4) Compare it with the same combination of
| 𝑘 𝑥 𝑡 | + 𝑘 | 𝑥 𝑡 | →   | 𝑘 𝑦 𝑡 | + 𝑘 𝑦 𝑡 |     |     |     |     |     |
| ----- | --- | --- | --- | ----- | ------- | --- | --- | --- | --- | --- |
| 1 1   |     | 2 2 |     | 1 1   | 2 2     |     |     |     |     |     |
original outputs:
for any constants 𝑘.
|     |     |     |     |     |     |     | 𝑘   | 𝑦   | 𝑡 + 𝑘 𝑦 | 𝑡   |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | ------- | --- |
|     |     |     |     |     |     |     |     | 1 1 | 2       | 2   |
In words: the output produced by a scaled combination
of inputs must equal the same scaled combination of the
If
individual outputs.
(new) output= k1y1(t)+k2y2(t)
then the system is linear.
But if either additivity or scaling test fails the system is
not linear. (for example, in Question 1.7-1 (d), we only  If they are not equal, the system is not linear.
tested scaling, and it failed)
PAGE  2

EXAMPLE 1.10 – Page 99
PAGE 3

Solution of EXAMPLE 1.10 substitute this 𝑦 𝑡 into the system to check what
input corresponds to that output
PAGE 4

Question 1.7-1 (d)
Two different solutions are
provided for this question:
a) Full superposition test
b) Scaling test
In class, I solved it using the
scaling test only, but here I
also provided the full
superposition test for clarity.
PAGE 5

Solution 1.7-1 (d)
PAGE 6

Solution 1.7-1 (d)
PAGE 7

EXAMPLE 1.14 – Page 103
For time invariant → check what a shifting input does to the output.
| Original input:                     |     | 𝑥 𝑡 → | 𝑦 𝑡 |     |         |
| ----------------------------------- | --- | ----- | --- | --- | ------- |
| 1) Shift the input by value 𝑇:    𝑥 |     |       |     | 𝑡 = | 𝑥 𝑡 − 𝑇 |
1
2) Apply the system to this new shifted input:  𝑦 𝑡 = system applied to 𝑥 𝑡
1 1
| 3) shift original output:   𝑦 |     |     | 𝑡 − 𝑇 |     |     |
| ----------------------------- | --- | --- | ----- | --- | --- |
4) Compare the 2 outputs
| 𝑦 𝑡 | = 𝑦 𝑡 − | 𝑇  => time invariant |     |     |     |
| --- | ------- | -------------------- | --- | --- | --- |
1
| 𝑦 𝑡 | ≠ 𝑦 𝑡 − | 𝑇 => time varying |     |     |     |
| --- | ------- | ----------------- | --- | --- | --- |
1
PAGE  8

Solution of EXAMPLE 1.14
PAGE 9

Question 1.7-5
PAGE 10

Solution 1.7-5 d) you can use the full superposition test for this system.
But testing only scaling is easier because the system is piecewise
this system has piecewise behavior
because different rules apply to
different input regions. One rule
handles positive inputs, and one rule
handles negative inputs.
So, scaling the input across the
boundary shifts the input from one
piece to another. For example, by
choosing a negative scaling factor, we
intentionally push the input from one
region to another.
This tests whether the system still
scales proportionally.
If scaling changes the rule, the system
is not linear.
PAGE 11

Solution 1.7-5 f)
PAGE 12

You try Question 1.7-8

Solution 1.7-8 d)

Solution 1.7-8 f)