SYDE252 - W02A - Complex Signals
and the Unit Impulse
Dr. Matt Borland

https://en.wikipedia.org/wiki/Buddhabrot

SYDE252 - W02A - Complex Signals and Unit Impulse

What are we doing today:

● Introducing two representations of ideal signals

○ Complex exponentials
○ Unit Impulse

● Both have definitions in CT and DT

Adapted from N. Jiang, SYDE252 2016

SYDE252 - W02A - Complex Signals and Unit Impulse

1.4 Unit impulse and unit step

DT unit impulse and unit step

Adapted from N. Jiang, SYDE252 2016

SYDE252 - W02A - Complex Signals and Unit Impulse

Unit impulse and unit step

DT unit impulse and unit step

Sampling property of the DT unit impulse function:

The value here is

0

0

1

0

0

is also called unit sample (function)

Adapted from N. Jiang, SYDE252 2016

SYDE252 - W02A - Complex Signals and Unit Impulse

Euler’s Formula!

https://en.wikipedia.org/wiki/Euler%27s_formula

Adapted from N. Jiang, SYDE252 2016

Complex exponential signals
CT Complex exponential signals

SYDE252 - W02A - Complex Signals and Unit Impulse

Both parts are periodic, therefore             is periodic.

The fundamental period is                  (s), and the fundamental
frequency is      (radians / s)

It follows that                                             are all periodic.

Fund. freq. (rad/s)

Fund. period (s)

Harmonically related complex exponentials:

A set of complex exponentials whose fund.
freq. are all multiples of a single frequency.

Adapted from N. Jiang, SYDE252 2016

Harmonics

SYDE252 - W02A - Complex Signals and Unit Impulse

SYDE252 - W02A - Complex Signals and Unit Impulse

CT Complex exponential signals

Several notes on CT complex exponential signals

• Have a central role in our analysis of CT signals and systems

• Always periodic regardless the value of

• The larger the value of      , the higher the frequency of the

signal.

Adapted from N. Jiang, SYDE252 2016

DT Complex exponential signals

SYDE252 - W02A - Complex Signals and Unit Impulse

Is x[n] periodic, like the CT complex exponential signals?

We need to find an N, such that

Plug in the signal, we have

In order to get the above condition, we need

Therefore, we need                        , where N and m are integers.

Or we need                    . In other words,                  (rational)

Adapted from N. Jiang, SYDE252 2016

SYDE252 - W02A - Complex Signals and Unit Impulse

DT Complex exponential signals

Example 1

Therefore, the signal is periodic;
It’s fund. period is N=16, fund. freq. is      rad/s

Example 2

not rational

Therefore, the signal is NOT periodic;

                                                    where N and m are integers.

Adapted from N. Jiang, SYDE252 2016

SYDE252 - W02A - Complex Signals and Unit Impulse

DT Complex exponential signals

Example 3

Therefore, the signal is periodic;
It’s fund. period is N=8, fund. freq. is      rad/s

Example 4

The two signals, with different      , have the same freq.

Therefore, the signal is periodic;
It’s fund. period is N=8, fund. freq. is      rad/s

Adapted from N. Jiang, SYDE252 2016

DT Sinusoids don’t always “fit” on the grid...

SYDE252 - W02A - Complex Signals and Unit Impulse

SYDE252 - W02A - Complex Signals and Unit Impulse

             , the signal has the fastest change:
the signal takes max. and min. values at two
adjacent values of n

Adapted from N. Jiang, SYDE252 2016

                   , the signal has the slowest change:
a constant value

Adapted from N. Jiang, SYDE252 2016

Different        , but the signals are identical.

Adapted from N. Jiang, SYDE252 2016

Several notes on DT complex exponential signals

SYDE252 - W02A - Complex Signals and Unit Impulse

• Have a central role in our analysis of DT signals and systems

•

It is periodic ONLY when                              (a rational number)

     In this case, fund. period is N, and fund. freq. is        .

• The fund. frequency of the signal does NOT monotonically increase with       .

• When        is the odd multiple of    , the signal has the highest frequency;

• When        is the even multiple of    , the signal has the lowest frequency;

Adapted from N. Jiang, SYDE252 2016

