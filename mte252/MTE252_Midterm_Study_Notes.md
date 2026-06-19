# MTE 252 (SYDE 252) — Signals & Systems — Midterm Study Notes

> Covers **W01–W06** (everything up to the midterm). Curated by hand from the lecture
> decks and the official midterm equation sheet — equations transcribed in LaTeX since
> the raw slide-to-text conversion drops them. See [notes/](notes/) for the per-deck dumps.

**Contents**

- **Part I — What is a Signal?** (definition, CT vs DT, even/odd, periodicity)
- **Part II — Measuring Signals** (energy, power, RMS, energy vs power signals)
- **Part III — Signal Manipulation** (shift, scale, reversal, combined transforms)
- **Part IV — Complex Exponentials** (Euler, CT vs DT periodicity, harmonics)
- **Part V — The Unit Impulse & Unit Step** ($\delta$, $u$, sampling/sifting property)
- **Part VI — System Properties** (linearity, time-invariance, causality, memory, stability, invertibility)
- **Part VII — LTI Systems & Convolution** (impulse response, convolution integral, properties, table)
- **Part VIII — System Response** (ZIR + ZSR, the differential-operator form, finding $h(t)$)
- **Part IX — Stability** (the $\lambda$-plane, marginal cases)
- **Appendix — Equation Sheet Quick Reference**

---

# Part I — What is a Signal?

> **Big idea:** A signal is **a variable that changes its value with respect to an independent variable** (usually time). The whole course is about *characterizing* signals and pushing them through *systems*.

**General sinusoid:**
$$x(t) = \cos(2\pi f t + \theta) = \cos(\omega t + \theta), \qquad \omega = 2\pi f$$

**Continuous-time (CT) vs Discrete-time (DT):**

| | Notation | Independent variable | Example |
|---|---|---|---|
| CT signal | $x(t)$ | $t \in \mathbb{R}$ | $z(t) = e^{-\lvert t\rvert}$ |
| DT signal | $x[n]$ | $n \in \mathbb{Z}$ (integers only) | $z[n] = \sin\!\left(\tfrac{3}{40}\pi n\right)$ |

> A DT signal is **not defined** for $n \notin \mathbb{Z}$. Square brackets $[\,]$ ⇒ discrete; round brackets $(\,)$ ⇒ continuous.

**Even / Odd symmetry:**
$$\text{Even: } f(x) = f(-x) \qquad\qquad \text{Odd: } f(x) = -f(-x)$$

**Periodicity:** a signal is periodic if
$$x(t+T) = x(t), \quad T \neq 0$$
The smallest such $T$ is the **fundamental period**; $\omega_0 = \tfrac{2\pi}{T}$ is the fundamental frequency.

---

# Part II — Measuring (Characterizing) Signals

> **Big idea:** "Size" of a signal over time = **energy**; energy per unit time = **power**. Motivated by power dissipated in a resistor: $p(t) = v^2(t)/R$.

**Energy** of an arbitrary CT signal over $[t_1,t_2]$, and over all time:
$$E_{t_1,t_2} = \int_{t_1}^{t_2} \lvert x(t)\rvert^2\,dt \qquad\Longrightarrow\qquad E_x = \int_{-\infty}^{\infty} \lvert x(t)\rvert^2\,dt$$

**Power** (average) over an interval, and over all time:
$$P_{t_1,t_2} = \frac{1}{t_2-t_1}E_{t_1,t_2} \qquad\Longrightarrow\qquad P_x = \lim_{T\to\infty}\frac{1}{T}\int_{-T/2}^{T/2}\lvert x(t)\rvert^2\,dt$$

**RMS value:**
$$x_{rms} = \sqrt{P_x}$$

**Energy signal vs power signal:**

| Type | Condition | Typical example |
|---|---|---|
| **Energy signal** | $0 < E_x < \infty$ (so $P_x = 0$) | finite-duration / decaying pulses, e.g. $e^{-\lvert t\rvert}$ |
| **Power signal** | $0 < P_x < \infty$ (so $E_x = \infty$) | periodic signals, e.g. $\cos(\omega t)$ |

