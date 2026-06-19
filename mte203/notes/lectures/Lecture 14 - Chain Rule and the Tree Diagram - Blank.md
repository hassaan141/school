Chain Rule and the Tree
Diagram
Recall the chain rule for one variable:
|     | If  |  and  |     |     |
| --- | --- | ----- | --- | --- |
Trim Ch 11, S. 12.6, 12.8
|                        | 𝑦𝑦 = | 𝑓𝑓 𝑢𝑢   | 𝑢𝑢 =                 | 𝑓𝑓 𝑡𝑡 |
| ---------------------- | ---- | ------- | -------------------- | ----- |
| And the derivative of  |      | 𝑦𝑦 = 𝑓𝑓 | 𝑢𝑢  with respect  𝑡𝑡 |       |
to   is written as,
𝑦𝑦
Outline:
𝑡𝑡
1. Chain rule for multivariable functions
|     | 𝑑𝑑𝑦𝑦 | 𝑑𝑑𝑦𝑦 | 𝑑𝑑𝑢𝑢 |     |
| --- | ---- | ---- | ---- | --- |
2. Chain Rule and the tree diagram
= �
|     | 𝑑𝑑𝑡𝑡 | 𝑑𝑑𝑢𝑢 | 𝑑𝑑𝑡𝑡 |     |
| --- | ---- | ---- | ---- | --- |

Theorem 1: Chain Rule of and one independent
variable
𝒇𝒇 𝒙𝒙, 𝒚𝒚
𝑡𝑡
We apply the chain rule when our multivariable function is composed of inner
functions that change over time and space.

Theorem 1: Chain Rule of and one independent
variable
𝒇𝒇 𝒙𝒙, 𝒚𝒚
At time “ ”, the altitude above sea level, , is given by the composite
function, 𝑡𝑡
𝑡𝑡 𝑧𝑧 = 𝑓𝑓(𝑥𝑥, 𝑦𝑦)
Question:
If you were hiking on these mountains, how fast would your altitude be
changing with respect to time?
Theorem 1:
Using Leibnitz notation, the chain rule for differentiating this composition
will be:

| Theorem 2: Chain Rule of  |     |     |     | and two independent variables  |     |     |     |
| ------------------------- | --- | --- | --- | ------------------------------ | --- | --- | --- |
and
|     |     |     | 𝑓𝑓(𝑥𝑥, | 𝑦𝑦) |     |     | 𝑟𝑟  |
| --- | --- | --- | ------ | --- | --- | --- | --- |
Let us consider the following functions:
𝑠𝑠
|     |      |           | , where   |             | ,      |             |     |
| --- | ---- | --------- | --------- | ----------- | ------ | ----------- | --- |
|     | 𝜔𝜔 = | 𝑓𝑓 𝑥𝑥, 𝑦𝑦 |           | 𝑥𝑥 = 𝑔𝑔(𝑟𝑟, | 𝑠𝑠) 𝑦𝑦 | = ℎ(𝑟𝑟, 𝑠𝑠) |     |
We can form the following composite function:
Theorem 2:
|     |     |     | 𝜔𝜔 = | 𝑓𝑓 𝑔𝑔(𝑟𝑟, 𝑠𝑠), | ℎ(𝑟𝑟, 𝑠𝑠) |     |     |
| --- | --- | --- | ---- | -------------- | --------- | --- | --- |
The chain rule for differentiating this composition using Leibnitz notation will be:
|     |     |     | 𝜕𝜕𝜔𝜔 𝜕𝜕𝜔𝜔 | 𝜕𝜕𝑥𝑥      | 𝜕𝜕𝜔𝜔 𝜕𝜕𝑦𝑦 |     |     |
| --- | --- | --- | --------- | --------- | --------- | --- | --- |
|     |     |     | =         | . +       | .         |     |     |
|     |     |     | 𝜕𝜕𝑟𝑟      | 𝜕𝜕𝑥𝑥 𝜕𝜕𝑟𝑟 | 𝜕𝜕𝑦𝑦 𝜕𝜕𝑟𝑟 |     |     |
|     |     |     | 𝜕𝜕𝜔𝜔 𝜕𝜕𝜔𝜔 | 𝜕𝜕𝑥𝑥      | 𝜕𝜕𝜔𝜔 𝜕𝜕𝑦𝑦 |     |     |
|     |     |     | =         | . +       | .         |     |     |
Notice that Theorem 2 has o𝜕𝜕n𝑠𝑠e te𝜕𝜕r𝑥𝑥m 𝜕𝜕f𝑠𝑠or e𝜕𝜕a𝑦𝑦ch𝜕𝜕 i𝑠𝑠ntermediate variable and
each of these terms resemble the 1-D Chain rule.

Example:
| Express  |  and  |  in terms of  |  and  |  if, |     |     |     |
| -------- | ----- | ------------- | ----- | ---- | --- | --- | --- |
|          | 𝜕𝜕𝜔𝜔  | 𝜕𝜕𝜔𝜔          |       |      |     |     |     |
|          | 𝜕𝜕𝜕𝜕  | 𝜕𝜕𝜕𝜕          | 𝑟𝑟    | 𝑠𝑠   |     |     |     |
2 2
|     |     | ω = 𝑥𝑥 | + 𝑦𝑦 , |   𝑥𝑥 = | 𝑟𝑟 − 𝑠𝑠, |   𝑦𝑦 = | 𝑟𝑟 + 𝑠𝑠 |
| --- | --- | ------ | ------ | ------ | -------- | ------ | ------- |
Solution:

Example:

