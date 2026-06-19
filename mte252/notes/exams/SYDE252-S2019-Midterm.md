Last Name:
First Name:
Signature:
University of Waterloo, Mechatronics Engineering
SYDE252: Linear Systems and Signals
Dr. Matt Borland
Midterm Examination
Time Allowed: 120 minutes
Rooms: E7-3343, E7-3353
11:30am - 1:30pm, 19/06/2019
• Just you, your brain, an approved calculator, and a pen!
• If you choose to write in pencil your test will NOT be eligible for regrading.
• Part marks can only be awarded for information that is clearly conveyed
• You are strongly advised to take the first 3-5 minutes of the test period to read the entire test
over.
• An equation sheet has been provided as a separate page.
Although this may be a most difficult thing, if one will do it, it can be done. There is nothing that
one should suppose cannot be done.
- Yamamoto Tsunetomo, Hagakure
Do not turn this page until you are told that you may do so.
Page 1 of 12

1. For the signal, x(t), shown below, plot the following transformations. Be as complete as possible:
x(t)
1
t
0 0.5 1
(a) [1 mark] x(−t−0.5)
(b) [1 mark] x(1.5t−2)
Page 2 of 12

2. [3 marks] Determine the energy, power, and the RMS value of the 50% duty cycle dc-offset saw-
| tooth wave | x(t) with peak | amplitude | A:  |
| ---------- | -------------- | --------- | --- |
Page 3 of 12

3. For the given signals, x(t) and h(t), use graphical convolution to calculate y(t).
| x(t) |     | h(t) |
| ---- | --- | ---- |
| 1    |     | 2    |
1
-1 1 2
t t
| 0 0.5 | 1   | 0   |
| ----- | --- | --- |
-1
-2
(a) [3 marks] Provide a sketch of y(t) without developing equations or solving integrals:
Page 4 of 12

| 4. For system | defined by: |     |     |
| ------------- | ----------- | --- | --- |
| (D2+4D+3)y(t) | = (D+5)x(t) |     |     |
(a) [2 marks] Find the Characteristic Equation and solve for its roots.
| (b) [1 mark] | Find the Characteristic | Modes of  | the system. |
| ------------ | ----------------------- | --------- | ----------- |
| ...continues | on next page...         |           |             |
|              |                         | Page 5 of | 12          |

| (c) [4 marks] | Find the Unit | Impulse Response, | h(t), of | the system. |
| ------------- | ------------- | ----------------- | -------- | ----------- |
Page 6 of 12

5. Two inputs, temperature T(t) and wind speed V(t), produce an output, wind chill W(t), accord-
ing to:
| 35.7+0.6T(t)−35.7V(t)0.16+ |     |     | T(t){V(t)}0.16 |
| -------------------------- | --- | --- | -------------- |
W(t) =
| ...where | the independent | variable | is t, time. |
| -------- | --------------- | -------- | ----------- |
For each part below provide a proof or an argument to support your answer.
| (a) [1 mark] | Is the system | BIBO        | stable? |
| ------------ | ------------- | ----------- | ------- |
| (b) [1 mark] | Is the system | memoryless? |         |
| (c) [1 mark] | Is the system | causal?     |         |
| ...continues | on next       | page...     |         |
Page 7 of 12

| (d) [2 marks] | Is the system | linear? |
| ------------- | ------------- | ------- |
| ...continues  | on next       | page... |
Page 8 of 12

(e) [2 marks] If the temperature is constant, that is T(t) = k , is the system linear?
T
Page 9 of 12

6. Find the zero-state response to the input, x(t), given the system’s unit impulse response:
h(t) = [2e−3t−e−2t]u(t)
Do not use graphical convolution.
(a) [2 marks] x(t) = e−tu(t)
(b) [2 marks] x(t) = e−2tu(t)
Page 10 of 12

7. A lowpass LTIC system has an impulse response, h(t), shown below.
h(t)
1
t
0
|     | 1         | 2 3       | 4 5                |               |                  |
| --- | --------- | --------- | ------------------ | ------------- | ---------------- |
| (a) | [2 marks] | Determine | a rectangular      | approximation | of hˆ(t) to h(t) |
| (b) | [1 mark]  | Determine | the time constant, | T ,           | for hˆ(t).       |
h
hˆ(t),
(c) [1/ mark] Using what is the approximate radian cutoff frequency, ω c , of this system?
2
(d) [1/ mark] Assuming a frequency ω >> ω , what is the system response, y(t), to the input
|     | 2      |                  |         | 0 c         |         |
| --- | ------ | ---------------- | ------- | ----------- | ------- |
|     | x(t) = | sin(ω t+3.674π). | Provide | a numerical | answer. |
0
|     |     |     |     | Page 11 | of 12 |
| --- | --- | --- | --- | ------- | ----- |

EXTRA PAGE FOR ROUGH WORK - Nothing on this page will be graded. Answer
| everything | in the space | provided | in the questions. |       |             |      |
| ---------- | ------------ | -------- | ----------------- | ----- | ----------- | ---- |
|            |              |          | Page 12           | of 12 | End of Last | Page |