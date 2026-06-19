Applications of Higher Order
Partial Derivatives
Trim Ch 11, S. 12.5
Outline:
1. The Laplace Equation
2. The Wave Equation
https://www.thestrad.com/video/violin-string-
vibrations-captured-on-video/5897.article

The Laplace Equation
The three-dimensional Laplace Equation is given by,
| 2     | 2     | 2        |
| ----- | ----- | -------- |
| 𝜕𝜕 𝑓𝑓 | 𝜕𝜕 𝑓𝑓 | 𝜕𝜕 𝑓𝑓    |
| 2     | + 2   | + 2 = 0  |
| 𝜕𝜕𝑥𝑥  | 𝜕𝜕𝑦𝑦  | 𝜕𝜕𝑧𝑧     |
The Laplace Equation can also be used in two-dimensions, which is given as,
| 2     | 2     |        |
| ----- | ----- | ------ |
| 𝜕𝜕 𝑓𝑓 | 𝜕𝜕 𝑓𝑓 |        |
|       | 2 +   | 2 = 0  |
| 𝜕𝜕𝑥𝑥  | 𝜕𝜕𝑦𝑦  |        |
Solutions of this equation are called harmonic functions.
Harmonic functions play a role in problems of heat conduction, fluid flow and
electrostatic potential (see examples 12.12 and 12.13 (page 815), Trim Textbook).

The One-Dimensional Wave Equation
The wave equation describes, among other applications, the vibration of a violin
string.
It is given by,
|        | 2       | 2     |
| ------ | ------- | ----- |
|        | 𝜕𝜕 𝜔𝜔 2 | 𝜕𝜕 𝜔𝜔 |
|        | 2 = 𝑐𝑐  | 2     |
| where, | 𝜕𝜕𝑡𝑡    | 𝜕𝜕𝑥𝑥  |
: wave height
distance, starting at one end of string
Note the regular pattern of peaks and valleys in
𝜔𝜔
time an instant of time.
𝑥𝑥:
velocity at which wave propagates
https://www.thestrad.com/video/violin-string-
𝑡𝑡:  vibrations-captured-on-video/5897.article
𝑐𝑐:

Application Problem – Midterm Level
If   and   are any twice-differentiable functions of one variable, show
that,
𝑓𝑓 𝑔𝑔
|     | 𝜔𝜔 = | 𝑓𝑓 𝑥𝑥 − 𝑐𝑐𝑡𝑡 | + 𝑔𝑔(𝑥𝑥 | + 𝑐𝑐𝑡𝑡) |
| --- | ---- | ------------ | ------- | ------- |
Satisfies the one-dimensional wave equation:
|     |     | 2   | 2   |     |
| --- | --- | --- | --- | --- |
2
|           |     | 𝜕𝜕 𝜔𝜔 | 𝜕𝜕 𝜔𝜔 |     |
| --------- | --- | ----- | ----- | --- |
|           |     | 2     |       | 2   |
|           |     | =     | 𝑐𝑐    |     |
| Solution: |     | 𝜕𝜕𝑡𝑡  | 𝜕𝜕𝑥𝑥  |     |
To show that   satisfies the one-dimensional wave equation, we need to
demonstrate that the left-hand side (LHS) is equal to the right-hand side
(RHS) of the wave equation, using differentiation. 𝜔𝜔

Application Problem – Midterm Level
Because we have a composition of functions, let us do the following change of
variables,
Note:
| The chain rule of one variable stays that if  |          |          |  and     |             | ,   |
| --------------------------------------------- | -------- | -------- | -------- | ----------- | --- |
|                                               |          | 𝑦𝑦       | = 𝑓𝑓 𝑢𝑢  | 𝑢𝑢 = 𝑢𝑢(𝑡𝑡) |     |
|                                               | 𝑑𝑑𝑓𝑓(𝑢𝑢) | 𝑑𝑑𝑓𝑓(𝑢𝑢) | 𝑑𝑑𝑢𝑢(𝑡𝑡) |             |     |
|                                               |          | =        | .        |             |     |
|                                               | 𝑑𝑑𝑡𝑡     | 𝑑𝑑𝑢𝑢     | 𝑑𝑑𝑡𝑡     |             |     |

Application Problem – Midterm Level

Application Problem – Midterm Level

Application Problem – Midterm Level

Application Problem – Midterm Level

Summary
 Higher order partial derivatives appear in many physical
problems in the form of partial differential equations (PDEs)
 Applications include,
 The Laplace Equation (e.g. heat conduction, fluid flow, electric potential)
 The wave equation (e.g. vibration of strings)
 The chain rule is a very useful tool to solve PDEs but could
become cumbersome as the number of variable increases

Thank you