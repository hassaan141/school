MTE 204 – Numerical Methods
Tutorial #4 Solutions

Question 1:
An investigator has reported the data tabulated below for an experiment to determine the
growth rate of bacteria 𝑘 (per day) as a function of oxygen concentration 𝑐 (mg/L). It is known
that such data can be modeled by the following equation:
|     |     |     |     |     | 𝑘   | 𝑐2  |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
𝑚𝑎𝑥
|     |     |     |     |     | 𝑘 = |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|     |     |     |     |     | 𝑐   | +𝑐2 |     |     |     |
𝑠
| Where 𝑐 |  and 𝑘  are constants.    |     |     |     |     |     |     |     |     |
| ------- | ------------------------- | --- | --- | --- | --- | --- | --- | --- | --- |
𝑠 𝑚𝑎𝑥
|     | 𝒄   | 0.5  |     | 0.8  |     | 1.5  |     | 2.5  | 4    |
| --- | --- | ---- | --- | ---- | --- | ---- | --- | ---- | ---- |
|     | 𝒌   | 1.1  |     | 2.4  |     | 5.3  |     | 7.6  | 8.9  |

(a) Use a transformation to linearize this equation
| (b) Use linear regression to estimate 𝑐 |     |     |     |     |  and 𝑘 |     |     |     |     |
| --------------------------------------- | --- | --- | --- | --- | ------ | --- | --- | --- | --- |
|                                         |     |     |     |     | 𝑠 𝑚𝑎𝑥  |     |     |     |     |
(c) Predict the growth rate at 𝑐 = 2 mg/L
(d) Calculate the coefficient of determination (𝑟2) and the sum of the squares of the residuals
|     | (𝑆 )  |     |     |     |     |     |     |     |     |
| --- | ----- | --- | --- | --- | --- | --- | --- | --- | --- |
𝑟
Solution:
Part a:
𝑘𝑚𝑎𝑥𝑐2
| The equation 𝑘 | =   |  can be linearized by inverting it to give:  |     |     |     |     |     |     |     |
| -------------- | --- | -------------------------------------------- | --- | --- | --- | --- | --- | --- | --- |
𝑐𝑠+𝑐2
|     |     |     | 1   | 𝑐 +𝑐2 |      | 1       | 𝑐 1 |     |     |
| --- | --- | --- | --- | ----- | ---- | ------- | --- | --- | --- |
|     |     |     |     | 𝑠     |      |         | 𝑠   |     |     |
|     |     |     | =   |       | =    | +       |     |     |     |
|     |     |     | 𝑘   | 𝑘     | 𝑐2 𝑘 | 𝑘       | 𝑐2  |     |     |
|     |     |     |     | 𝑚𝑎𝑥   |      | 𝑚𝑎𝑥 𝑚𝑎𝑥 |     |     |     |
|     | 1   | 1   |     |       |      | 𝑐𝑠      |     |     | 1   |
Thus, a plot of   versus   will be linear, with a slope of   and an intercept of  .
|     | 𝑘   | 𝑐2  |     |     |     | 𝑘𝑚𝑎𝑥 |     |     | 𝑘𝑚𝑎𝑥 |
| --- | --- | --- | --- | --- | --- | ---- | --- | --- | ---- |
The linearized equation can be expressed as
|            |                    |     |            |     | 𝑦 = 𝑎 +𝑎 | 𝑥   |     |     |     |
| ---------- | ------------------ | --- | ---------- | --- | -------- | --- | --- | --- | --- |
|            |                    |     |            |     | 0        | 1   |     |     |     |
|            | 1 1                |     | 1          |     | 𝑐𝑠       |     |     |     |     |
| Where 𝑦 =  |  ,    𝑥 =   ,    𝑎 | =   | , and    𝑎 |     | =        |     |     |     |     |
|            | 𝑘 𝑐2               | 0   | 𝑘𝑚𝑎𝑥       |     | 1 𝑘𝑚𝑎𝑥   |     |     |     |     |