> ⚠️ If the amplitude of $x(t)$ does **not** go to 0 as $\lvert t\rvert\to\infty$, the energy integral does not converge and the energy is **infinite** → use power instead.

---

# Part III — Manipulating Signals

> **Big idea:** All transforms act on the **independent variable**. The single most-tested skill: combining shift + scale + reversal **in the right order**.

| Operation | CT form | DT form | Effect |
|---|---|---|---|
| **Time shift** | $x(t - t_0)$ | $x[n - n_0]$ | $t_0 > 0$ → delay (shift right); $t_0 < 0$ → lead (shift left) |
| **Time scaling** | $x(at)$ | — | $a>1$ → **compression** by $a$; $0<a<1$ → **expansion** by $1/a$ |
| **Time reversal** | $x(-t)$ | $x[-n]$ | flip about the vertical axis |

> The direction of a shift is **NOT** determined by the sign alone once scaling is involved — be careful.

**Combined transform — the procedure.** To draw something like $x\!\left(-\tfrac{3}{2}t + 1\right)$:

> **Shift first, then scale and reverse.** Equivalently: start from the transformation **furthest** from the independent variable and work inward, step by step.

1. **Shift:** $x(t) \to x(t+1)$ (here, shift 1 to the *left*).
2. **Reverse:** $x(t+1) \to x(-t+1)$.
3. **Scale (compress by $\tfrac{3}{2}$):** $x(-t+1) \to x\!\left(-\tfrac{3}{2}t+1\right)$.

---

# Part IV — Complex Exponential Signals

**Euler's formula** (the backbone of everything):
$$e^{i\varphi} = \cos\varphi + i\sin\varphi$$
$$\cos x = \operatorname{Re}(e^{ix}) = \frac{e^{ix}+e^{-ix}}{2} \qquad \sin x = \operatorname{Im}(e^{ix}) = \frac{e^{ix}-e^{-ix}}{2i}$$

**Even/odd decomposition of $e^{j\omega_0 t}$:**
$$\mathscr{E}\{e^{j\omega_0 t}\} = \cos(\omega_0 t), \qquad \mathscr{O}\{e^{j\omega_0 t}\} = j\sin(\omega_0 t)$$
$$e^{j\omega_0 t} = \cos(\omega_0 t) + j\sin(\omega_0 t)$$

## CT complex exponentials $e^{j\omega_0 t}$
- **Always periodic**, regardless of $\omega_0$.
- Fundamental period $T_0 = \dfrac{2\pi}{\omega_0}$, fundamental frequency $\omega_0$ (rad/s).
- **Larger $\omega_0$ → higher frequency** (monotonic).
- **Harmonically related** set: $e^{jk\omega_0 t}$ for integer $k$ — all frequencies are multiples of one $\omega_0$.

## DT complex exponentials $e^{j\omega_0 n}$
Periodic **only** when there's an integer $N$ with $x[n+N]=x[n]$, i.e. $e^{j\omega_0 N}=1$, which requires
$$\omega_0 N = 2\pi m \quad (N,m \in \mathbb{Z}) \qquad\Longleftrightarrow\qquad \frac{2\pi}{\omega_0} = \frac{N}{m} \in \mathbb{Q}\ (\text{rational})$$
When periodic, fundamental period is $N$ and fundamental frequency is $\dfrac{\omega_0}{m}$.

**Worked examples:**

| Signal | $\omega_0$ | $\tfrac{2\pi}{\omega_0}$ | Periodic? | Period |
|---|---|---|---|---|
| $e^{j\frac{\pi}{8}n}$ | $\pi/8$ | $16$ | ✅ ($N=16, m=1$) | $N=16$ |
| $e^{j\frac{1}{6}n}$ | $1/6$ | $12\pi$ (irrational) | ❌ NOT periodic | — |
| $e^{j\frac{\pi}{4}n}$ | $\pi/4$ | $8$ | ✅ ($N=8, m=1$) | $N=8$ |
| $e^{j\frac{7\pi}{4}n}$ | $7\pi/4$ | $8/7$ | ✅ ($N=8, m=7$) | $N=8$ |

