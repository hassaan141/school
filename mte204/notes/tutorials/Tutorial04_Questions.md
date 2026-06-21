MTE 204 – Numerical Methods
Tutorial #4 Questions

Question 1:
An investigator has reported the data tabulated below for an experiment to determine the
growth rate of bacteria 𝑘 (per day) as a function of oxygen concentration 𝑐 (mg/L). It is known
that such data can be modeled by the following equation:
|     |     | 𝑘   | 𝑐2  |     |     |
| --- | --- | --- | --- | --- | --- |
𝑚𝑎𝑥
|     |     | 𝑘 = |     |     |     |
| --- | --- | --- | --- | --- | --- |
|     |     | 𝑐   | +𝑐2 |     |     |
𝑠
Where 𝑐  and 𝑘  are constants.
𝑠 𝑚𝑎𝑥
| 𝒄   | 0.5  | 0.8  | 1.5  | 2.5  | 4    |
| --- | ---- | ---- | ---- | ---- | ---- |
| 𝒌   | 1.1  | 2.4  | 5.3  | 7.6  | 8.9  |

(a) Use a transformation to linearize this equation
| (b) Use linear regression to estimate 𝑐 |     |  and 𝑘 |     |     |     |
| --------------------------------------- | --- | ------ | --- | --- | --- |
|                                         |     | 𝑠 𝑚𝑎𝑥  |     |     |     |
(c) Predict the growth rate at 𝑐 = 2 mg/L
(d) Calculate the coefficient of determination (𝑟2) and the sum of the squares of the residuals
(𝑆 )
𝑟

Question 2:
The following data points were measured for an engineering experiment:

| 𝒙     | 1.6  | 2   |     | 2.5  | 3.2  |
| ----- | ---- | --- | --- | ---- | ---- |
| 𝒇(𝒙)  | 2    | 8   |     | 14   | 15   |

(a) Develop quadratic splines for the data points and predict 𝑓(2.2)
(b) Compare your prediction to the prediction of a first-order spline