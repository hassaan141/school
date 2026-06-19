# W03A — Convolution → *Lathi §2.4 (pp. 169–180)*

> **Cross-checked against the textbook** (Lathi & Green, *Linear Systems & Signals*, 3rd ed., §2.4). The slides point here; everything below is confirmed against the book, with the two things the slides leave out flagged.

---

## The concept (plain language)

An LTI system is **completely described by its impulse response $h(t)$** — the output when you poke it with a unit impulse $\delta(t)$. Why does that one function tell you everything? Because *any* input can be built as a sum of scaled, shifted impulses (the sifting property from W02A). By **linearity** each impulse produces a scaled $h$, and by **time-invariance** a shifted impulse produces a shifted $h$. Add them all up → an integral. That integral is **convolution**, and it gives the **zero-state response** (output assuming the system starts at rest).

> Lathi states it exactly this way (Eq. 2.23): *"We have obtained the system response $y(t)$ to an arbitrary input $x(t)$ in terms of the unit impulse response $h(t)$. Knowing $h(t)$, we can determine the response to any input."*

So: **convolution is how an input and a system's impulse response combine to produce the output.**

---

## The formulas

**Convolution integral** (Lathi Eq. 2.24) — the definition:
$$y(t) = x(t) * h(t) = \int_{-\infty}^{\infty} x(\tau)\,h(t-\tau)\,d\tau$$

| Symbol | Meaning |
|---|---|
| $\tau$ | the **integration variable** — you integrate over $\tau$; $t$ is held fixed (just a parameter, "like a constant") |
| $x(\tau)$ | the input, redrawn with $\tau$ on the axis (identical shape to $x(t)$) |
| $h(t-\tau)$ | the impulse response, **flipped** ($\tau\to-\tau$) and **shifted** by $t$ |
| $*$ | convolution operator (**not** multiplication) |

> ⚠️ The integration is over **$\tau$, not $t$**. When you sketch, draw $x(\tau)$ and $h(t-\tau)$ as functions of $\tau$. This is the #1 source of confusion.

**Causal simplification** (Lathi Eq. 2.30) — *the slides skip this, but it's what you actually use*: if **both** $x(t)$ and $h(t)$ are causal (zero for $t<0$):
$$y(t) = \int_{0}^{t} x(\tau)\,h(t-\tau)\,d\tau \quad (t\geq 0), \qquad y(t)=0 \quad (t<0)$$
The limits collapse from $(-\infty,\infty)$ to $[0,t]$ because that's the only interval where $x(\tau)$ and $h(t-\tau)$ overlap. **This is why the answers always carry a $u(t)$.**

**DT convolution sum** (same idea, discrete):
$$y[n] = x[n]*h[n] = \sum_{m=-\infty}^{\infty} x[m]\,h[n-m]$$

### Properties (Lathi Eqs. 2.25–2.28) — all confirmed in the book

| Property | Statement | Why you care |
|---|---|---|
| **Commutative** | $x_1 * x_2 = x_2 * x_1$ | flip/slide whichever signal is *easier* |
| **Distributive** | $x_1*(x_2+x_3) = x_1*x_2 + x_1*x_3$ | **parallel** systems → add their outputs |
| **Associative** | $x_1*(x_2*x_3) = (x_1*x_2)*x_3$ | **cascaded** systems → convolve their $h$'s into one |
| **Shift** | if $x_1*x_2=c(t)$ then $x_1(t-T_1)*x_2(t-T_2)=c(t-T_1-T_2)$ | shifts just add up |
| **Convolution w/ impulse** | $x(t)*\delta(t)=x(t)$; $x(t)*\delta(t-T)=x(t-T)$ | $\delta$ is the identity element |
| **Width** *(slides skip this)* | width of $x_1*x_2$ = width$(x_1)$ + width$(x_2)$ | instant sanity-check on your answer's duration |

---

## Worked example 1 — using the convolution table (analytical)

This is the canonical Lathi example and the one on the slide. Find $y(t)=x(t)*h(t)$ for
$$x(t) = e^{-t}u(t), \qquad h(t) = e^{-2t}u(t)$$

**Don't grind the integral** — use **Table 2.1, pair 4** (p. 176, on your equation sheet):
$$e^{\lambda_1 t}u(t) * e^{\lambda_2 t}u(t) = \frac{e^{\lambda_1 t}-e^{\lambda_2 t}}{\lambda_1-\lambda_2}\,u(t), \quad \lambda_1\neq\lambda_2$$

