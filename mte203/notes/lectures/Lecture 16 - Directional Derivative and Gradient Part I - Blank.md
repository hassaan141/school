Directional Derivative and
the Gradient Vector
Trim Ch 11, S. 12.8, 12.4
Outline:
1. Directional derivative and the gradient vector
2. Properties of the directional derivative and
the gradient vector

Weather Maps
Level curves (or isotherms)
join locations with the
same temperature
Contour map of the temperature function T(x,y) for the states of
California and Nevada at 3:00pm on October 10, 1997.
At a location such as Reno, what if we want to know the rate of
change of temperature when traveling southeast?

Directional Derivative
Given the surface  , suppose we want to step off in the direction of an
| arbitrary vector  |        |  of increasing “ | ”   |
| ----------------- | ------ | ---------------- | --- |
|                   | 𝑓𝑓(𝑥𝑥, | 𝑦𝑦)              |     |
1 2
|     | 𝑢𝑢� = (𝑢𝑢 | , 𝑢𝑢 ) | 𝑠𝑠  |
| --- | --------- | ------ | --- |

Directional Derivative
If the parameter “s” measures the length of the line in the direction of , the
equation of this line can be written as,
𝑢𝑢�
As the point gets closer to the point , we can calculate the slope of the tangent
line (or rate of change) of at stepping off in the direction of as,
0
𝑄𝑄 𝑃𝑃
0
𝑓𝑓(𝑥𝑥, 𝑦𝑦) 𝑃𝑃 𝑢𝑢�
In the limit, this is called the Directional derivative of at in the
direction of .
0
𝑓𝑓(𝑥𝑥, 𝑦𝑦) 𝑃𝑃
𝑢𝑢�

Directional Derivative and the Gradient Vector
Let us now develop an efficient formula to calculate the directional derivative
using the chain rule,

Directional Derivative and the Gradient Vector
The directional derivative of a function   at  , stepping off in the
direction of   can therefore be calculated from,
|     | 𝑓𝑓(𝑥𝑥, 𝑦𝑦) | 𝑃𝑃 0 |
| --- | ---------- | ---- |
𝑢𝑢�
where,
𝜕𝜕𝑓𝑓 𝜕𝜕𝑓𝑓
| ∇𝑓𝑓  = | 𝚤𝚤̂ + | 𝚥𝚥̂ |
| ------ | ----- | --- |
𝜕𝜕𝑥𝑥 𝜕𝜕𝑦𝑦
is called the gradient vector.

Directional Derivative – Physical Interpretation
If   is the temperature at each point   of the surface, defined
over a region R,
| 𝑇𝑇(𝑥𝑥, 𝑦𝑦) |     |     |     | 𝑃𝑃 0 (𝑥𝑥 0 | , 𝑦𝑦 0 ) |     |
| ---------- | --- | --- | --- | ---------- | -------- | --- |
𝑇𝑇(𝑥𝑥, 𝑦𝑦)
𝑃𝑃0
The directional derivative is the instantaneous rate of change of
|     | temperature at  |  stepping off in the direction of  |     |     |     |     |
| --- | --------------- | ---------------------------------- | --- | --- | --- | --- |
0
|     |     | 𝑃𝑃  |     |     |     | 𝒖𝒖� |
| --- | --- | --- | --- | --- | --- | --- |
𝑑𝑑𝑇𝑇
𝑢𝑢�
|     |     | 𝐷𝐷 𝑇𝑇� | = �          | = ∇𝑇𝑇� | � 𝑢𝑢� |     |
| --- | --- | ------ | ------------ | ------ | ----- | --- |
|     |     |        | 𝑃𝑃0          |        | 𝑃𝑃0   |     |
|     |     |        | 𝑑𝑑𝑠𝑠 𝑢𝑢�,𝑃𝑃0 |        |       |     |

Example:
| Find the directional derivative  |           |        |   at  |       |  of the function, |
| -------------------------------- | --------- | ------ | ----- | ----- | ----------------- |
|                                  | 𝐷𝐷 𝑢𝑢�    | 𝑓𝑓(𝑥𝑥, | 𝑦𝑦)   | 1,2   |                   |
|                                  |           |        | 3     |       | 2                 |
|                                  | 𝑓𝑓 𝑥𝑥, 𝑦𝑦 | =      | 𝑥𝑥 −  | 3𝑥𝑥𝑦𝑦 | + 4𝑦𝑦             |
where   is the unit vector given by the angle
𝜋𝜋
| 𝑢𝑢� |     |     |     | 𝜃𝜃 = |     |
| --- | --- | --- | --- | ---- | --- |
6
Solution:

Example:

Properties of the Directional
Derivative and the Gradient
Vector

Directional Derivative in the Direction of
The directional derivative of a function   at   in the direction of  gives us
insight into some of the properties of the gradient vector, 𝑢𝑢�
| 𝑓𝑓(𝑥𝑥, | 𝑦𝑦) 𝑃𝑃 0 |     |     | 𝑢𝑢�  |
| ------ | -------- | --- | --- | ---- |
𝑑𝑑𝑓𝑓
| 𝐷𝐷 𝑢𝑢� 𝑓𝑓� | = �          | = ∇𝑓𝑓� | � 𝑢𝑢� |     |
| ---------- | ------------ | ------ | ----- | --- |
|            | 𝑃𝑃0          |        | 𝑃𝑃0   |     |
|            | 𝑑𝑑𝑑𝑑 𝑢𝑢�,𝑃𝑃0 |        |       |     |
The directional derivative   is the component of the gradient vector
at   in the direction of  .
𝐷𝐷 𝑢𝑢� 𝑓𝑓|𝑃𝑃0
𝑃𝑃 0 𝑢𝑢�

Summary – Part I
 The directional derivative is the instantaneous rate
of change of a function at P stepping off in the
direction of
𝒇𝒇(𝒙𝒙, 𝒚𝒚)
 The directional derivative is the component of the gradient
𝒖𝒖�
vector in the direction of
𝑢𝑢