> ⚠️ Key DT-only quirks (different from CT!):
> - Frequency does **NOT** increase monotonically with $\omega_0$.
> - $\omega_0$ = **odd multiple of $\pi$** → **highest** frequency (alternates sign each sample).
> - $\omega_0$ = **even multiple of $\pi$** → **lowest** frequency (constant).
> - Two different $\omega_0$ values can give the **identical** signal (because $\omega_0$ and $\omega_0+2\pi$ are the same).

---

# Part V — The Unit Impulse and Unit Step

**DT definitions:**
$$\delta[n] = \begin{cases}1, & n=0\\ 0, & n\neq 0\end{cases} \qquad\qquad u[n] = \begin{cases}1, & n\geq 0\\ 0, & n<0\end{cases}$$

**Relationship (running sum):**
$$u[n] = \delta[n] + \delta[n-1] + \delta[n-2] + \cdots = \sum_{k=0}^{+\infty}\delta[n-k]$$

**Sampling (sifting) property** — $\delta[n]$ picks out a single value:
$$x[n]\,\delta[n] = x[0]\,\delta[n] \qquad\Longrightarrow\qquad x[n] = \sum_{k=-\infty}^{\infty} x[k]\,\delta[n-k]$$
$\delta[n]$ is also called the **unit sample**.

**CT counterparts:** $u(t)$ is the unit step, $\delta(t)$ the unit impulse, with the CT sifting property
$$\int_{-\infty}^{\infty} x(t)\,\delta(t - t_0)\,dt = x(t_0)$$

---

# Part VI — System Properties

A system maps an input to an output: $x(t) \to y(t)$ (or $x[n]\to y[n]$). Types: CT, DT, C/D, D/C. Systems combine in **cascade** (series) or **parallel**.

For two input/output pairs $x_1(t)\to y_1(t)$ and $x_2(t)\to y_2(t)$:

## Linearity (Superposition)
The system is **linear** iff
$$A x_1(t) + B x_2(t) \;\longrightarrow\; A y_1(t) + B y_2(t)$$
This bundles two sub-properties:
1. **Additivity:** response to $x_1+x_2$ is $y_1+y_2$.
2. **Scaling / homogeneity:** response to $a\,x_1$ is $a\,y_1$ ($a$ any complex constant).

General superposition: $x_s = \sum_i a_i x_i \;\to\; y_s = \sum_i a_i y_i$.

| Example system | Linear? | Why |
|---|---|---|
| $y(t) = t\,x(t)$ | ✅ Yes | $t(ax_1+bx_2) = a\,(tx_1) + b\,(tx_2) = ay_1 + by_2$ |
| $y(t) = x^2(t)$ | ❌ No | $(ax_1+bx_2)^2 = a^2x_1^2 + b^2x_2^2 + 2abx_1x_2 \neq ay_1+by_2$ |

## Time-Invariance
The system is **time-invariant** iff a shift in the input produces only the **same shift** in the output:
$$x_1(t+T) \;\longrightarrow\; y_1(t+T) \quad \forall t, \forall T$$
Test recipe: compute (a) output when input is $x_1(t+T)$, and (b) the shifted original output $y_1(t+T)$. Equal ⇒ time-invariant.

| Example system | TI? | Why |
|---|---|---|
| $y(t) = \sin(x(t))$ | ✅ Yes | feeding $x_1(t+T)$ gives $\sin(x_1(t+T)) = y_1(t+T)$ |
| $y(t) = x(at)$ | ❌ No | feeding $x_1(t+T)$ gives $x_1(at+T)$, but $y_1(t+T) = x_1(a(t+T))$ — not equal |

> Intuition: *when* you apply the input doesn't change the response shape, only when it occurs.

## Other properties (definitions to know)
| Property | Definition |
|---|---|
| **Causality** | Output at time $t$ depends only on input at times $\leq t$ (no peeking into the future). |
| **Memory** | Memoryless ⇒ output depends only on the present input (e.g. $y(t)=2x(t)$). With memory ⇒ depends on past/future (e.g. an integrator). |
| **Invertibility** | Distinct inputs produce distinct outputs, so an inverse system can recover $x$. |
| **Stability (BIBO)** | A bounded input always yields a bounded output. |

