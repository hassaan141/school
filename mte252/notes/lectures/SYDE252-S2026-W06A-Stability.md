SYDE252 - W05A - Stability
Dr. Matt Borland

SYDE252 - W05A - Stability and System Insights

External Stability - Bounded-Input/Bounded-Output

For a bounded input (an input signal which never has a
magnitude = infinity) do we get a bounded output (an output
signal which never has a magnitude = infinity).

For our LTIC systems...

Therefore:

Because x(t) is bounded:

Then:

For BIBO Stability:

SYDE252 - W05A - Stability and System Insights

External Stability - Bounded-Input/Bounded-Output

For a bounded input (an input signal which never has a
magnitude = infinity) do we get a bounded output (an output
signal which never has a magnitude = infinity).

For our LTIC systems...

...if h(t) is absolutely integrable, the system is BIBO stable.

Internal Stability - Asymptotic Stability

SYDE252 - W05A - Stability and System Insights

If, in the absence of an external input, a system
remains in a particular state (or condition) indefinitely,
then that state is an equilibrium state of the system.

If we apply some IC’s, but zero input, and the system
returns to the equilibrium state, then it is internally
stable (or asymptotically stable).

If it grows indefinitely it is unstable.

If it doesn’t grow indefinitely, but also doesn’t return to
the equilibrium state, it is marginally stable.

SYDE252 - W05A - Stability and System Insights

LTIC Systems:

1. Asymptotically stable iff all the characteristic roots are in the LHP (left hand plane,

the real part < 0). The roots may all be unique or repeated.

2. Unstable iff one or both of the following are true:

a. At least one root is in the RHP (right hand plane, the real part > 0).
b. There are repeated roots on the imaginary axis (the real part = 0).

3. Marginally stable iff there are no roots in the RHP and the are some unrepeated

roots on the imaginary axis.

SYDE252 - W05A - Stability and System Insights

This is the s-plane - we’ll talk more about this once we start on
Laplace Transforms. Poles and zeros...

Laplace is coming.

SYDE252 - W05A - Stability and System Insights

LTIC Systems:

1. Asymptotically stable iff all the characteristic roots are in the LHP (left hand plane,

the real part < 0). The roots may all be unique or repeated.

2. Unstable iff one or both of the following are true:

a. At least one root is in the RHP (right hand plane, the real part > 0).
b. There are repeated roots on the imaginary axis (the real part = 0).

3. Marginally stable iff there are no roots in the RHP and the are some unrepeated

roots on the imaginary axis.

SYDE252 - W05A - Stability and System Insights

SYDE252 - W05A - Stability and System Insights

