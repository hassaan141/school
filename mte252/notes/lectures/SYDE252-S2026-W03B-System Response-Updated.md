Shinola - Audio - The Runwell Turntable - Black and Silver. (2018). Shinola. Retrieved 16 May

2018, from https://www.shinola.com/audio/all/turntable/runwell-turntable-black-silver-2.html

SYDE252 - W03B - System Response
Dr. Matt Borland

SYDE252 - W03A - System Response

System Properties

Causal  Systems
The value of the output at the present instant depends only
on the past and present values of the input, not its future
values. These can exist in real-time!

Input:

Causal Output:

SYDE252 - W03A - System Response

System Properties

Causal  Systems

Examples?

SYDE252 - W03A - System Response

System Properties

Systems that don’t do this are Noncausal!

Input:

Noncausal Output:

These can’t exist in real-time!

...we could record a signal, then “post-process” it...

Sounds, images, video, etc...

SYDE252 - W03A - System Response

System Properties

Non-Causal  Systems

An image is a signal?

System Properties

SYDE252 - W03A - System Response

Instantaneous Systems
The value of the output at the present instant depends only
on the present values of the input. The past history of the
system is irrelevant. These systems are also called
memoryless. If the system does have memory it is called
Dynamic – maybe some energy is stored???

Instantaneous:

Dynamic:

System Properties

Invertible Systems

SYDE252 - W03A - System Response

For a given system S, if we can obtain the input x(t) back from the
corresponding output y(t) by some operation, the system S is said
to be invertible.

If we can’t get our input back by some operation, then it is
noninvertible.

https://en.wikipedia.org/wiki/RIAA_equalization

System Properties

Stable and Unstable Systems

SYDE252 - W03A - System Response

Stability comes in two types: internal and external.

If every bounded input results in a bounded output, the system
is externally stable. Also called BIBO stable.

Internal stability will be discussed later.

System Response

SYDE252 - W03A - System Response

Linearity of Systems defined by Differential Equations

In the future we’ll see that Laplace and Fourier transforms will
help us easily characterize systems with outputs defined by
differential equations.

A linear system response can be defined as:

total response = zero-input response + zero-state response