**LTI = Linear + Time-Invariant** — the class of systems this course centers on.

---

# Part VII — LTI Systems & Convolution

> **Big idea:** An LTI system is **completely characterized by its impulse response** $h(t)$ (the output when the input is $\delta(t)$). Any input is a superposition of shifted impulses (sifting property), so the output is a superposition of shifted impulse responses → **convolution**.

**Convolution integral (CT):**
$$y(t) = (x * h)(t) = \int_{-\infty}^{\infty} x(\tau)\,h(t-\tau)\,d\tau$$

**Mechanics:** flip one signal ($h(\tau)\to h(-\tau)$), shift it by $t$, multiply by $x(\tau)$, and integrate the area of the product. *"Flip, shift, multiply, sum."* The flip is the part students forget.

**Properties:**

| Property | Statement |
|---|---|
| Commutative | $x * h = h * x$ |
| Distributive | $x*(h_1 + h_2) = x*h_1 + x*h_2$ (parallel systems add) |
| Associative | $(x*h_1)*h_2 = x*(h_1*h_2)$ (cascade systems convolve) |
| Sifting / identity | $x(t) * \delta(t-T) = x(t-T)$ |

**DT convolution sum** (analogue): $y[n] = \sum_{k=-\infty}^{\infty} x[k]\,h[n-k]$.

## Select convolution integrals (Table 2.1 — from the equation sheet)

| # | $x_1(t)$ | $x_2(t)$ | $x_1 * x_2$ |
|---|---|---|---|
| 1 | $x(t)$ | $\delta(t-T)$ | $x(t-T)$ |
| 2 | $e^{\lambda t}u(t)$ | $u(t)$ | $\dfrac{1-e^{\lambda t}}{-\lambda}\,u(t)$ |
| 3 | $u(t)$ | $u(t)$ | $t\,u(t)$ |
| 4 | $e^{\lambda_1 t}u(t)$ | $e^{\lambda_2 t}u(t)$ | $\dfrac{e^{\lambda_1 t}-e^{\lambda_2 t}}{\lambda_1-\lambda_2}\,u(t)\quad(\lambda_1\neq\lambda_2)$ |
| 5 | $e^{\lambda t}u(t)$ | $e^{\lambda t}u(t)$ | $t\,e^{\lambda t}u(t)$ |
| 6 | $t\,e^{\lambda t}u(t)$ | $e^{\lambda t}u(t)$ | $\tfrac{1}{2}t^2 e^{\lambda t}u(t)$ |

> The full table (entries 1–14, including $t^N$, $t^M e^{\lambda t}$, and $\cos$ forms) is on the equation sheet — see [notes/exams/SYDE252-S2019-Midterm Equation Sheet.md](notes/exams/) and the original PDF. These are fair game; you are given the table.

---

# Part VIII — System Response

> **Big idea:** The total output of an LTI system splits cleanly into two pieces:
> what the *stored energy* does on its own, plus what the *input* does from rest.

$$\boxed{\;\text{total response} = \underbrace{\sum_{k=1}^{N} c_k e^{\lambda_k t}}_{\text{ZIR (Zero-Input Response)}} \;+\; \underbrace{x(t) * h(t)}_{\text{ZSR (Zero-State Response)}}\;}$$