Here $\lambda_1=-1$, $\lambda_2=-2$:
$$y(t) = \frac{e^{-t}-e^{-2t}}{-1-(-2)}\,u(t) = \frac{e^{-t}-e^{-2t}}{1}\,u(t) = \big(e^{-t}-e^{-2t}\big)u(t)$$

> The $u(t)$ comes from the causal limits (Eq. 2.30). Note the **width check**: both inputs have infinite width → output has infinite width. ✓ (`W03A_CT_Convolution.m` verifies this numerically.)

---

## Worked example 2 — graphical convolution (the "flip-and-slide")

Use this when signals are defined piecewise/graphically and there's no clean table entry. **Procedure (Lathi's 4 steps = the slide's bullets):**

1. **Keep $x(\tau)$ fixed.**
2. **Flip** $g(\tau)$ about the vertical axis → $g(-\tau)$.
3. **Shift** the flipped frame by $t$ → $g(t-\tau)$. ($t>0$ → slide right; $t<0$ → slide left.)
4. **Area** under the product $x(\tau)\,g(t-\tau)$ = the value $c(t)$ at that shift.
5. **Sweep** $t$ from $-\infty\to\infty$. Wherever the two don't overlap, $c(t)=0$.

> Because convolution is commutative, **flip the simpler signal**. Identify the **break-point ranges of $t$** (where the overlap region changes form) and write a separate integral for each range — that's the whole game in problems 2.4-14 to 2.4-16.

---

## Worked example 3 — DT convolution (slide-and-sum table)

$$x[n]=\{0,1,2,2,-1,1,0\}, \quad y[n]=\{0,2,1,-1,0,0,0\}, \quad n=\{0,1,2,3,4,5,6\}$$

Method: flip $y$ to get $y[-m]$, then slide it one step at a time across $x[m]$, and at each shift multiply aligned samples and sum. Result:
$$z[n] = x[n]*y[n] = \{0,0,2,5,5,-2,-1,2,-1\}, \quad n=\{0,1,\dots,8\}$$

> **Don't lose track of the $n$'s** — the output starts at $n=$ (start of $x$) + (start of $y$) and its length is len$(x)+$len$(y)-1$. Here $7+7-1=13$ samples span, nonzero over $n=2\ldots8$. (Matches the **width property**.) Verify with `conv()` in MATLAB/Octave (`W03A_DT_Convolution.m`).

---

## Key takeaways (you must be able to…)

1. **Write and interpret** $y(t)=\int_{-\infty}^{\infty}x(\tau)h(t-\tau)\,d\tau$ — and know integration is over $\tau$.
2. **Use the causal limits** $\int_0^t$ and tack on $u(t)$ when inputs are causal.
3. **Recognize when to use Table 2.1** vs. grind the integral vs. go graphical.
4. **Do graphical convolution**: flip the easier signal, find the $t$-ranges, integrate each piece.
5. **Do DT convolution** by slide-and-sum, tracking the output index.
6. **Apply the properties**: commutative (pick easier flip), distributive (parallel), associative (cascade), and the **width** check.

---

## → What this unlocks (Assignment 2 & Tutorial 3)

Assignment 2 readings: **Ch. 2 §2.1–2.6, 2.8, 2.9.** This lecture directly unlocks the convolution problems:

| Problem set | Skill from this lecture |
|---|---|
| **2.4-1 → 2.4-8** | Convolution integral, analytical + Table 2.1 |
| **2.4-14 → 2.4-16** | Graphical convolution (flip-and-slide, $t$-ranges) |
| **2.4-27, 2.4-28, 2.4-31** | Properties / width / cascade-parallel |
| **Tutorial 3 (Week 3)** | mixed convolution practice |

> The 2.2-x / 2.3-x problems lean on **system response & impulse response** — that's **W03B** (next). 2.5/2.6 are stability-adjacent (W06).

---

*Source check: Lathi §2.4-1 (convolution integral + properties, pp. 170–172), §2.4-2 (graphical procedure, pp. 178–180), Table 2.1 (p. 176); SYDE252 W03A slides; equation sheet. The causal limits (Eq. 2.30) and width property are from the textbook — not on the slides.*
