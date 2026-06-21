MTE 204 Numerical Analysis

Project #1: Circuit Analysis – System of Linear Equations

Spring 2026

Introduction
A common problem in electrical engineering involves finding the current and voltage at various
locations in resistor circuits. These problems are solved using Kirchoff’s current and voltage rules.
Application of these rules results in a system of coupled linear algebraic equations that can be
used to calculate the current flowing through each resistor in the circuit.

Kirchoff’s current rule (also known as the junction rule or node rule) states that the algebraic sum
of all current entering a node must be zero, or:

where all currents,
application of the principle of conservation of charge.

� 𝒊𝒊   = 𝟎𝟎

, entering the node are considered positive in sign. The current rule is an

𝒊𝒊

Kirchoff’s voltage rule (also known as the loop rule or mesh rule) states that the algebraic sum of
the potential differences (voltage changes) in any loop must equal zero. For a resistor circuit, this
is expressed as:

 is the voltage of all sources, and

� 𝜺𝜺 − � 𝒊𝒊 𝑹𝑹 = 𝟎𝟎

 is the current and R is the resistance for all resistors in

where
the loop.

𝜺𝜺

𝒊𝒊

Project Requirements

In this project, you will be developing an indirect (iterative) solution known as Gauss-Seidel
(including relaxation) to solve a system of linear equations, and comparing your results with the
solution generated using the MATLAB equation solver. All calculations for the project will be
performed in MATLAB.

The project shall be completed on an individual basis; the project is due Wednesday, June 10,
2026 at 11:59 pm. The penalty for late submissions is 10% per day.

Your grade on the project will be based on the following components:

1)  Upload your completed MATLAB scripts via the project dropbox on LEARN. Upload a separate
script for each of the problems, even though they may use the same solver algorithm. The
scripts will include your MATLAB program for the iterative solution, as well as your direct
solution using the MATLAB equation solver. Comments should be included in your MATLAB
code to document your approach, variable selection, flow of the program, etc. for the
graders.

2)  Upload a short, 2-page summary (PDF format) via the project dropbox on LEARN, including a
discussion of your findings in response to the directions provided in the detailed description
below. Title page, table of contents, list of figures, etc. are not required.

Detailed Description

For the two following resistance circuits, use Kirchoff’s current and voltage rules to set up a
system of linear equations that can be used to solve for the currents flowing through each
resistor in the circuit. In each case, start by writing the set of full equations, and then express the
system in matrix form.

Do not use hand calculations or other analysis techniques to reduce the number of equations
and unknowns prior to entering the equation set into MATLAB. The size of the system of
equations for each circuit entered into MATLAB must be equal to the number of resistors, or
the number of nodes and loops.

Use the Gauss-Seidel method with relaxation to solve the system of equations. You may need to
apply partial pivoting to remove zero elements from the diagonal before solving. Also, depending
on the problem, you may need to adjust your initial values to improve convergence.  Use a
 on approximate relative error for each individual variable.
convergence tolerance of

−6

10

When solving the system of equations, begin with a relaxation parameter of 1. Does the solution
converge or diverge? Next, investigate how the solution changes behavior by applying under-
relaxation and over-relaxation values to the solution. How does varying the relaxation parameter
influence the number of iterations it takes for the solution to converge? If the solution did not
converge for a relaxation parameter of 1, demonstrate convergence using under-relaxation or
over-relaxation values.

Solve the same system of equations using the MATLAB equation solver (e.g. linsolve) and
compare the results to your solution using the Gauss-Seidel method.  Also, substitute your
solution values into the original equations to verify the values from your solution method.

Circuit #1

Circuit #2

