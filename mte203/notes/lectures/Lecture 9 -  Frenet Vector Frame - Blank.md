The Frenet Frame
Trim Ch 11, S.11.12
Outline:
1. The Frenet Frame
2. Related Planes and Circles

Principal Unit Normal Vector
Zooming in a piece of the curve
𝐶𝐶
The principal unit normal vector is one of those vectors orthogonal to but
points in the direction in which the curve is turning (concave side of the curve).
� �
𝑁𝑁 𝑇𝑇

Principal Unit Normal Vector
Let us relate the principal unit normal vector to
� �
𝑁𝑁 𝑇𝑇(𝑠𝑠)

Principal Unit Normal Vector
The principal unit normal vector for a curve given in terms of the parameter “ ”
can be calculated as,
�
𝑁𝑁 𝑡𝑡
Note that this expression of does not need parametrization as a function of ,
and it does not require the value of the curvature!
�
𝑁𝑁 𝑠𝑠

Unit Binormal Vector
The tendency of the motion to “twist” out of plane created by and in the
direction perpendicular to it is define by,
� �
𝑇𝑇 𝑁𝑁
and is the Binormal Vector.
� � �
𝐵𝐵 = 𝑇𝑇 × 𝑁𝑁
�
𝐵𝐵

The Frenet Frame
 Together and and define a moving right-handed vector frame
called The Frenet (Fre-Nay) Frame.
� � �
𝑇𝑇 𝑁𝑁 𝐵𝐵
 This vector frame plays a significant role in calculating paths of particles
moving trough space
 The Frenet Frame helps robots and self-driving cars think like drivers,
focusing on the road ahead and how to move along it, rather than worrying about
the whole map (like GPS coordinates).
Example:
Express a vector in terms of the Frenet Frame?
⃗
𝐹𝐹

Important Related Planes and Circles
Normal Plane:
The normal plane is that plane that is determined by the vectors   and
| at a point  |  on a curve  | .   |
| ----------- | ------------ | --- |
� �
𝑵𝑵 𝑩𝑩
|     | 𝑃𝑃  | 𝐶𝐶  |
| --- | --- | --- |

Important Related Planes and Circles
Osculating Plane:
The osculating plane is that plane that is determined by the vectors   and
| at a point  |  on a curve  | .   |
| ----------- | ------------ | --- |
� �
𝑻𝑻 𝑵𝑵
|     | 𝑃𝑃  | 𝐶𝐶  |
| --- | --- | --- |

Important Related Planes and Circles
Osculating Circle (or circle of curvature):
The osculating circle (or circle of curvature) is that circle in the osculating
plane with center at and radius . The osculating circle is
the best circle that approximates the curve at .
�
𝒓𝒓 𝒔𝒔 + 𝝆𝝆(𝒔𝒔)𝑵𝑵 𝝆𝝆(𝒔𝒔)
𝑃𝑃

Summary
The principal unit vector   points toward the concave side of

the curve
�
𝑁𝑁
 The tendency of the motion to “twist” out of plane created by
|  and  |  in the direction perpendicular to it is define by  |     |     |     |
| ----- | --------------------------------------------------- | --- | --- | --- |
 T�ogeth�er   and   and   define a moving right-handed v�ector
| 𝑇𝑇  | 𝑁𝑁  |     |     | 𝐵𝐵  |
| --- | --- | --- | --- | --- |
frame called The Frenet (Fre-Nay) Frame, which simplifies
|     | �   | �   | �   |     |
| --- | --- | --- | --- | --- |
|     | 𝑇𝑇  | 𝑁𝑁  | 𝐵𝐵  |     |
calculations during path planning.
 Important related planes and circles for modeling the path of
a particle are the normal plane, the osculating plane and the
osculating circle.

Thank you