| Term | What it is |
|---|---|
| **ZIR** (Zero-Input Response) | Response with **no input applied**, but with energy stored in the system at $t=0$ (initial conditions). |
| **ZSR** (Zero-State Response) | Response to the applied input when the system **starts at rest** (all IC's $=0$). |

> Note: the ZIR takes a slightly different form when there are **repeated roots** $\lambda_k$ (you get $t e^{\lambda t}$, $t^2 e^{\lambda t}$, … terms).

## Differential-operator form
A linear constant-coefficient system is written with the operator $D^N y(t) = \dfrac{d^N y(t)}{dt^N}$:
$$Q(D)\{y(t)\} = P(D)\{x(t)\}$$
where $Q(D)$ and $P(D)$ are polynomials in $D$. The roots of the **characteristic polynomial** $Q(\lambda)=0$ are the $\lambda_k$ (the system's natural modes / "characteristic roots").

## Finding the impulse response $h(t)$
When $M < N$ (order of $P$ less than order of $Q$):
$$h(t) = \big[P(D)\,y_n(t)\big]\,u(t)$$
where $y_n(t)$ is the solution to the characteristic equation under the initial conditions
$$y_n(0) = \dot y_n(0) = \cdots = y_n^{(N-2)}(0) = 0, \qquad y_n^{(N-1)}(0) = 1$$

**Workflow for a full problem:**
1. Write $Q(D)y = P(D)x$; find characteristic roots $\lambda_k$ from $Q(\lambda)=0$.
2. ZIR: $\sum c_k e^{\lambda_k t}$, solve $c_k$ from the given initial conditions.
3. Find $h(t)$ via the boxed formula above.
4. ZSR: $x(t)*h(t)$ (use the convolution table).
5. Total response = ZIR + ZSR.

---

# Part IX — Stability

A system's stability is read off the **characteristic roots $\lambda_k$** in the complex plane:

```
            Im
             |
  Re λ < 0   |   Re λ > 0
  (STABLE)   |  (UNSTABLE)
 ------------+------------ Re
  (STABLE)   |  (UNSTABLE)
             |
```

| Location of roots | Stability |
|---|---|
| **All** $\operatorname{Re}\lambda < 0$ (left half-plane) | **Stable** |
| **Any** $\operatorname{Re}\lambda > 0$ (right half-plane) | **Unstable** |
| **Simple** (non-repeated) roots on the imaginary axis $\operatorname{Re}\lambda = 0$ | **Marginally stable** |
| **Repeated** (multiple) roots on the imaginary axis | **Unstable** |

> Mnemonic: poles in the left half-plane decay ($e^{\lambda t}\to 0$); poles in the right half-plane blow up; poles exactly on the axis sit at the boundary — fine once, fatal if repeated.

---

# Appendix — Equation Sheet Quick Reference

| Concept | Formula |
|---|---|
| Even / Odd | $f(x)=f(-x)$ / $f(x)=-f(-x)$ |
| Periodicity | $x(t+T)=x(t),\ T\neq 0$ |
| Euler | $e^{ix}=\cos x + i\sin x$; $\cos x=\tfrac{e^{ix}+e^{-ix}}{2}$; $\sin x=\tfrac{e^{ix}-e^{-ix}}{2i}$ |
| Energy | $E_x=\int_{-\infty}^{\infty}\lvert x(t)\rvert^2 dt$ |
| Power | $P_x=\lim_{T\to\infty}\tfrac{1}{T}\int_{-T/2}^{T/2}\lvert x(t)\rvert^2 dt$ |
| RMS | $x_{rms}=\sqrt{P_x}$ |
| Linearity | $Ax_1+Bx_2\to Ay_1+By_2$ |
| Time-invariance | $x_1(t+t_0)\to y_1(t+t_0)$ |
| Time constant | $T_h\,h(t_0)=\int_{-\infty}^{\infty}h(t)\,dt$ |
| Convolution | $(f*g)(t)=\int_{-\infty}^{\infty}f(\tau)g(t-\tau)\,d\tau$ |
| Total response | $\sum_{k=1}^{N}c_k e^{\lambda_k t} + x(t)*h(t)$ (ZIR + ZSR) |
| Operator system | $Q(D)\{y(t)\}=P(D)\{x(t)\}$, $D^N y=\tfrac{d^N y}{dt^N}$ |
| Impulse response | $h(t)=[P(D)y_n(t)]u(t)$ when $M<N$ |

---

*Sources: SYDE252 S2026 lecture decks W01B (Signal Basics), W01C (Signal Manipulation), W02A (Complex Signals & Unit Impulse), W02B (LTI Systems), W03A–B (Convolution & System Response), W04–W05 (System/Impulse Response, ZSR), W06A (Stability), and the SYDE252 Midterm Equation Sheet. Raw per-deck markdown lives in [notes/](notes/).*