Chain Rule and the Tree Diagram
What if we have a composition involving differentiable functions of  intermediate
variables?
"𝑛𝑛"
|     |     |     |         | 1    | 2   | 𝑖𝑖         | 𝑛𝑛  |     |     |
| --- | --- | --- | ------- | ---- | --- | ---------- | --- | --- | --- |
|     |     | 𝑓𝑓  | = 𝑓𝑓(𝑥𝑥 | , 𝑥𝑥 | ,…  | , 𝑥𝑥 , …𝑥𝑥 | )   |     |     |
Where each one of the intermediate variable   are a function of   independent
variables as,
𝑖𝑖
𝑥𝑥 "𝑚𝑚"
|     |     | 𝑖𝑖  |         | 1 2 |      | 𝑗𝑗       | 𝑚𝑚  |     |     |
| --- | --- | --- | ------- | --- | ---- | -------- | --- | --- | --- |
|     |     | 𝑥𝑥  | = 𝑔𝑔(𝑡𝑡 | ,𝑡𝑡 | , …, | 𝑡𝑡 ,… 𝑡𝑡 | )   |     |     |
Then for any independent variable   we will have that,
𝑡𝑡 𝑗𝑗
|      |     |      | 1    |      |      | 2    |     |      | 𝑛𝑛   |
| ---- | --- | ---- | ---- | ---- | ---- | ---- | --- | ---- | ---- |
| 𝜕𝜕𝑓𝑓 |     | 𝜕𝜕𝑓𝑓 | 𝜕𝜕𝑥𝑥 | 𝜕𝜕𝑓𝑓 | 𝜕𝜕𝑥𝑥 |      |     | 𝜕𝜕𝑓𝑓 | 𝜕𝜕𝑥𝑥 |
|      | =   | .    |      | +    | .    | + …+ |     | .    |      |
|      | 𝑗𝑗  | 1    | 𝑗𝑗   | 2    |      | 𝑗𝑗   |     | 𝑛𝑛   | 𝑗𝑗   |
| 𝜕𝜕𝑡𝑡 |     | 𝜕𝜕𝑥𝑥 | 𝜕𝜕𝑡𝑡 | 𝜕𝜕𝑥𝑥 | 𝜕𝜕𝑡𝑡 |      |     | 𝜕𝜕𝑥𝑥 | 𝜕𝜕𝑡𝑡 |
𝜕𝜕𝑓𝑓
𝑚𝑚
𝜕𝜕𝑡𝑡

Chain Rule and the Tree Diagram
The tree diagram can be explained better using an example. To do this, let us look at
| the composite function  |      |              |             |  and try and find  |  and  | *    |
| ----------------------- | ---- | ------------ | ----------- | ------------------ | ----- | ---- |
|                         |      |              |             |                    | 𝜕𝜕𝜕𝜕  | 𝜕𝜕𝜕𝜕 |
|                         | 𝑧𝑧 = | 𝑓𝑓 𝑥𝑥 𝑠𝑠, 𝑡𝑡 | , 𝑦𝑦 𝑠𝑠, 𝑡𝑡 |                    | 𝜕𝜕𝜕𝜕  | 𝜕𝜕𝜕𝜕 |
* Notice that this is a Theorem 2 case

Chain Rule and the Tree Diagram
For our problem in previous lecture,
|     | 𝜔𝜔 = | 𝑓𝑓 𝑥𝑥 − 𝑐𝑐𝑡𝑡 | + 𝑔𝑔(𝑥𝑥 | + 𝑐𝑐𝑡𝑡) |
| --- | ---- | ------------ | ------- | ------- |
And our changes of variable,
|                                  |                   | 𝑢𝑢 = | 𝑥𝑥 − 𝑐𝑐𝑡𝑡 |      |
| -------------------------------- | ----------------- | ---- | --------- | ---- |
|                                  |                   | 𝑣𝑣 = | 𝑥𝑥 + 𝑐𝑐𝑡𝑡 |      |
| The first partial derivative of  |  with respect to  |      |           |  is, |
|                                  | 𝜔𝜔                |      |           | 𝑡𝑡   |

To Construct the Tree Diagram …
 We start at the top with the function itself ( )
 We branch out writing each intermediate variable
𝑧𝑧
 We then out again and write the independent variables
 We connect the variables with one-to-one lines.
 Each line represents a partial derivative

To Use the Tree Diagram …
 Start at the bottom of the tree diagram and identify all
branches that contain the independent variable you are
differentiating with respect to.
 For each identified branch, trace upward from the variable to the top
of the tree, following the path along the branches.
 Multiply the partial derivatives along each path from top to bottom.
 Repeat this process for every branch that includes the same
independent variable.
 Add together all the products obtained from each path involving the
independent variable.
 Repeat the entire procedure for each independent
variable involved in the function.

Example:
Use the tree diagram to write the chain rule for,
𝜕𝜕𝜔𝜔
| when  | , and  |     | 𝜕𝜕𝑡𝑡 |     |
| ----- | ------ | --- | ---- | --- |
|       |        | 1   | 2    | 3   |
ω = 𝑓𝑓(𝑥𝑥, 𝑦𝑦, 𝑧𝑧) 𝑥𝑥 = 𝑔𝑔 𝑠𝑠, 𝑡𝑡, 𝑟𝑟 , 𝑦𝑦 = 𝑔𝑔 𝑠𝑠, 𝑟𝑟 , 𝑧𝑧 = 𝑔𝑔 (𝑠𝑠, 𝑡𝑡)
Solution:

Summary
 The chain rule is a powerful tool to solve problems involving
partial derivatives.
 The tree diagram help us solve partial derivatives of
compositions involving multivariable functions.
 With some practice you should be able to use the chain rule
to differentiate any composition of functions.

Thank you