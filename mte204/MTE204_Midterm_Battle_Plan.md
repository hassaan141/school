# MTE 204 — Numerical Methods — Midterm Battle Plan

> **This is a plug-and-chug course.** Don't read to "understand deeply" — learn each method's *recipe*, then grind problem sets. This sheet is a lookup table you keep open **while** doing problems. Formulas confirmed against the lecture slides + old midterm solutions.

## ⏱️ Your 1-hour plan
1. **(10 min)** Read this sheet once, top to bottom. Don't memorize — just know what exists.
2. **(40 min)** Do problems in this order (highest exam value first), checking solutions after each:
   - **Old midterm questions** ([notes/exams/](notes/exams/)) — *do these first, they're the format.*
   - **Problem Set #2** (roots), **#3** (linear systems), **#4** (regression/interp), **#5** (integration) + solutions in [notes/problemsets/](notes/problemsets/)
   - **Tutorials 02–05** + solutions ([notes/tutorials/](notes/tutorials/))
3. **(10 min)** Re-do any method you got wrong, from the recipe here.

## 🎯 What's actually on the midterm (from the old exam)
| # | Topic | Method tested | Recipe § |
|---|---|---|---|
| 1 | Linear systems | Gauss elimination **+ partial pivoting** | §3A |
| 2 | Roots | Graphical estimate → **Secant method** (3 iters + εa) | §2D |
| 3 | Linear systems | **Gauss-Seidel convergence** (diagonal dominance) + pivoting | §3C |
| 4 | Curve fitting | **Linear regression** (slope, intercept, r²) | §4A |
| 5 | Integration | **Trapezoid** + **Simpson's 1/3** (n=4) | §5A, §5B |

> Almost certainly also fair game: **bisection, Newton-Raphson, fixed-point** (roots), **LU / naive Gauss** (systems), **interpolation/splines** (curve fitting). Recipes for all below.

---

# Universal tool: ERROR

Used by every iterative method. Memorize these two.

$$\varepsilon_a = \left|\frac{x_{i+1}-x_i}{x_{i+1}}\right|\times 100\%  \qquad\text{(approximate \% error — what you compute)}$$
$$\varepsilon_t = \left|\frac{\text{true}-\text{approx}}{\text{true}}\right|\times 100\%  \qquad\text{(true \% error — needs known answer)}$$

> **Stop iterating when** $\varepsilon_a < \varepsilon_s$ (the stopping tolerance). $\varepsilon_a$ uses **current vs. previous** estimate.

---

# §2 — ROOTS OF EQUATIONS  *(find $x$ where $f(x)=0$)*

> First always **rearrange the equation so one side = 0**, then $f(x)$ is that side. For a graphical start, tabulate $f(x)$ over a range and find where it changes sign.

## §2A Bisection (bracketing) — needs $x_l, x_u$ with $f(x_l)\,f(x_u)<0$
**Recipe:**
1. Estimate root: $x_r = \dfrac{x_l+x_u}{2}$
2. Check sign: if $f(x_l)\,f(x_r)<0$ → root in lower half, set $x_u=x_r$. Else set $x_l=x_r$.
3. Recompute $x_r$, get $\varepsilon_a$ from new vs. old $x_r$. Repeat.

**Iterations needed for tolerance:** $n = \log_2\!\left(\dfrac{\Delta x_0}{E_{a,d}}\right)$ where $\Delta x_0 = x_u-x_l$ initial.
- ✅ Always converges. ❌ Slow. Needs a sign-change bracket.

## §2B Fixed-Point Iteration (open) — rearrange $f(x)=0$ into $x=g(x)$
**Recipe:** pick $x_0$, iterate $x_{i+1}=g(x_i)$, compute $\varepsilon_a$ each step.
- **Converges only if** $|g'(x)|<1$ near the root. ❌ Diverges otherwise — choice of $g$ matters.

