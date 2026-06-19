Arc Length, Unit Tangent Vector
and Curvature
Trim Ch 11, S. 11.11
Outline:
1. Arc Length Parameter and
shape of a curve
2. Unit Tangent Vector and
Curvature

Arc Length Along a 3D Space Curve
One of the features of a smooth curve is that it has a measurable length.
The coordinate of each point “ ” is the directed distance along the curve from a
pre-selected base point.
𝑠𝑠 𝐶𝐶

Arc Length Along a 3D Space Curve
Let us consider a smooth curve C defined by the path:
| 𝑟𝑟⃗ 𝑡𝑡 | = 𝑥𝑥 𝑡𝑡 𝚤𝚤̂ | + 𝑦𝑦 𝑡𝑡 𝚥𝚥̂ | + 𝑧𝑧 𝑡𝑡 𝑘𝑘, � |   𝛼𝛼 | ≤ 𝑡𝑡 ≤ 𝛽𝛽 |
| ------ | ----------- | ----------- | ------------- | ---- | --------- |

Arc Length Parameter
The parameter “ ” is the natural parameter for describing a moving body’s velocity
and acceleration. The parameter “ ” is the natural parameter for studying the
𝑡𝑡
shape of a curve and it is called the arc length parameter.
𝑠𝑠
| Relating the parameters “ | ” and “ | ”:  |
| ------------------------- | ------- | --- |
|                           | 𝑠𝑠      | 𝑡𝑡  |

Arc Length Parameter

Arc Length Function
We call the directed distance the arc length function the curve
𝒔𝒔(𝒕𝒕) 𝐶𝐶

Arc Length Function vs. Arc Length Parameter
The arc length function can be calculated as
Each value of the arc length function determines a point in so we can write,
𝑠𝑠(𝑡𝑡) 𝐶𝐶
parametrizes with respect to the arc length parameter “ ”, and it determines
where we are on the curve after traveling a distance “ ”
𝑟𝑟⃗(𝑠𝑠) 𝐶𝐶 𝑠𝑠
𝑠𝑠

Example
Reparametrize the path   below with respect to arc length, measured from the
| point where  |  in the direction of increasing  |     |     |     | .   |
| ------------ | -------------------------------- | --- | --- | --- | --- |
𝑟𝑟⃗(𝑡𝑡)
| 𝑡𝑡 = | 0   |     |     |     | 𝑡𝑡  |
| ---- | --- | --- | --- | --- | --- |
�
| Solution |     | 𝑟𝑟⃗ 𝑡𝑡 = | 1 + 2𝑡𝑡 | 𝚤𝚤̂ + 3 | + 𝑡𝑡 𝚥𝚥̂ − 5𝑡𝑡𝑘𝑘 |
| -------- | --- | -------- | ------- | ------- | ---------------- |

Example
The “ ” parametrization is generally difficult to find analytically for a curve that is
already given in terms of the parameter  . Fortunately, we rarely need an exact
𝑠𝑠
| formula for  |  or its inverse  | .   |     |
| ------------ | ---------------- | --- | --- |
𝑡𝑡
| 𝑠𝑠(𝑡𝑡) |     | 𝑡𝑡(𝑠𝑠) |     |
| ------ | --- | ------ | --- |
See video posted in LEARN for a numerical example of arc length
| parametrization of a curve  |     |  initially parametrized by “ | ”   |
| --------------------------- | --- | ---------------------------- | --- |
|                             |     | 𝐶𝐶                           | 𝑡𝑡  |

How does arc length parameter increase?
| If   | ,         |  is the distance from  |     |     | to    |
| ---- | --------- | ---------------------- | --- | --- | ----- |
|      | 0         |                        |     |     | 0     |
| 𝑡𝑡 > | 𝑡𝑡 𝑠𝑠(𝑡𝑡) |                        |     | 𝑃𝑃  |   𝑃𝑃, |
𝑡𝑡
|     |     | 𝑠𝑠 𝑡𝑡 | = � 𝑣𝑣⃗(𝜏𝜏) | 𝑑𝑑𝜏𝜏 |     |
| --- | --- | ----- | ----------- | ---- | --- |
𝑡𝑡0
| and  |  increases with “t” |     |     |     |     |
| ---- | ------------------- | --- | --- | --- | --- |
𝑠𝑠(𝑡𝑡)
| If   | ,         |  is the distance from  |     |     |  to  , |
| ---- | --------- | ---------------------- | --- | --- | ------ |
|      | 0         |                        |     |     | 0      |
| 𝑡𝑡 < | 𝑡𝑡 𝑠𝑠(𝑡𝑡) |                        |     | 𝑃𝑃  | 𝑃𝑃     |

