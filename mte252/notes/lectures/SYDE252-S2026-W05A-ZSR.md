That’s big!

ZSR

SYDE252 - W05A - Zero State Response
Dr. Matt Borland

SYDE252 - W05A - Zero State Response

For linear systems, the response of the
system is the sum of ZIR and ZSR:

Total Response =
Zero-Input Response + Zero-State Response

The zero-input response is the system output when x(t) = 0.

The zero-state response is the system output to the external
input x(t) when the system is in zero state, meaning the
absence of all internal energy storages: that is, all initial
conditions are zero.

SYDE252 - W05A - Zero State Response

The ZSR is the system response to an
external input when the IC’s are zero:

Imagine some signal, x(t), that we want
to use as an input to our system!

SYDE252 - W05A - Zero State Response

Imagine some signal, x(t), that we want
to use as an input to our system!

LTIC
SYSTEM

y(t)

...but we know it’s an LTIC system, so we can just break x(t) into a
bunch of simpler chunks (x1(t), x2(t), etc.), push those through the
system to get (y1(t), y2(t), etc.), and then add all of those up to get our
overall y(t).

Let’s turn our x(t) into a bunch of scaled and time shifted p(t)’s!

SYDE252 - W05A - Zero State Response

We can also think about
making those p(t)’s really
skinny to become similar to

From our derivation of h(t), the unit impulse response, we know
that for a LTIC system:

SYDE252 - W05A - Zero State Response

LTIC
SYSTEM

LTIC
SYSTEM

So now let’s take the smallest possible slice of x(t) at time

SYDE252 - W05A - Zero State Response

LTIC
SYSTEM

LTIC
SYSTEM

SYDE252 - W05A - Zero State Response

LTIC
SYSTEM

So let’s do this for all possible           `s and then add all of those
them up to get y(t):

Add this stuff to get y(t)!

More formally:

SYDE252 - W05A - Zero State Response

Add this stuff to get y(t)!

Which is:

More formally:

SYDE252 - W05A - Zero State Response

This is how we defined convolution earlier!

SYDE252 - W05A - Zero State Response

Interconnected systems! Remember our convolution rules ; )

SYDE252 - W05A - Zero State Response

A special function for LTIC systems - let’s get complex!

SYDE252 - W05A - Zero State Response

LTIC
SYSTEM

y(t)

Where ‘s’ is a complex variable...this means we have an everlasting sinusoid!

If we define:

then:

Laplace is coming, Sansa Stark.

OUTPUT

INPUT

TRANSFER
FUNCTION

Total System Response!

SYDE252 - W05A - Zero State Response

ZIR

ZSR

The response of the
system with no input
applied, but (potentially)
with energy stored in it
at time zero.

The response of the
system to an applied
input signal when the
system is initially at rest
(i.e. IC’s = 0).

NOTE: ZIR is a slightly different form when you have repeated roots.