Part b:
We can use the normal equations and solve them simultaneously to determine the values of 𝑎
0
| and 𝑎 , which will allow us to estimate 𝑐 |     |     |     |     |     |  and 𝑘 | :        |     |     |     |     |     |
| ----------------------------------------- | --- | --- | --- | --- | --- | ------ | -------- | --- | --- | --- | --- | --- |
| 1                                         |     |     |     |     |     | 𝑠      | 𝑚𝑎𝑥      |     |     |     |     |     |
|                                           |     |     |     |     |     | 𝑛∑𝑥    | 𝑦 −∑𝑥    | ∑𝑦  |     |     |     |     |
|                                           |     |     |     |     |     |        | 𝑖 𝑖      | 𝑖 𝑖 |     |     |     |     |
|                                           |     |     |     |     | 𝑎 = |        |          |     |     |     |     |     |
|                                           |     |     |     |     | 1   | 𝑛∑𝑥2   |          | 2   |     |     |     |     |
|                                           |     |     |     |     |     |        | −(∑𝑥     | )   |     |     |     |     |
|                                           |     |     |     |     |     |        | 𝑖        | 𝑖   |     |     |     |     |
|                                           |     |     |     |     |     | 𝑎 =    | 𝑦̅−𝑎 𝑥̅  |     |     |     |     |     |
|                                           |     |     |     |     |     | 0      | 1        |     |     |     |     |     |
Next, we undertake the computations required to find the values of 𝑎  and 𝑎 :
|     |     |     |     |     |     |     |       |     |     | 0   | 1   |     |
| --- | --- | --- | --- | --- | --- | --- | ----- | --- | --- | --- | --- | --- |
|     |     |     |     |     |     |     | 𝟏     | 𝟏   |     |     |     |     |
| i   |     | 𝒄   |     |     | 𝒌   |     | 𝒙 =   | 𝒚 = |   𝒙 | 𝒚   | 𝒙𝟐  | 𝒚𝟐  |
|     |     | 𝒊   |     |     | 𝒊   |     | 𝒊 𝒄𝟐  | 𝒊   |     | 𝒊 𝒊 | 𝒊   | 𝒊   |
𝒌
|     |     |      |     |     |       |     | 𝒊       |         | 𝒊       |     |          |         |
| --- | --- | ---- | --- | --- | ----- | --- | ------- | ------- | ------- | --- | -------- | ------- |
| 1   |     | 0.5  |     |     | 1.1   |     | 4.000   | 0.9091  | 3.6364  |     | 16.0000  | 0.8264  |
| 2   |     | 0.8  |     |     | 2.4   |     | 1.5625  | 0.4167  | 0.6510  |     | 2.4414   | 0.1736  |
| 3   |     | 1.5  |     |     | 5.3   |     | 0.4444  | 0.1887  | 0.0839  |     | 0.1975   | 0.0356  |
| 4   |     | 2.5  |     |     | 7.6   |     | 0.1600  | 0.1316  | 0.0211  |     | 0.0256   | 0.0173  |
| 5   |     | 4    |     |     | 8.9   |     | 0.0625  | 0.1124  | 0.0070  |     | 0.0039   | 0.0126  |
| ∑   |     | 9.3  |     |     | 25.3  |     | 6.2294  | 1.7584  | 4.3993  |     | 18.6684  | 1.0656  |

|     | ∑𝑥 = 6.2294  |     |     |     |     | ∑𝑦  | = 1.7584  |     |     | ∑𝑥  | 𝑦 = 4.3993  |     |
| --- | ------------ | --- | --- | --- | --- | --- | --------- | --- | --- | --- | ----------- | --- |
|     | 𝑖            |     |     |     |     | 𝑖   |           |     |     |     | 𝑖 𝑖         |     |

∑𝑥 2
|     | = 18.6684  |     |     |     | 𝑥̅ = 6.2294/5 = 1.2459  |     |     |     |     | 𝑦̅ = 1.7584/5 = 0.3517  |     |     |
| --- | ---------- | --- | --- | --- | ----------------------- | --- | --- | --- | --- | ----------------------- | --- | --- |
𝑖
|     |     |     |     |     |     |     |     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |

|     | ∑𝑦 2 = 1.0656  |     |     |     |     | 𝑛   | = 5  |     |     |     |     |     |
| --- | -------------- | --- | --- | --- | --- | --- | ---- | --- | --- | --- | --- | --- |
𝑖