Total Length of a Curve
For a smooth curve C defined by the path:
�
| 𝑟𝑟⃗ 𝑡𝑡                         | = 𝑥𝑥 | 𝑡𝑡  | 𝚤𝚤̂ + 𝑦𝑦 | 𝑡𝑡 𝚥𝚥̂ + | 𝑧𝑧 𝑡𝑡 | 𝑘𝑘,   | 𝛼𝛼     | ≤ 𝑡𝑡 ≤ 𝛽𝛽 |
| ------------------------------ | ---- | --- | -------- | -------- | ----- | ----- | ------ | --------- |
| The total length of the curve  |      |     |          |          |       |       |  from  |  to   is, |
|                                |      |     |          |          |       | 𝐶𝐶    |        | 𝛼𝛼 𝛽𝛽     |
𝛽𝛽
Since,
|     |     |     | 𝐿𝐿  | = � | 𝑣𝑣⃗(𝑡𝑡) | 𝑑𝑑𝑡𝑡 |     |     |
| --- | --- | --- | --- | --- | ------- | ---- | --- | --- |
𝛼𝛼
|       |      |     | 𝑑𝑑𝑥𝑥 | 𝑡𝑡  | 𝑑𝑑𝑦𝑦 | 𝑡𝑡  | 𝑑𝑑𝑧𝑧 | 𝑡𝑡   |
| ----- | ---- | --- | ---- | --- | ---- | --- | ---- | ---- |
|       | 𝑣𝑣⃗  | 𝑡𝑡  | =    | 𝚤𝚤̂ | +    | 𝚥𝚥̂ | +    | 𝑘𝑘 � |
| Then, |      |     | 𝑑𝑑𝑡𝑡 |     | 𝑑𝑑𝑡𝑡 |     |      | 𝑑𝑑𝑡𝑡 |
|       |      | 𝛽𝛽  |      | 2   |      | 2   |      | 2    |
|       |      |     | 𝑑𝑑𝑥𝑥 |     | 𝑑𝑑𝑦𝑦 |     |      | 𝑑𝑑𝑧𝑧 |
|       | 𝐿𝐿 = | �   |      |     | +    |     | +    | 𝑑𝑑𝑡𝑡 |
|       |      | 𝛼𝛼  | 𝑑𝑑𝑡𝑡 |     | 𝑑𝑑𝑡𝑡 |     |      | 𝑑𝑑𝑡𝑡 |
3D Version of what you learned  before!

So far …
 The arc length parameter is used to mathematically describe
the shape of a curve with a new parametrization  .
 The parametrization   determines where we are on the
𝑟𝑟⃗(𝑠𝑠 𝑡𝑡 )
curve C after a time “t”.
𝑟𝑟⃗ 𝑡𝑡
 The parametrization   determines where we are on the
curve C after traveling a distance “s”.
𝑟𝑟⃗ 𝑠𝑠
| Both “ | ” and “ | ” increase in the direction of motion. |     |     |     |
| ------ | ------- | -------------------------------------- | --- | --- | --- |

The arc length parameter is used to determine the total

|                                 | 𝑡𝑡  | 𝑠𝑠  |          |      |         |
| ------------------------------- | --- | --- | -------- | ---- | ------- |
| length of a curve described by  |     |     | , where  |      | .       |
|                                 |     |     | 𝑟𝑟⃗(𝑡𝑡)  | 𝛼𝛼 ≤ | 𝑡𝑡 ≤ 𝛽𝛽 |

Unit Tangent Vector
| For our “ |  parametrization we  |     |
| --------- | -------------------- | --- |
found that the rate of change
𝑡𝑡"
 represents the turning
𝒅𝒅𝒓𝒓
| tangent to the curve  |  at  |     |
| --------------------- | ---- | --- |
= 𝒗𝒗 𝒕𝒕
𝒅𝒅𝒕𝒕
𝐶𝐶 𝑃𝑃
The turning unit tangent
| vector  |  to the curve  |  is  |
| ------- | -------------- | ---- |
therefore given by,
| 𝑻𝑻 � | 𝒕𝒕  | 𝐶𝐶  |
| ---- | --- | --- |

Unit Tangent Vector
| Now, looking at our “ | ” parametrization, what does  |  mean? |
| --------------------- | ----------------------------- | ------ |
𝑑𝑑𝑟𝑟⃗
𝑠𝑠
𝑑𝑑𝑑𝑑

Curvature
The rate at which turns per unit length along the curve is called the curvature,
which is represented by .
�
𝑇𝑇
𝜅𝜅
For a smooth curve parametrized in terms of “ ” (that is , ), we can
calculate the curvature as a function of “ ” using the chain rule of differentiation,
𝐶𝐶 𝑡𝑡 𝑟𝑟⃗(𝑡𝑡)
𝑡𝑡

Curvature of some familiar shapes
1. Straight Line
2. Circles
𝑦𝑦
B
A
𝑥𝑥

Summary
 The parameter “ ” is the natural parameter to study the
shape of a curve
𝑠𝑠
 We used “ ” to determine the length of a curve in 3D
 The unit tangent vector turns as P moves along the curve
𝑠𝑠
in the direction of increasing arc length “ ”
�
𝑇𝑇
 The curvature is the rate of change of with respect to “ ”
𝑠𝑠
�
𝑇𝑇 𝑠𝑠

Thank you