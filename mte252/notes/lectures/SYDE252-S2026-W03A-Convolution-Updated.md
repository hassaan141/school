Convolution. (2017, May 13). In Wikipedia, The Free Encyclopedia. Retrieved 02:10, May 16,
2017, from https://en.wikipedia.org/w/index.php?title=Convolution&oldid=780178916

SYDE252 - W03A - Convolution
Dr. Matt Borland

SYDE252 - W03A - Convolution

Where we’re going...

How to get there...

Get the textbook.

SYDE252 - W03A - Convolution

Read the chapters in advance of the class. There’s a lot of content, and you
need to read the book to learn it!

Come to class and pay attention, try the sample problems, engage.

Attempt the assignments before the tutorials, go to the tutorials, then check
the solutions after they’re posted.

Get help. From me. From the TAs.

Get the textbook.

Convolution

SYDE252 - W03A - Convolution

https://en.wikipedia.org/wiki/Convolution

Convolution. (2017, May 13). In Wikipedia, The Free Encyclopedia. Retrieved 02:10, May
16, 2017, from https://en.wikipedia.org/w/index.php?title=Convolution&oldid=780178916

Convolution

SYDE252 - W03A - Convolution

The flip is important!

Take:

...and shuffle it along

...and summate the area under
the product curve.

https://en.wikipedia.org/wiki/Convolution

Convolution. (2017, May 13). In Wikipedia, The Free Encyclopedia. Retrieved 02:10, May
16, 2017, from https://en.wikipedia.org/w/index.php?title=Convolution&oldid=780178916

CT Convolution Properties

Commutative Property

SYDE252 - W03A - Convolution

Distributive Property

Associative Property

Shift Property

CT Convolution

x(t)

h(t)

SYDE252 - W03A - Convolution

Just solve that integral (fun, right ; ))

Luckily we have tables for common
functions and convolution pairs.

From table 2.1 (pg. 176 in 3rd Edition)

For:

In our case:

Check it with W03A_CT_Convolution.m!

CT Convolution Graphical Approach

SYDE252 - W03A - Convolution

● Keep the function f(t) fixed
● Flip g(t) about t=0 to get g(-t)
● Shift g(-t) along f(t) by an amount t0
● The area under the product of f(t)
and g(t-t0) is the value of the
convolution at time t0
● Remember convolution is

commutative, so pick the easier
signal to flip and slide.

CT Convolution Graphical Approach

SYDE252 - W03A - Convolution

● Keep the function f(t) fixed
● Flip g(t) about t=0 to get g(-t)
● Shift g(-t) along f(t) by an amount t0
● The area under the product of f(t)
and g(t-t0) is the value of the
convolution at time t0
● Remember convolution is

commutative, so pick the easier
signal to flip and slide.

DT Convolution

SYDE252 - W03A - Convolution

find g[-n] and slide it along f[n]

Same process as CT:
-
- Multiply the aligned values and sum
- Start sliding it from a point where all calculated

points are zero valued

- Keep going until you reach a point where all

calculated points are zero valued

- The same convolution properties apply as in CT
- Keep track of the ‘n’ you are calculating!

Convolution
Simulation

SYDE252 - W03A - Convolution

https://alexanderustyuzhanin.github.io/Web_Convolution/

DT Convolution

SYDE252 - W03A - Convolution

See  W03A_DT_Convolution.m and try out some of your
own x[n] and y[n]’s

https://octave.sourceforge.io/octave/function/conv.html

https://www.mathworks.com/help/matlab/ref/conv.html

Don’t lose track of the n’s - make sure we calculate the output at the right time!