|     |     |     | 𝑛∑𝑥  | 𝑦 −∑𝑥 | ∑𝑦  |     | 5(4.3993)−(6.2294∗1.7584) |     |     |     |     |     |
| --- | --- | --- | ---- | ----- | --- | --- | ------------------------- | --- | --- | --- | --- | --- |
|     |     |     |      | 𝑖 𝑖   | 𝑖   | 𝑖   |                           |     |     |     |     |     |
|     |     | 𝑎 = |      |       |     | =   |                           |     |     |     |     |     |
|     |     | 1   | 𝑛∑𝑥2 | −(∑𝑥  |     | 2   | 5(18.6684)−(6.2294)2      |     |     |     |     |     |
)
|     |     |     |     | 𝑖   | 𝑖   |     |     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
11.0427
|     |     |     |     |      | 𝑎 =                                     |         | = 0.2024  |     |     |     |     |     |
| --- | --- | --- | --- | ---- | --------------------------------------- | ------- | --------- | --- | --- | --- | --- | --- |
|     |     |     |     |      | 1                                       | 54.5365 |           |     |     |     |     |     |
|     |     |     | 𝑎 = | 𝑦̅−𝑎 | 𝑥̅ = 0.3517 - (0.2024*1.2459) = 0.0995  |         |           |     |     |     |     |     |
|     |     |     | 0   |      | 1                                       |         |           |     |     |     |     |     |
Thus, the mathematical expression for the straight line is
|                                 |     |     |      |     | 𝑦 =    | 0.0995+0.2024𝑥  |        |            |     |     |     |     |
| ------------------------------- | --- | --- | ---- | --- | ------ | --------------- | ------ | ---------- | --- | --- | --- | --- |
| We can estimate the values of 𝑘 |     |     |      |     |  and 𝑐 |  𝑢𝑠𝑖𝑛𝑔:         |        |            |     |     |     |     |
|                                 |     |     |      | 𝑚𝑎𝑥 |        | 𝑠               |        |            |     |     |     |     |
|                                 |     |     |      |     | 1      |                 | 1      |            |     |     |     |     |
|                                 |     |     |    𝑎 | =   | →      | 𝑘               | =      | = 10.0502  |     |     |     |     |
|                                 |     |     |      | 0   |        | 𝑚𝑎𝑥             |        |            |     |     |     |     |
|                                 |     |     |      |     | 𝑘      |                 | 0.0995 |            |     |     |     |     |
𝑚𝑎𝑥

𝑐
𝑠
|    𝑎 = | → 𝑐 = (0.2024∗10.0502) | = 2.0342  |
| ------ | ---------------------- | --------- |
| 1 𝑘    | 𝑠                      |           |
𝑚𝑎𝑥
Part c:
To predict the growth rate at 𝑐 = 2 mg/L, we need to find the value of 𝑥 corresponding to this
value of 𝑐:
1 1
|     | 𝑥 = = = 0.25  |     |
| --- | ------------- | --- |
𝑐2 22
| 𝑦 =                                | 0.0995+(0.2024∗0.25) | = 0.1501  |
| ---------------------------------- | -------------------- | --------- |
| Then, we can find 𝑘 using 𝑦 =  1   |                      |           |
𝑘
1
|     | 𝑘 = = 6.6622  |     |
| --- | ------------- | --- |
0.1501
*Note that you can also evaluate for 𝑐 = 2 mg/L directly in
𝑘 𝑐2 10.0502∗22
𝑚𝑎𝑥
| 𝑘 = | =   | = 6.6622  |
| --- | --- | --------- |
+𝑐2 2.0342+22
𝑐
𝑠

Part d:
First, we calculate the correlation coefficient:
|     | 𝑛∑𝑥 𝑦 −∑𝑥 | ∑𝑦  |
| --- | --------- | --- |
𝑖 𝑖 𝑖 𝑖
𝑟 =
|     | √𝑛∑𝑥2 −(∑𝑥)2√𝑛∑𝑦2 | −(∑𝑦)2 |
| --- | ----------------- | ------ |
|     | 𝑖                 | 𝑖      |

(5∗4.3993)−(6.2294∗1.7584)
𝑟 =
√(5∗18.6684)−6.22942√(5∗1.0656)−1.75842
11.0427
|     | 𝑟 = | = 0.9999  |
| --- | --- | --------- |
7.3848∗1.4953
Then, the coefficient of determination is
|     | 𝑟2 = 0.99992 = 0.9998  |     |
| --- | ---------------------- | --- |
𝑟2 indicates that 99.98% of the original uncertainty has been explained by the linear model.