## §2C Newton-Raphson (open) — needs derivative $f'(x)$
$$x_{i+1} = x_i - \frac{f(x_i)}{f'(x_i)}$$
**Recipe:** pick $x_0$, plug in, get $x_1$, compute $\varepsilon_a$, repeat.
- ✅ Fast (quadratic). ❌ Needs $f'$; can diverge if $f'\approx0$ or bad guess.

## §2D Secant (open) — Newton without the derivative *(ON THE MIDTERM)*
$$x_{i+1} = x_i - \frac{f(x_i)\,(x_{i-1}-x_i)}{f(x_{i-1})-f(x_i)} = x_i + \frac{f(x_i)\,(x_{i-1}-x_i)}{f(x_{i-1})-f(x_i)}$$
**Recipe:** need **two** initial guesses $x_{i-1}, x_i$. Plug in → $x_{i+1}$. Slide window forward ($x_{i-1}\leftarrow x_i$, $x_i\leftarrow x_{i+1}$), repeat. $\varepsilon_a = |(x_{i+1}-x_i)/x_{i+1}|\times100\%$.
- **Table columns to show:** iter, $x_{i-1}$, $x_i$, $f(x_{i-1})$, $f(x_i)$, $x_{i+1}$, $\varepsilon_a$.

---

# §3 — SYSTEMS OF LINEAR EQUATIONS  *([A]{x}={b})*

## §3A Naive Gauss Elimination + Partial Pivoting *(ON THE MIDTERM)*
**Recipe:**
1. Write **augmented matrix** $[A\,|\,b]$.
2. **Partial pivot** (before eliminating each column): swap the current row with the row below it that has the **largest absolute value** in the pivot column. *(Prevents divide-by-small-number errors; required on the exam.)*
3. **Forward elimination** — zero out below each pivot:
$$\text{row}_j = \text{row}_j - \frac{a_{j,k}}{a_{k,k}}\,\text{row}_k \quad (\text{pivot row } k)$$
4. **Back-substitution** from the bottom row up:
$$x_n=\frac{b_n}{a_{nn}}, \qquad x_i = \frac{1}{a_{ii}}\Big(b_i - \sum_{j>i} a_{ij}x_j\Big)$$

## §3B LU Decomposition — factor $[A]=[L][U]$
- $[U]$ = upper triangular from Gauss elimination; $[L]$ = lower triangular with the **multipliers** $\big(\tfrac{a_{jk}}{a_{kk}}\big)$ in the eliminated positions and 1's on the diagonal.
- Solve $[L]\{d\}=\{b\}$ (forward sub), then $[U]\{x\}=\{d\}$ (back sub).
- ✅ Best when solving for **many different $b$'s** with the same $A$.

## §3C Gauss-Seidel (iterative) + Convergence *(CONVERGENCE IS ON THE MIDTERM)*
**Update (solve each eq for its diagonal unknown, use newest values immediately):**
$$x_i^{\text{new}} = \frac{1}{a_{ii}}\Big(b_i - \sum_{j\neq i} a_{ij}\,x_j\Big)$$
**Convergence criteria (memorize):**
1. Diagonal elements must be **non-zero**.
2. Matrix must be **diagonally dominant**: $\;|a_{ii}| \ge \displaystyle\sum_{j\neq i}|a_{ij}|\;$ for every row (strict for at least one).
- If not dominant → **reorder rows (pivot)** to make it dominant, then iterate. If no reorder works, it won't converge.

---

# §4 — CURVE FITTING

## §4A Linear Least-Squares Regression *(ON THE MIDTERM)*
Fit $y = a_0 + a_1 x$ to $n$ data points.
$$a_1 = \frac{n\sum x_i y_i - \sum x_i \sum y_i}{n\sum x_i^2 - (\sum x_i)^2} \qquad a_0 = \bar y - a_1 \bar x$$
**Coefficient of determination** $r^2$ (fraction of variance explained):
$$r^2 = \frac{S_t - S_r}{S_t}, \qquad S_t=\sum (y_i-\bar y)^2, \quad S_r=\sum (y_i - a_0 - a_1 x_i)^2$$
**Recipe:** build a table of columns $x_i,\,y_i,\,x_i^2,\,x_iy_i$, sum them, plug in. Then a $(y_i-\bar y)^2$ and $(y_i-\hat y_i)^2$ column for $r^2$. $r^2\to1$ = great fit.

## §4B Polynomial Interpolation — Newton's Divided Difference
Fits an order-$(n-1)$ polynomial **through all $n$ points** (vs. regression which fits *near* them).
$$f(x)=b_0+b_1(x-x_0)+b_2(x-x_0)(x-x_1)+\cdots$$
- $b_0=f(x_0)$; $b_1=f[x_1,x_0]$; $b_2=f[x_2,x_1,x_0]$, … built from the **divided-difference table**:
$$f[x_i,x_j]=\frac{f(x_i)-f(x_j)}{x_i-x_j}$$
- **Interpolation** = estimate *within* data range; **extrapolation** = outside (risky).

## §4C Splines — piecewise polynomials between points
- **Linear spline** = connect points with straight lines.
- **Cubic spline** = cubic in each interval, matched in value + 1st + 2nd derivative at interior knots (smooth). Use when a single high-order polynomial would oscillate (Runge).

---

# §5 — NUMERICAL INTEGRATION & DIFFERENTIATION

> $h$ = segment width. For $n$ segments over $[a,b]$: $h=\dfrac{b-a}{n}$, giving $n+1$ points $x_0\ldots x_n$.

## §5A Trapezoid Rule *(ON THE MIDTERM, n=4)*
**Single:** $\displaystyle I=(b-a)\frac{f(a)+f(b)}{2}$
**Composite ($n$ segments):**
$$I = \frac{h}{2}\Big[f(x_0) + 2\sum_{i=1}^{n-1} f(x_i) + f(x_n)\Big]$$
- Error $O(h^2)$ (scales with $1/n^2$). **Overestimates** for concave-up functions.

## §5B Simpson's 1/3 Rule *(ON THE MIDTERM, n=4)*
**Single (needs 2 segments / 3 points):** $\displaystyle I=\frac{h}{3}\big[f(x_0)+4f(x_1)+f(x_2)\big]$
**Composite ($n$ = even):**
$$I=\frac{h}{3}\Big[f(x_0) + 4\!\!\sum_{i=1,3,5\ldots}^{n-1}\!\! f(x_i) + 2\!\!\sum_{i=2,4,6\ldots}^{n-2}\!\! f(x_i) + f(x_n)\Big]$$
- **Odd-indexed points → ×4, even-indexed interior → ×2.** Error $O(h^4)$ — much better than trapezoid. **$n$ must be even.**

## §5C Simpson's 3/8 Rule (needs 3 segments / 4 points)
$$I = \frac{3h}{8}\big[f(x_0)+3f(x_1)+3f(x_2)+f(x_3)\big]$$
- Use for an **odd** number of segments (often: 3/8 on the last 3 segments + 1/3 on the rest).

## §5D Numerical Differentiation (divided differences, step $h$)
| Type | Formula (1st derivative) | Error |
|---|---|---|
| Forward | $f'(x_i)\approx\dfrac{f(x_{i+1})-f(x_i)}{h}$ | $O(h)$ |
| Backward | $f'(x_i)\approx\dfrac{f(x_i)-f(x_{i-1})}{h}$ | $O(h)$ |
| **Centered** | $f'(x_i)\approx\dfrac{f(x_{i+1})-f(x_{i-1})}{2h}$ | $O(h^2)$ — most accurate |
| 2nd deriv (centered) | $f''(x_i)\approx\dfrac{f(x_{i+1})-2f(x_i)+f(x_{i-1})}{h^2}$ | $O(h^2)$ |

---

# 🧠 Exam-day tactics
- **Always carry units & enough decimals** (4+); these problems compound rounding.
- **Show the iteration table** for any iterative method (bisection/secant/Newton/Gauss-Seidel) — that's where the marks are.
- **Partial pivoting**: pick the largest-magnitude pivot *before* eliminating each column — easy marks if you remember, easy loss if you don't.
- **Simpson's needs even $n$**; trapezoid works for any $n$. Don't mix up the ×4/×2 pattern.
- **Sanity-check roots** by plugging back into $f(x)$ — should be ≈0.
- For regression, **the table is the method** — set up $\sum x, \sum y, \sum x^2, \sum xy$ cleanly.

---

*Sources: MTE 204 lecture slides (1.0–5.5), old midterm questions + solutions, Problem Sets #1–5. Course follows Chapra-style numerical methods. Raw converted material in [notes/](notes/).*