To find the standard error of the estimate, calculate the sum of the squares of the residuals:
| i   | 𝒙   | 𝒚   | Squares of the residuals  |
| --- | --- | --- | ------------------------- |
|     | 𝒊   | 𝒊   |                           |
(𝒚 −𝒂 −𝒂 𝒙 )𝟐
𝒊 𝟎 𝟏 𝒊
|     | 4.0000  | 0.9091  | 8.26446E-11  |
| --- | ------- | ------- | ------------ |
1
| 2   | 1.5625  | 0.4167  | 8.40278E-07  |
| --- | ------- | ------- | ------------ |
| 3   | 0.4444  | 0.1887  | 6.02658E-07  |
| 4   | 0.1600  | 0.1316  | 9.30571E-08  |
| 5   | 0.0625  | 0.1124  | 4.39114E-08  |
| ∑   | 6.2294  | 1.7584  | 1.58E-6      |

The sum of the squares of the residuals
𝑆 = 1.58∗10−6
𝑟

*Note: The linear regression fit can be visualized before and after linearization using excel or
MATLAB:

Question 2:
The following data points were measured for an engineering experiment:

|     |     | 𝒙     | 1.6  |     | 2   |     | 2.5  |     | 3.2  |
| --- | --- | ----- | ---- | --- | --- | --- | ---- | --- | ---- |
|     |     | 𝒇(𝒙)  | 2    |     | 8   |     | 14   |     | 15   |

(a) Develop quadratic splines for the data points and predict 𝑓(2.2)
(b) Compare your prediction to the prediction of a first-order spline
Solution:
Part a:
For the present problem, we have four data points and three intervals as shown in the table below.
|     | i   |     |     | 𝒙   |     |     |     | 𝒇   |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|     |     |     |     | 𝒊   |     |     |     | 𝒊   |     |

|     | 1   |     |     | 1.6  |     |     |     | 2   |     |
| --- | --- | --- | --- | ---- | --- | --- | --- | --- | --- |
|     | 2   |     |     | 2    |     |     |     | 8   |     |

|     | 3   |     |     | 2.5  |     |     |     | 14  |     |
| --- | --- | --- | --- | ---- | --- | --- | --- | --- | --- |
|     | 4   |     |     | 3.2  |     |     |     | 15  |     |
The number of conditions required is (2 (n - 1) – 1), where n is the number of data points. This
means that the number of conditions required is 5.
The polynomial for each interval can be expressed as
|                                             |     |     | 𝑠 (𝑥) | = 𝑎 +𝑏 | (𝑥−𝑥 | )+𝑐 (𝑥−𝑥 | )2  |     |     |
| ------------------------------------------- | --- | --- | ----- | ------ | ---- | -------- | --- | --- | --- |
|                                             |     |     | 𝑖     | 𝑖      | 𝑖    | 𝑖 𝑖      | 𝑖   |     |     |
| Let ℎ define the width of the interval -> ℎ |     |     |       | =      | 𝑥 −𝑥 |          |     |     |     |
|                                             |     |     |       | 𝑖      | 𝑖+1  | 𝑖        |     |     |     |
First, the function must pass through all points (𝑥 = 𝑥 → ℎ = 0) to satisfy continuity
|     |     |     |     |     |     | 𝑖   | 𝑖   |     |     |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
condition:
2
|     |     | 𝑓 = 𝑎 | +𝑏 ℎ +𝑐 | ℎ   simplifies to  𝑓 |     | =   | 𝑎        Eqn. (18.32)   |     |     |
| --- | --- | ----- | ------- | -------------------- | --- | --- | ----------------------- | --- | --- |
|     |     | 𝑖     | 𝑖 𝑖 𝑖   | 𝑖 𝑖                  |     | 𝑖   | 𝑖                       |     |     |
Second, the function values of the adjacent polynomials must be equal
2
|     |     |     | 𝑓 +𝑏 ℎ | +𝑐 ℎ  | = 𝑓 |     Eqn. (18.34)  |     |     |     |
| --- | --- | --- | ------ | ----- | --- | ----------------- | --- | --- | --- |
|     |     |     | 𝑖 𝑖    | 𝑖 𝑖 𝑖 | 𝑖+1 |                   |     |     |     |
Third, the first derivatives at the interior nodes must be equal:
|     |     |     | 𝑏 +2𝑐 | ℎ = 𝑏   |      | Eqn. (18.35)  |     |     |     |
| --- | --- | --- | ----- | ------- | ---- | ------------- | --- | --- | --- |
|     |     |     | 𝑖     | 𝑖 𝑖 𝑖+1 |      |               |     |     |     |

Forth, assume that the second derivative is zero at the first point
|     |     | 2𝑐 = 0 | → 𝑐 = | 0    |     |
| --- | --- | ------ | ----- | ---- | --- |
|     |     | 1      | 1     |      |     |
➔ Therefore, the conditions required are:
2
𝑓 +𝑏 ℎ +𝑐 ℎ = 𝑓      (written for each interval→ three conditions)
| 𝑖   | 𝑖 𝑖 𝑖 𝑖   | 𝑖+1   |      |            |     |
| --- | --------- | ----- | ---- | ---------- | --- |
|     |      𝑓 +𝑏 | ℎ = 𝑓 |      |       (1)  |     |
1 1 1 2
|     |     𝑓 +𝑏 | ℎ +𝑐  | ℎ 2 = 𝑓 |                    |     |
| --- | -------- | ----- | ------- | ------------------ | --- |
|     | 2        | 2 2 2 | 2       | 3             (2)  |     |
2
|     |     𝑓 +𝑏 | ℎ +𝑐  | ℎ = 𝑓 |              (3)  |     |
| --- | -------- | ----- | ----- | ----------------- | --- |
|     | 3        | 3 3 3 | 3 4   |                   |     |

𝑏 +2𝑐 ℎ = 𝑏           (written for the number of intervals minus one, two conditions)
𝑖 𝑖 𝑖 𝑖+1
|     |     | 𝑏 = 𝑏 |                   (4)  |          |     |
| --- | --- | ----- | ---------------------- | -------- | --- |
|     |     | 1     | 2                      |          |     |
|     |     | 𝑏 +2𝑐 | ℎ =                    | 𝑏   (5)  |     |
|     |     | 2     | 2 2                    | 3        |     |
Rearrange equations (1) to (5):
|     |     | ℎ 𝑏    | = 𝑓 −𝑓 |        |     |
| --- | --- | ------ | ------ | ------ | --- |
|     |     | 1      | 1 2    | 1      |     |
|     |     | ℎ 𝑏 +ℎ | 2 𝑐 =  | 𝑓 −𝑓   |     |
|     |     | 2 2    | 2 2    | 3 2    |     |
2
|                                            |     | ℎ 𝑏 +ℎ  | 𝑐 =   | 𝑓 −𝑓   |     |
| ------------------------------------------ | --- | ------- | ----- | ------ | --- |
|                                            |     | 3 3     | 3 3   | 4 3    |     |
|                                            |     | 𝑏       | −𝑏 =  | 0      |     |
|                                            |     | 1       | 2     |        |     |
|                                            |     | 𝑏   +2ℎ | 𝑐 −𝑏  | =0     |     |
|                                            |     | 2       | 2 2   | 3      |     |
| The interval widths are calculated using ℎ |     | = 𝑥     | −𝑥    | :      |     |
|                                            |     | 𝑖       | 𝑖+1 𝑖 |        |     |

|     | i   | 𝒙    |     | 𝒇   | 𝒉    |
| --- | --- | ---- | --- | --- | ---- |
|     |     | 𝒊    |     | 𝒊   | 𝒊    |
|     | 1   | 1.6  |     | 2   | 0.4  |

|     | 2   | 2   |     | 8   | 0.5  |
| --- | --- | --- | --- | --- | ---- |

|     | 3   | 2.5  |     | 14  | 0.7  |
| --- | --- | ---- | --- | --- | ---- |
|     | 4   | 3.2  |     | 15  | -    |
After substituting these values into the conditions:
|     |     | 0.4 𝑏 | =   | 6   |     |
| --- | --- | ----- | --- | --- | --- |
1
|     |     | 0.5 𝑏  | +0.25 𝑐 | = 6  |     |
| --- | --- | ------ | ------- | ---- | --- |
|     |     | 2      |         | 2    |     |
|     |     | 0.7 𝑏  | +0.49 𝑐 | = 1  |     |
|     |     | 3      |         | 3    |     |
|     |     | 𝑏      | −𝑏 =    | 0    |     |
|     |     | 1      | 2       |      |     |
|     |     | 𝑏   +𝑐 | −𝑏      | =0   |     |
|     |     | 2      | 2       | 3    |     |

The system has five equations with five unknowns ( 𝑏 ,𝑏 ,𝑐 ,𝑏 ,𝑐 ), which can be expressed in
1 2 2 3 3
matrix form. The coefficient matrix [A] can be expressed as
0.4 0 0 0 0
0 0.5 0.25 0 0
0 0 0 0.7 0.49
1 −1 0 0 0
[ 0 1 1 −1 0 ]
The constants vector {B} is
6
6
1
0
{0}
and the unknowns’ vector {x} is
𝑏
1
𝑏
2
𝑐
2
𝑏
3
{𝑐 }
3
The system can be solved using one of the techniques we learned for solving a system of linear
equations (e.g., Gauss-Seidel or Gauss elimination methods):
0.4 0 0 0 0 𝑏 6
1
0 0.5 0.25 0 0 𝑏
2
6
0 0 0 0.7 0.49 𝑐 = 1
2
1 −1 0 0 0 𝑏 0
3
[ 0 1 1 −1 0 ]{𝑐 } {0}
3
The roots of the system are:
𝑏 15
1
𝑏
2
15
𝑐 = −6
2
𝑏 9
3
{𝑐 } {−10.8163}
3
Now, we can substitute the values for the a’s, b’s and c’s into the quadratic spline function for
each interval as follows
𝑠 (𝑥) = 𝑎 +𝑏 (𝑥−𝑥 )+𝑐 (𝑥−𝑥 )2
𝑖 𝑖 𝑖 𝑖 𝑖 𝑖

Interval (1):
(𝑥)
|     |     | 𝑠   | =     | 𝑎 +𝑏         | (𝑥−𝑥 | )                                      (Recall 𝑐 |     |     | = 0)  |
| --- | --- | --- | ----- | ------------ | ---- | ------------------------------------------------ | --- | --- | ----- |
|     |     | 1   |       | 1            | 1    | 1                                                |     |     | 1     |
|     |     | 𝑠   | (𝑥) = | 2+15(𝑥−1.6)  |      |                                                  |     |     |       |
1
Interval (2):
)2
|     | 𝑠 (𝑥) | =     | 𝑎 +𝑏               | (𝑥−𝑥 | )+𝑐 | (𝑥−𝑥 |     |     |     |
| --- | ----- | ----- | ------------------ | ---- | --- | ---- | --- | --- | --- |
|     | 2     |       | 2                  | 2    | 2   | 2    | 2   |     |     |
|     | 𝑠     | (𝑥) = | 8+15(𝑥−2)−6(𝑥−2)2  |      |     |      |     |     |     |
2
Interval (3):
)2
|     | 𝑠 (𝑥) | =   | 𝑎 +𝑏 | (𝑥−𝑥 | )+𝑐 | (𝑥−𝑥 |     |     |     |
| --- | ----- | --- | ---- | ---- | --- | ---- | --- | --- | --- |
|     | 3     |     | 3    | 3    | 3   | 3    | 3   |     |     |
(𝑥) 14+9(𝑥−2.5)−10.8163(𝑥−2.5)2
𝑠 =
3

𝑥 = 2.2 lies in the second interval between 𝑥 = 2 and 𝑥 = 2.5. Therefore, we use the spline function
𝑠 (𝑥) to predict the value at x = 2.2:
2
| 𝑠 (2.2) | = 8+15(2.2−2)−6(2.2−2)2 = 8+3−0.24 |     |     |     |     |     |     | = 10.76  |     |
| ------- | ---------------------------------- | --- | --- | --- | --- | --- | --- | -------- | --- |
2
Note: Quadratic splines have their limitations, such as a) the first interval is represented by a
straight line because of the assumption of 𝑐 = 0 and (2) the last interval may swing too high.
1

Part b:
To evaluate the function at 𝑥 = 2.2 using a first order spline, we can use following equation to
estimate the intermediate value between two points (𝑥  = 2 and 𝑥  = 2.5):
|     |     |      |        |     |       | 0      | 1   |     |     |
| --- | --- | ---- | ------ | --- | ----- | ------ | --- | --- | --- |
|     |     |      |        | 𝑓(𝑥 | )−𝑓(𝑥 | )      |     |     |     |
|     |     |      | 𝑓(𝑥 )+ |     | 1     | 0 (𝑥−𝑥 | )   |     |     |
|     | 𝑓 2 | (𝑥)= | 0      |     |       |        | 0   |     |     |
|     |     |      |        |     | 𝑥 −𝑥  |        |     |     |     |
1 0
14−8
|     |     | (2.2)= |     |     | (2.2−2)  |     |     |     |     |
| --- | --- | ------ | --- | --- | -------- | --- | --- | --- | --- |
|     |     | 𝑓 2    |     | 8+  |          |     |     |     |     |
2.5−2
𝑓 (2.2)= 10.4
2

It is clear that quadratic splines smooth out the abrupt slope change at the data points.