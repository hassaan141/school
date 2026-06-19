# MTE 203 — Course Cheat Sheet

**Contents**

- **Part I — 3D Distances & Planes** (point/line/plane distances, constructing planes)
- **Part II — Cylinders & Quadric Surfaces** (recognizing surfaces, intersection curves, projection)
- **Part III — Paths & Curves** (vector functions, eliminating $t$, helices, orientation)
- **Part IV — Parametrizing Curves & Vector Derivatives** (building $\vec r(t)$ from surfaces, direction fixing, $\vec r'(t)$)
- **Part V — Vector Calculus: Tangents, Velocity & Projectiles** (differentiating/integrating $\vec r(t)$, tangent lines, motion, projectile motion)
- **Part VI — Arc Length, Unit Tangent & Curvature** (measuring curve length, $\hat T$, $\kappa$, reparametrizing by arc length)
- **Part VII — The Frenet Frame** ($\hat T, \hat N, \hat B$, curvature, osculating circle, normal & osculating planes)
- **Part VIII — Acceleration Components** (tangential vs normal acceleration, $a_T$, $a_N$, centripetal form)
- **Part IX — Multivariable Functions** (domains, surfaces, level curves, contour maps, level surfaces)
- **Part X — Partial Differentiation** (first/second-order partials, notation, mixed-derivative theorem)
- **Part XI — Applications: Laplace & Wave Equations** (PDEs, harmonic functions, wave-equation proof)

---

# Part I — 3D Distances & Planes

> **Big idea:** Every 3D distance is the **length of the shortest perpendicular connection** between two objects. The whole game is finding that perpendicular direction.

**Two workhorse formulas:**

| Formula | Use it when |
|---|---|
| $d = \lvert\vec w\cdot\hat n\rvert$ | You already know the perpendicular direction $\hat n$ |
| $d = \dfrac{\lVert\vec w\times\vec v\rVert}{\lVert\vec v\rVert}$ | Point → line, or parallel lines |

---

## Quick Reference Table

| Objects | First check | Formula | Technique |
|---|---|---|---|
| Point ↔ Point | none | $d=\lVert P_2-P_1\rVert$ | direct length |
| Point ↔ Line | none | $d=\dfrac{\lVert\vec w\times\vec v\rVert}{\lVert\vec v\rVert}$ | cross-product height |
| Point ↔ Plane | none | $d=\dfrac{\lvert\vec n\cdot\vec w\rvert}{\lVert\vec n\rVert}$ | dot onto normal |
| Line ↔ Line | parallel? intersect? skew? | depends on case | cross / projection |
| Line ↔ Plane | parallel or intersect? | $0$ or point-plane | dot-product check |
| Plane ↔ Plane | parallel or intersect? | $0$ or point-plane | compare normals |

---

## Standard Forms

**Point**
$$P(x_0, y_0, z_0)$$

**Line** — $\vec r = \vec r_0 + t\vec v$, where $\vec r_0$ is a point on it and $\vec v=\langle a,b,c\rangle$ is its direction.

- Parametric: $\;x = x_0 + at,\quad y = y_0 + bt,\quad z = z_0 + ct$
- Symmetric: $\;\dfrac{x-x_0}{a} = \dfrac{y-y_0}{b} = \dfrac{z-z_0}{c}$

**Plane** — $\;Ax + By + Cz + D = 0$, with normal $\vec n = \langle A, B, C\rangle$.

- Point-normal form: $\;(\vec r - \vec r_0)\cdot\vec n = 0$

---

## 1. Point → Point

Given $P_1(x_1,y_1,z_1)$ and $P_2(x_2,y_2,z_2)$, let $\vec w = P_2 - P_1$.

$$d = \lVert\vec w\rVert = \sqrt{(x_2-x_1)^2 + (y_2-y_1)^2 + (z_2-z_1)^2}$$

*Technique:* direct vector length.

---

## 2. Point → Line

Given point $P$ and line $\vec r = \vec r_0 + t\vec v$, let $\vec w = P - \vec r_0$.

$$\boxed{\,d = \frac{\lVert\vec w\times\vec v\rVert}{\lVert\vec v\rVert}\,}$$

*Technique:* cross-product height.

**Why it works:** since $\lVert\vec w\times\vec v\rVert = \lVert\vec w\rVert\,\lVert\vec v\rVert\sin\theta$, dividing by $\lVert\vec v\rVert$ leaves $d = \lVert\vec w\rVert\sin\theta$ — exactly the perpendicular height.

**Projection alternative:**
$$d = \left\lVert\vec w - \text{proj}_{\vec v}(\vec w)\right\rVert, \qquad \text{proj}_{\vec v}(\vec w) = \frac{\vec w\cdot\vec v}{\lVert\vec v\rVert^2}\,\vec v$$

---

## 3. Point → Plane

Given $P(x_0,y_0,z_0)$ and plane $Ax + By + Cz + D = 0$ with $\vec n = \langle A,B,C\rangle$:

$$\boxed{\,d = \frac{\lvert Ax_0 + By_0 + Cz_0 + D\rvert}{\sqrt{A^2 + B^2 + C^2}}\,}$$

**Vector version:** pick any point $\vec r_0$ on the plane, set $\vec w = P - \vec r_0$, then
$$d = \frac{\lvert\vec n\cdot\vec w\rvert}{\lVert\vec n\rVert}$$

*Technique:* dot-product projection onto the normal.

---

## 4. Line → Line

Given $L_1: \vec r = \vec r_1 + t\vec v_1$ and $L_2: \vec r = \vec r_2 + s\vec v_2$.
**Start by computing $\vec v_1 \times \vec v_2$** to classify the case.

**Case A — Intersecting.** Solve $\vec r_1 + t\vec v_1 = \vec r_2 + s\vec v_2$. If a valid $(t,s)$ exists:
$$d = 0$$

**Case B — Parallel** ($\vec v_1\times\vec v_2 = \vec 0$). Use point-to-line distance:
$$\boxed{\,d = \frac{\lVert(\vec r_2 - \vec r_1)\times\vec v_1\rVert}{\lVert\vec v_1\rVert}\,}$$

**Case C — Skew** (not parallel, don't intersect). The shortest direction is perpendicular to both, so $\vec n = \vec v_1\times\vec v_2$ and:
$$\boxed{\,d = \frac{\lvert(\vec r_2 - \vec r_1)\cdot(\vec v_1\times\vec v_2)\rvert}{\lVert\vec v_1\times\vec v_2\rVert}\,}$$

*Technique:* dot projection onto the common normal.

---

## 5. Line → Plane

Given line $\vec r = \vec r_0 + t\vec v$ and plane $Ax + By + Cz + D = 0$ with $\vec n = \langle A,B,C\rangle$.
**Check $\vec v\cdot\vec n$.**

**Case A — Intersects** ($\vec v\cdot\vec n \neq 0$). The line isn't parallel, so it hits the plane:
$$d = 0$$

**Case B — Parallel** ($\vec v\cdot\vec n = 0$). Take a point on the line (usually $\vec r_0$) and use point-to-plane:
$$d = \frac{\lvert Ax_0 + By_0 + Cz_0 + D\rvert}{\sqrt{A^2 + B^2 + C^2}}$$

---

## 6. Plane → Plane

Given $\Pi_1: A_1x + B_1y + C_1z + D_1 = 0$ and $\Pi_2: A_2x + B_2y + C_2z + D_2 = 0$,
with normals $\vec n_1, \vec n_2$. **Check $\vec n_1\times\vec n_2$.**

**Case A — Intersecting** ($\vec n_1\times\vec n_2 \neq \vec 0$). They meet along a line:
$$d = 0$$

**Case B — Parallel** ($\vec n_1\times\vec n_2 = \vec 0$). Pick a point on one plane, measure to the other:
$$d = \frac{\lvert Ax_0 + By_0 + Cz_0 + D\rvert}{\sqrt{A^2 + B^2 + C^2}}$$

---

## Decision Tree

**Step 1 — Is there a plane?**
Find $\vec n = \langle A,B,C\rangle$ and use $d = \dfrac{\lvert\vec n\cdot\vec w\rvert}{\lVert\vec n\rVert}$.
→ Covers: point-plane, parallel line-plane, parallel plane-plane.

**Step 2 — A point and a line?**
Use $d = \dfrac{\lVert\vec w\times\vec v\rVert}{\lVert\vec v\rVert}$.
→ Covers: point-line, parallel line-line.

**Step 3 — Two non-parallel lines?**
Check intersection. If they meet, $d = 0$. Otherwise they're skew:
$$d = \frac{\lvert(\vec r_2 - \vec r_1)\cdot(\vec v_1\times\vec v_2)\rvert}{\lVert\vec v_1\times\vec v_2\rVert}$$

---

## Technique Cheat Sheet

| Technique | When | Formula |
|---|---|---|
| Direct vector length | point → point | $d=\lVert P_2-P_1\rVert$ |
| Cross-product height | point → line, parallel lines | $d=\dfrac{\lVert\vec w\times\vec v\rVert}{\lVert\vec v\rVert}$ |
| Dot onto normal | point → plane, parallel line-plane, parallel planes | $d=\dfrac{\lvert\vec n\cdot\vec w\rvert}{\lVert\vec n\rVert}$ |
| Common normal (cross) | skew lines | $\vec n=\vec v_1\times\vec v_2$ |
| Intersection check | line-plane, plane-plane, line-line | if they meet, $d=0$ |

---

## Helper Recipes

### Picking $\vec w$ (the connecting vector)

| Situation | $\vec w$ |
|---|---|
| Point → line | $P - \vec r_0$ |
| Point → plane | $P - \vec r_0$ |
| Line → line | $\vec r_2 - \vec r_1$ |
| Plane → plane | point on one plane, compared to the other |

### Getting a point on a line

- From $\vec r = \vec r_0 + t\vec v$: the point is $\vec r_0$.
- From symmetric form $\dfrac{x-x_0}{a}=\dfrac{y-y_0}{b}=\dfrac{z-z_0}{c}$: the point is $(x_0, y_0, z_0)$.

### Getting a point on a plane

Set two variables to $0$ and solve for the third.
Example — $2x + 3y + z - 6 = 0$ with $y=0, z=0$ gives $2x - 6 = 0 \Rightarrow x = 3$, so $(3, 0, 0)$ is on the plane. (If the numbers are ugly, pick different values.)

---

## Worked Example: Point → Line

**Line:** $\dfrac{x-1}{1} = \dfrac{y-2}{2} = \dfrac{z-4}{3}$  **Point:** $P_0(1, 3, 6)$

From the line: $\vec r_0 = (1, 2, 4)$ and $\vec v = \langle 1, 2, 3\rangle$.

1. **Build $\vec w$:** $\;\vec w = P_0 - \vec r_0 = (1,3,6) - (1,2,4) = (0, 1, 2)$
2. **Cross product:** $\;\vec w\times\vec v = (0,1,2)\times(1,2,3) = (-1, 2, -1)$
3. **Norms:** $\;\lVert\vec w\times\vec v\rVert = \sqrt{1+4+1} = \sqrt6,\quad \lVert\vec v\rVert = \sqrt{1+4+9} = \sqrt{14}$
4. **Distance:**
$$\boxed{\,d = \frac{\sqrt6}{\sqrt{14}} = \sqrt{\tfrac{3}{7}}\,}$$

---

## 7. Constructing a Plane (Midterm-Style)

A common exam pattern: build a plane from constraints, then measure a distance to it. The whole problem reduces to **finding the new plane's normal $\vec n$, then one point on it.**

### Key facts you combine

| Constraint | What it gives you |
|---|---|
| Plane $Ax+By+Cz=D$ | normal $\vec n = \langle A,B,C\rangle$ |
| New plane contains the **intersection line** of $\Pi_1, \Pi_2$ | direction $\vec v_1 = \vec n_1\times\vec n_2$ lies in the new plane |
| New plane is **perpendicular** to $\Pi_3$ | $\vec n_3$ lies *inside* the new plane (use it as direction $\vec v_2$) |
| Two directions in a plane | normal $\vec n = \vec v_1\times\vec v_2$ |

> ⚠️ **The tricky step:** when two planes are perpendicular, the normal of one is *parallel to* the other plane — so $\vec n_3$ becomes a **direction vector inside** the plane you're building, **not** its normal.

### The recipe

1. Get the normals of all given planes.
2. Cross the two "intersection-line" normals: $\;\vec v_1 = \vec n_1\times\vec n_2$.
3. Take the perpendicular plane's normal as a second direction: $\;\vec v_2 = \vec n_3$.
4. Cross them for the new normal: $\;\vec n = \vec v_1\times\vec v_2$.
5. Find one point on the intersection line (set one variable to a convenient value, solve the two plane equations).
6. Write the plane with point-normal form: $\;\vec n\cdot(\vec r-\vec r_0)=0$.
7. Apply point-to-plane distance (Section 3).

**Formula chain:**
$$\vec v_1 = \vec n_1\times\vec n_2, \qquad \vec v_2 = \vec n_3, \qquad \vec n_{\text{new}} = \vec v_1\times\vec v_2$$
$$\vec n\cdot(\vec r - \vec r_0) = 0 \quad\longrightarrow\quad d = \frac{\lvert Ax_0+By_0+Cz_0+D\rvert}{\sqrt{A^2+B^2+C^2}}$$

---

### Worked Example

**Find the plane** through the intersection line of $\Pi_1: x - z = 1$ and $\Pi_2: y + 2z = 3$, **perpendicular to** $\Pi_3: x + y - 2z = 1$. Then find the distance from $P(2,1,4)$ to it.

**Normals:**
$$\vec n_1 = (1,0,-1), \qquad \vec n_2 = (0,1,2), \qquad \vec n_3 = (1,1,-2)$$

**1 — Direction along the intersection line** ($\vec v_1 = \vec n_1\times\vec n_2$):
$$\vec v_1 = (1,0,-1)\times(0,1,2) = (1,-2,1)$$

**2 — Second direction** (from perpendicularity to $\Pi_3$):
$$\vec v_2 = \vec n_3 = (1,1,-2)$$

**3 — Normal of the new plane** ($\vec n = \vec v_1\times\vec v_2$):
$$\vec n = (1,-2,1)\times(1,1,-2) = (3,3,3) \;\Rightarrow\; \vec n = (1,1,1)$$

**4 — A point on the intersection line.** Set $z=0$: then $x = 1$ (from $\Pi_1$) and $y = 3$ (from $\Pi_2$), so $P_0 = (1,3,0)$.

**5 — Build the plane** with $\vec n\cdot(\vec r - \vec r_0) = 0$:
$$(x-1) + (y-3) + z = 0 \;\Rightarrow\; \boxed{x + y + z = 4}$$

**6 — Distance from $P(2,1,4)$** using $x+y+z-4=0$ (so $A=B=C=1$, $D=-4$):
$$d = \frac{\lvert 2 + 1 + 4 - 4\rvert}{\sqrt{1^2+1^2+1^2}} = \frac{3}{\sqrt3} = \boxed{\sqrt3}$$

*(Equivalently, project $\overrightarrow{P_0P}$ onto the unit normal $\hat n = \tfrac{(1,1,1)}{\sqrt3}$ — same answer.)*

---

## Test Strategy

Don't memorize blindly — work in this order:

1. **Identify** the objects: point, line, or plane.
2. **Standardize** lines and planes into standard form.
3. **Classify:** do they intersect or are they parallel?
4. **Find** the perpendicular direction.
5. **Apply** projection or cross product.

> ⚠️ The most common mistake is skipping the geometry check (step 3) and applying the wrong formula.

---

# Part II — Cylinders & Quadric Surfaces

> **What matters most:** don't memorize diagrams — memorize the **recognition patterns** (which sign combo = which surface) and the **projection method**.

## 1. Cylinders — "a variable is missing"

$$\boxed{\text{missing variable} = \text{the axis the surface extends along forever}}$$

| Equation | Missing | Surface |
|---|---|---|
| $y = x^2$ | $z$ | parabolic cylinder along the $z$-axis |
| $x^2 + 4z^2 = 4$ | $y$ | elliptical cylinder along the $y$-axis |
| $y^2 - z^2 = 1$ | $x$ | hyperbolic cylinder along the $x$-axis |

That's the whole cylinder idea: **whatever variable is absent is the direction it stretches.**

---

## 2. Quadric Surfaces — the big picture

A **quadric** is a 3D surface built from squared variables ($x^2, y^2, z^2$). General form:
$$Ax^2 + By^2 + Cz^2 + Dxy + Eyz + Fxz + Gx + Hy + Iz + J = 0$$

You don't need to memorize that monster — just know **quadrics are the 3D versions of conics** (ellipse, parabola, hyperbola). Recognize them by the **sign pattern** of the squared terms.

---

## 3. Recognition Patterns (the high-value table)

| Sign / form pattern | Surface | Standard form | Shape |
|---|---|---|---|
| one variable missing | **Cylinder** | — | extends along missing axis |
| $+,+,+ = 1$ | **Ellipsoid** | $\dfrac{x^2}{a^2}+\dfrac{y^2}{b^2}+\dfrac{z^2}{c^2}=1$ | stretched sphere |
| $+,+ = \text{linear}$ | **Elliptical paraboloid** | $\dfrac{x^2}{a^2}+\dfrac{y^2}{b^2}=\dfrac{z}{c}$ | bowl |
| $+,+ = +$ (all squared) | **Elliptical cone** | $\dfrac{x^2}{a^2}+\dfrac{y^2}{b^2}=\dfrac{z^2}{c^2}$ | double cone |
| $+,+,- = 1$ | **Hyperboloid of one sheet** | $\dfrac{x^2}{a^2}+\dfrac{y^2}{b^2}-\dfrac{z^2}{c^2}=1$ | one connected hourglass |
| $+,-,- = 1$ | **Hyperboloid of two sheets** | $\dfrac{z^2}{c^2}-\dfrac{x^2}{a^2}-\dfrac{y^2}{b^2}=1$ | two separate pieces |
| $+,- = \text{linear}$ | **Hyperbolic paraboloid** | $\dfrac{y^2}{b^2}-\dfrac{x^2}{a^2}=\dfrac{z}{c}$ | saddle |

**Memory hooks (strip the constants, look at the bare pattern):**

- $x^2 + y^2 + z^2 = 1$ → ellipsoid
- $x^2 + y^2 = z$ → elliptical paraboloid (bowl)
- $x^2 + y^2 = z^2$ → cone
- $x^2 + y^2 - z^2 = 1$ → hyperboloid of **one** sheet ($+,+,-$)
- $z^2 - x^2 - y^2 = 1$ → hyperboloid of **two** sheets ($+,-,-$)
- $x^2 - y^2 = z$ → hyperbolic paraboloid (saddle)

> 💡 **Two quick rules:**
> - **One linear variable** (not squared) → it's a paraboloid (bowl if same signs, saddle if opposite signs).
> - For the two-sheet hyperboloid, the **single positive squared variable points along the opening axis.** In $z^2 - x^2 - y^2 = 1$, $z$ is positive, so it opens along the $z$-axis.

---

## 4. Curves of Intersection

Two surfaces intersecting produce a 3D **curve** — the set of points where **both equations hold at once.**

Example: $z = x^2 + y^2$ (paraboloid) and $x + z = 1$ (plane). The curve is wherever both are simultaneously true.

---

## 5. Projection Method

To project a curve onto a coordinate plane, **eliminate the variable you're not viewing.**

| Project onto | Eliminate |
|---|---|
| $xy$-plane | $z$ |
| $xz$-plane | $y$ |
| $yz$-plane | $x$ |

**Worked example** — project the intersection above onto the $xy$-plane (so eliminate $z$):

1. From the plane: $z = 1 - x$.
2. Substitute into the paraboloid: $1 - x = x^2 + y^2$.
3. Rearrange: $x^2 + x + y^2 - 1 = 0$.
4. Complete the square in $x$:
$$\boxed{\left(x + \tfrac12\right)^2 + y^2 = \tfrac54}$$

That circle is the shadow of the intersection curve on the $xy$-plane.

---

## 6. Exam Priorities for This Topic

1. **Missing variable → cylinder**, extending along that axis.
2. **Recognize quadrics by sign pattern:**
   - $+,+,+ = 1$ → ellipsoid
   - $+,+,- = 1$ → one-sheet hyperboloid
   - $+,-,- = 1$ → two-sheet hyperboloid
   - $+,+ = \text{linear}$ → elliptical paraboloid
   - $+,- = \text{linear}$ → hyperbolic paraboloid
3. **Intersection curve** = both equations true at once.
4. **Projection** = eliminate the variable you're not looking along, then simplify (often by completing the square).

---

# Part III — Paths & Curves

> **Core move:** given a vector function $\vec r(t)$, split it into components, **eliminate $t$** to find the surface/shape the curve lies on, then **plug in increasing $t$** to find the direction of travel.

## 1. Path vs Curve

$$\boxed{\text{path} = \text{the formula } \vec r(t)} \qquad \boxed{\text{curve} = \text{the shape/graph it draws}}$$

A **path** is the vector function $\vec r(t) = (x(t), y(t), z(t))$; the **curve** is the actual 3D drawing it produces.

---

## 2. Split into Components

From $\vec r(t) = (x(t), y(t), z(t))$, separate:
$$x = x(t), \qquad y = y(t), \qquad z = z(t)$$
Then relate $x, y, z$ to each other by **removing $t$**.

---

## 3. Eliminating $t$ (the main skill)

Removing $t$ tells you what surface the curve lies on. The most common tool is the Pythagorean identity $\sin^2 t + \cos^2 t = 1$.

**Example:** $x = \cos t,\; y = \sin t \;\Rightarrow\; x^2 + y^2 = 1$ — the curve lies on a circular cylinder.

---

## 4. Shape Recognition

| Pattern | Shape |
|---|---|
| $x^2 + y^2 = 1$ | circular cylinder along $z$ |
| $x^2 + z^2 = 1$ | circular cylinder along $y$ |
| $y^2 + z^2 = 1$ | circular cylinder along $x$ |
| $\dfrac{x^2}{a^2} + \dfrac{y^2}{b^2} = 1$ | elliptical cylinder along $z$ |
| $z = x^2$ | parabolic cylinder along $y$ |
| $y = x^2$ | parabolic cylinder along $z$ |

$$\boxed{\text{missing variable} = \text{the axis the cylinder extends along}}$$

---

## 5. Helix

$$\vec r(t) = (\cos t,\; \sin t,\; t)$$

Here $x, y$ trace a circle ($x^2 + y^2 = 1$) while $z = t$ steadily increases — a **helix** around the $z$-axis. It lies *on* the cylinder $x^2 + y^2 = 1$ but is only a spiral path on it, not the whole surface.

---

## 6. Coefficients Change the Cross-Section

$$\vec r(t) = (9\cos t,\; 2\sin t,\; t)$$

Then $\dfrac{x}{9} = \cos t$ and $\dfrac{y}{2} = \sin t$, so:
$$\frac{x^2}{81} + \frac{y^2}{4} = 1$$
The curve lies on an **elliptical cylinder** — the coefficients set the semi-axes.

---

## 7. Changing the Height Function Changes the Motion

Both $\vec r(t) = (\cos t, \sin t, t)$ and $\vec r(t) = (\cos t, \sin t, t^2)$ lie on the **same** cylinder $x^2 + y^2 = 1$. But $z = t$ rises steadily while $z = t^2$ rises faster as $t$ grows. **Same base surface, different motion along it.**

---

## 8. Curves as Intersections of Two Surfaces

A 3D curve can often be written as the intersection of two surfaces — find **two separate relationships** by eliminating $t$ in two different ways.

**Example:** $\vec r(t) = (\sin t,\; \cos t,\; \sin^2 t)$, so $x = \sin t,\; y = \cos t,\; z = \sin^2 t$.

- **Relationship 1:** $x^2 + y^2 = \sin^2 t + \cos^2 t = 1 \;\Rightarrow\; \boxed{x^2 + y^2 = 1}$
- **Relationship 2:** since $x = \sin t$ and $z = \sin^2 t$, $\;\boxed{z = x^2}$

So the curve is the intersection of a **circular cylinder** ($x^2+y^2=1$) and a **parabolic cylinder** ($z = x^2$).

---

## 9. Direction / Orientation

The curve is traced in the direction of **increasing $t$**. To find it, plug in easy $t$-values and follow the points in order. For a trig-based path use:
$$t = 0,\; \tfrac{\pi}{2},\; \pi,\; \tfrac{3\pi}{2},\; 2\pi$$

> 💡 Plot **at least three points** to nail down the direction of travel.

---

## 10. Parameter Range

The interval for $t$ says how much of the curve is drawn:

- $0 \le t \le 2\pi$ → usually one full cycle for sine/cosine.
- $0 \le t < \infty$ → the curve continues forever.

---

## 11. What to Remember

$$\boxed{\text{Given } \vec r(t):\; \text{split into } x, y, z \;\text{and eliminate } t}$$
$$\boxed{\text{Use the resulting equation(s) to identify the surface/shape}}$$
$$\boxed{\text{For direction: plug in increasing } t \text{ values and follow the points}}$$

---

# Part IV — Parametrizing Curves & Vector Derivatives

> **This is Part III in reverse.** Part III gave you $\vec r(t)$ and asked which surfaces it lies on. Here you're **given the surfaces** (a curve as their intersection) and must **build $\vec r(t)$.**
>
> **Core move:** use **one** surface equation to pick $x(t)$ and $y(t)$, then use the **other** to solve for $z(t)$.

## 1. What Parametrization Means

Instead of describing a curve with equations like $x^2 + 4y^2 = 4$, you describe **where a particle is at each value of $t$:**
$$\boxed{\vec r(t) = \langle x(t),\, y(t),\, z(t)\rangle = x(t)\hat i + y(t)\hat j + z(t)\hat k}$$

> ⚠️ There are **infinitely many valid parametrizations** of the same curve — different parameter choices, speeds, and directions all work.

---

## 2. General Method (intersection curves)

1. **Sketch** the two surfaces.
2. **Choose a convenient parameter** (pick the easiest variable — see §6).
3. **Use the surface equations** to get $x(t), y(t), z(t)$.
4. **Check direction** with at least 3 points.
5. **If direction is wrong**, flip a sign or change the parameter.

---

## 3. Standard Parametrization Tricks

| If you see | Use | Why |
|---|---|---|
| $\dfrac{x^2}{a^2} + \dfrac{y^2}{b^2} = 1$ (ellipse) | $x = a\cos t,\; y = b\sin t$ | reduces to $\cos^2 t + \sin^2 t = 1$ |
| $x^2 + y^2 = r^2$ (circle) | $x = r\cos t,\; y = r\sin t$ | same identity |
| $y = x^2$ (parabola) | $x = t,\; y = t^2$ | direct substitution |
| $z = x^2 + y^2$ | choose $x, y$ then solve for $z$ | $z$ falls out |

**Ellipse check:** with $x = a\cos t,\ y = b\sin t$, $\;\dfrac{(a\cos t)^2}{a^2} + \dfrac{(b\sin t)^2}{b^2} = \cos^2 t + \sin^2 t = 1.$ ✓

---

## 4. Worked Example 1 — Plane + Elliptical Cylinder

**Surfaces:** $\;x + 2y + 4z = 4\;$ and $\;x^2 + 4y^2 = 4$.

1. **Rewrite the cylinder:** $\dfrac{x^2}{4} + y^2 = 1$, so choose $x = 2\cos t,\; y = \sin t$.
2. **Use the plane to solve for $z$:** $\;4z = 4 - x - 2y \Rightarrow z = \tfrac14(4 - x - 2y)$.
3. **Substitute:** $\;z = \tfrac14(4 - 2\cos t - 2\sin t) = 1 - \tfrac12(\cos t + \sin t)$.

$$\boxed{\vec r(t) = \left\langle 2\cos t,\; \sin t,\; 1 - \tfrac12(\cos t + \sin t)\right\rangle, \quad 0 \le t \le 2\pi}$$

**Direction check** (does $y$ increase while $x > 0$?):

| $t$ | point |
|---|---|
| $0$ | $(2,\, 0,\, \tfrac12)$ |
| $\tfrac{\pi}{2}$ | $(0,\, 1,\, \tfrac12)$ |
| $\pi$ | $(-2,\, 0,\, \tfrac32)$ |

From $t=0$ to $t=\tfrac{\pi}{2}$, $y$ goes $0 \to 1$ while $x$ is positive — correct direction. ✓

---

## 5. Direction Checking

If the problem specifies an orientation (e.g. *"directed so $y$ increases when $x$ is positive"*), you must verify it:

$$\boxed{\text{Plug in increasing } t\text{-values and follow the points.}}$$

If the points run the wrong way, **flip the sign of the parameter** (see Example 2).

---

## 6. Worked Example 2 — Cone + Parabolic Cylinder (fixing direction)

**Surfaces:** $\;z = \sqrt{x^2 + y^2}\;$ and $\;y = x^2$.

The parabola is easiest, so let $x = t \Rightarrow y = t^2$. Then $z = \sqrt{t^2 + t^4}$, giving:
$$\vec r(t) = \langle t,\; t^2,\; \sqrt{t^2 + t^4}\rangle$$

But the direction check shows $y$ **increasing** when the problem wants it **decreasing**. Fix it by flipping the sign of $x$ ($x = -t$):
$$\boxed{\vec r(t) = \left\langle -t,\; t^2,\; \sqrt{t^2 + t^4}\right\rangle}$$

---

## 7. Choose the Easiest Variable

Pick the parameter that makes the equation simplest:

- $y = x^2$ → let $x = t$, so $y = t^2$.
- $x^2 + 4y^2 = 4$ → use trig: $x = 2\cos t,\; y = \sin t$.
- $z = x^2 + y^2$ → choose $x$ and $y$, then solve for $z$.

---

## 8. Vector Functions Describe Motion

A particle in 3D has position $\vec r(t) = f(t)\hat i + g(t)\hat j + h(t)\hat k$. Its change in position over $\Delta t$ is:
$$\Delta\vec r = \vec r(t + \Delta t) - \vec r(t)$$

---

## 9. Derivative of a Vector Function

Differentiate **component by component:**
$$\boxed{\vec r'(t) = f'(t)\hat i + g'(t)\hat j + h'(t)\hat k = \left\langle \frac{dx}{dt},\, \frac{dy}{dt},\, \frac{dz}{dt}\right\rangle}$$

This is the rate of change of the position vector — in physics, the **velocity**.

---

## 10. Formula Summary

| Concept | Formula |
|---|---|
| Vector function | $\vec r(t) = \langle x(t), y(t), z(t)\rangle$ |
| Ellipse | $x = a\cos t,\; y = b\sin t$ |
| Circle | $x = r\cos t,\; y = r\sin t$ |
| Parabola ($y = x^2$) | $x = t,\; y = t^2$ |
| Vector derivative | $\vec r'(t) = \langle x'(t), y'(t), z'(t)\rangle$ |
| Direction check | plug in ≥ 3 increasing $t$-values |
| Full trig loop | $0 \le t \le 2\pi$ |

---

## 11. Parametrization Quick-Reference (Picker)

> **Main idea:** $\boxed{\text{Parametrize the easier surface first, then use the other equation for the missing variable.}}$

**Pattern → parametrization** (expands §3 with more cases):

| Given equation | Parametrize like this |
|---|---|
| $x^2 + y^2 = r^2$ | $x = r\cos t,\; y = r\sin t$ |
| $\dfrac{x^2}{a^2} + \dfrac{y^2}{b^2} = 1$ | $x = a\cos t,\; y = b\sin t$ |
| $\dfrac{(x-h)^2}{a^2} + \dfrac{(y-k)^2}{b^2} = 1$ | $x = h + a\cos t,\; y = k + b\sin t$ |
| $y = x^2$ | $x = t,\; y = t^2$ |
| $x = y^2$ | $y = t,\; x = t^2$ |
| $z = x^2$ | $x = t,\; z = t^2$ — find $y$ from the other equation |
| $z = x^2 + y^2$ | find $x, y$ first, then plug into $z$ |
| $z = \sqrt{x^2 + y^2}$ | find $x, y$ first, then plug into $z$ |
| $Ax + By + Cz = D$ (plane) | solve for the easiest variable |
| line | $\vec r(t) = \vec r_0 + t\vec v$ |

**When to use what:**

- $\cos t, \sin t$ → circles and ellipses ($x^2 + y^2 = r^2$ or the ellipse form).
- $t$ → direct relations like parabolas and lines ($y = x^2$).
- The **plane equation** → solve it for whatever variable is left over.

**Direction check** — direction follows increasing $t$. Plug in three values, e.g. $t = 0, \tfrac{\pi}{2}, \pi$ (trig) or $t = -2, -1, 0$ (polynomial). Wrong way? Flip a sign: $x = t \to x = -t$.

**Parameter range:**

| Situation | Range |
|---|---|
| full circle / ellipse | $0 \le t \le 2\pi$ |
| half circle | usually $0 \le t \le \pi$ |
| parabola | usually $t \in \mathbb{R}$ |
| first octant | choose range so $x, y, z \ge 0$ |

$$\boxed{\cos, \sin \text{ for circles/ellipses.} \quad t \text{ for parabolas/lines.}}$$

---

## 12. What to Remember

$$\boxed{\text{To parametrize an intersection: use one equation for } x(t), y(t),\text{ then the other for } z(t).}$$
$$\boxed{\text{If the direction is wrong, flip the sign of the parameter.}}$$

---

# Part V — Vector Calculus: Tangents, Velocity & Projectiles

> **One sentence:** $\boxed{\text{Differentiate position} \to \text{velocity} \to \text{acceleration; integrate acceleration back} \to \text{velocity/position.}}$
>
> It's ordinary calculus done **component by component** — differentiate or integrate each piece of $\vec r(t)$ separately.

## 1. Differentiating a Vector Function

Given $\vec r(t) = \langle f(t), g(t), h(t)\rangle$, differentiate each component:
$$\boxed{\vec r'(t) = \langle f'(t),\, g'(t),\, h'(t)\rangle = \frac{df}{dt}\hat i + \frac{dg}{dt}\hat j + \frac{dh}{dt}\hat k}$$

The derivative vector points **tangent** to the curve. If $\vec r(t)$ is position, $\vec r'(t)$ is velocity.

---

## 2. Tangent Line

At a specific $t = a$:

- $\vec r(a)$ → a **point** on the tangent line
- $\vec r'(a)$ → the **direction** of the tangent line

$$\boxed{\vec L(s) = \vec r(a) + s\,\vec r'(a)}$$

> 💡 Use a **new parameter $s$** for the line so it isn't confused with the curve's $t$.

---

## 3. Worked Example — Tangent Line

Given $\vec r(t) = \sin t\,\hat i + (t^2 - \cos t)\,\hat j + e^t\,\hat k$, find the tangent line at $t = 0$.

1. **Point:** $\vec r(0) = \langle \sin 0,\; 0 - \cos 0,\; e^0\rangle = \langle 0, -1, 1\rangle$
2. **Derivative:** $\vec r'(t) = \langle \cos t,\; 2t + \sin t,\; e^t\rangle$
3. **Direction:** $\vec r'(0) = \langle 1, 0, 1\rangle$

$$\vec L(s) = \langle 0, -1, 1\rangle + s\langle 1, 0, 1\rangle \;\Rightarrow\; \boxed{x = s,\quad y = -1,\quad z = 1 + s}$$

---

## 4. Velocity, Speed, Acceleration

If $\vec r(t)$ is position:

| Quantity | Formula | Type |
|---|---|---|
| **Velocity** | $\vec v(t) = \vec r'(t)$ | vector |
| **Speed** | $\lvert\vec v(t)\rvert = \sqrt{(x')^2 + (y')^2 + (z')^2}$ | scalar |
| **Acceleration** | $\vec a(t) = \vec v'(t) = \vec r''(t) = \langle x'', y'', z''\rangle$ | vector |

> ⚠️ **Speed is a scalar** (the magnitude of velocity), not a vector.

---

## 5. Integrating a Vector Function

Also component by component.

**Indefinite:**
$$\int \vec r(t)\,dt = \left\langle \int f\,dt,\; \int g\,dt,\; \int h\,dt\right\rangle + \vec C, \qquad \vec C = \langle C_1, C_2, C_3\rangle$$

**Definite:**
$$\int_a^b \vec r(t)\,dt = \vec R(b) - \vec R(a)$$

---

## 6. Differentiation Rules (vector product rules)

| Rule | Formula |
|---|---|
| Scalar × vector | $\dfrac{d}{dt}[f\vec v] = f'\vec v + f\vec v'$ |
| Dot product | $\dfrac{d}{dt}[\vec u\cdot\vec v] = \vec u'\cdot\vec v + \vec u\cdot\vec v'$ |
| Cross product | $\dfrac{d}{dt}[\vec u\times\vec v] = \vec u'\times\vec v + \vec u\times\vec v'$ |

> ⚠️ For the **cross product, order matters** — keep $\vec u$ before $\vec v$ in each term; don't swap.

---

## 7. Projectile Motion

Just integration from acceleration up to position. Assume the projectile starts at the origin.

**Gravity:** $\vec a(t) = -g\,\hat j$
**Initial velocity:** $\vec v_0 = v_0\cos\alpha\,\hat i + v_0\sin\alpha\,\hat j$

Integrate acceleration → velocity:
$$\vec v(t) = v_0\cos\alpha\,\hat i + (v_0\sin\alpha - gt)\,\hat j$$

Integrate velocity → position:
$$\boxed{\vec r(t) = v_0\cos\alpha\,t\,\hat i + \left(v_0\sin\alpha\,t - \tfrac12 g t^2\right)\hat j}$$

---

## 8. Worked Example — Projectile

Given $v_0 = 500$ m/s, $\alpha = 60°$, $g = 9.8$ m/s². With $\cos 60° = \tfrac12$ and $\sin 60° = \tfrac{\sqrt3}{2}$:

$$\vec r(t) = 500\cos 60°\,t\,\hat i + \left(500\sin 60°\,t - \tfrac12(9.8)t^2\right)\hat j$$

At $t = 10$:

- $x(10) = 500\left(\tfrac12\right)(10) = 2500$
- $y(10) = 500\left(\tfrac{\sqrt3}{2}\right)(10) - 4.9(100) \approx 3840$

$$\boxed{\vec r(10) \approx 2500\,\hat i + 3840\,\hat j}$$

---

## 9. Core Formulas

| Concept | Formula |
|---|---|
| Vector function | $\vec r(t) = \langle x(t), y(t), z(t)\rangle$ |
| Derivative | $\vec r'(t) = \langle x'(t), y'(t), z'(t)\rangle$ |
| Tangent vector at $t=a$ | $\vec r'(a)$ |
| Tangent line | $\vec L(s) = \vec r(a) + s\,\vec r'(a)$ |
| Velocity | $\vec v(t) = \vec r'(t)$ |
| Speed | $\lvert\vec v(t)\rvert = \sqrt{(x')^2+(y')^2+(z')^2}$ |
| Acceleration | $\vec a(t) = \vec r''(t)$ |
| Vector integral | $\int\vec r\,dt = \langle\int x\,dt, \int y\,dt, \int z\,dt\rangle + \vec C$ |
| Projectile position | $\vec r(t) = v_0\cos\alpha\,t\,\hat i + (v_0\sin\alpha\,t - \tfrac12 gt^2)\hat j$ |

---

# Part VI — Arc Length, Unit Tangent & Curvature

> **The chain:** $\;\vec r(t) \to \vec r'(t) \to \lvert\vec r'(t)\rvert \to s(t) \to \hat T(t) \to \kappa$
>
> Three takeaways: **arc length = integrate speed**, **unit tangent = velocity ÷ speed**, **curvature = how fast the unit tangent turns per unit distance.**

## 1. $t$ vs $s$

- $t$ → time / a generic parameter (natural for **motion**).
- $s$ → **arc length**: actual distance traveled along the curve (natural for **shape**).

$$\boxed{t = \text{parameter/time}} \qquad \boxed{s = \text{distance along the curve}}$$

---

## 2. Speed Connects $t$ and $s$

The rate at which distance along the curve grows **is** the speed:
$$\boxed{\frac{ds}{dt} = \lvert\vec r'(t)\rvert}$$

---

## 3. Arc Length Function

Distance traveled from a starting value $t_0$:
$$\boxed{s(t) = \int_{t_0}^{t} \lvert\vec r'(\tau)\rvert\,d\tau = \int_{t_0}^{t} \sqrt{\left(\tfrac{dx}{d\tau}\right)^2 + \left(\tfrac{dy}{d\tau}\right)^2 + \left(\tfrac{dz}{d\tau}\right)^2}\,d\tau}$$

---

## 4. Total Length of a Curve

For $\alpha \le t \le \beta$:
$$\boxed{L = \int_{\alpha}^{\beta} \lvert\vec r'(t)\rvert\,dt = \int_{\alpha}^{\beta} \sqrt{(x'(t))^2 + (y'(t))^2 + (z'(t))^2}\,dt}$$

---

## 5. Reparametrizing by Arc Length

To rewrite $\vec r(t)$ as $\vec r(s)$:

1. Find $\vec r'(t)$.
2. Find speed $\lvert\vec r'(t)\rvert$.
3. Compute $s(t) = \int_{t_0}^{t}\lvert\vec r'(\tau)\rvert\,d\tau$.
4. Solve for $t$ in terms of $s$.
5. Substitute $t(s)$ back into $\vec r(t)$.

---

## 6. Worked Example — Arc Length Parametrization

Given $\vec r(t) = \langle 1 + 2t,\; 3 + t,\; -5t\rangle$:

1. **Derivative:** $\vec r'(t) = \langle 2, 1, -5\rangle$
2. **Speed:** $\lvert\vec r'(t)\rvert = \sqrt{4 + 1 + 25} = \sqrt{30}$ (constant)
3. **Arc length from $t=0$:** $s(t) = \int_0^t \sqrt{30}\,d\tau = \sqrt{30}\,t$
4. **Solve for $t$:** $t = \dfrac{s}{\sqrt{30}}$
5. **Substitute:**

$$\boxed{\vec r(s) = \left\langle 1 + \frac{2s}{\sqrt{30}},\; 3 + \frac{s}{\sqrt{30}},\; -\frac{5s}{\sqrt{30}}\right\rangle}$$

---

## 7. Unit Tangent Vector

The velocity $\vec r'(t)$ points tangent to the curve but may not have length 1. Normalize it:
$$\boxed{\hat T(t) = \frac{\vec r'(t)}{\lvert\vec r'(t)\rvert} = \frac{\vec v(t)}{\lvert\vec v(t)\rvert}}$$

This gives the **direction of motion only**, ignoring speed.

When the curve is already in arc-length form, $\hat T$ is just the derivative (moving 1 unit of $s$ = 1 unit along the curve):
$$\boxed{\hat T = \frac{d\vec r}{ds}}$$

---

## 8. Curvature

Curvature $\kappa$ measures how fast the tangent direction changes as you move along the curve:
$$\boxed{\kappa = \left\lvert\frac{d\hat T}{ds}\right\rvert}$$

Since curves are usually given in $t$, convert using speed:
$$\boxed{\kappa = \frac{1}{\lvert\vec r'(t)\rvert}\left\lvert\frac{d\hat T}{dt}\right\rvert}$$

**Intuition:**

- Straight line → $\kappa = 0$.
- Tighter turn → larger $\kappa$; gentler turn → smaller $\kappa$.
- Circle of radius $R$ → $\kappa = \dfrac{1}{R}$.

---

## 9. Core Formulas

| Concept | Formula |
|---|---|
| Velocity | $\vec v(t) = \vec r'(t)$ |
| Speed | $\lvert\vec v(t)\rvert = \lvert\vec r'(t)\rvert$ |
| Arc length rate | $\dfrac{ds}{dt} = \lvert\vec r'(t)\rvert$ |
| Arc length function | $s(t) = \int_{t_0}^{t}\lvert\vec r'(\tau)\rvert\,d\tau$ |
| Total length | $L = \int_{\alpha}^{\beta}\lvert\vec r'(t)\rvert\,dt$ |
| Expanded length | $L = \int_{\alpha}^{\beta}\sqrt{(x')^2+(y')^2+(z')^2}\,dt$ |
| Unit tangent | $\hat T(t) = \dfrac{\vec r'(t)}{\lvert\vec r'(t)\rvert}$ |
| Arc-length tangent | $\hat T = \dfrac{d\vec r}{ds}$ |
| Curvature | $\kappa = \left\lvert\dfrac{d\hat T}{ds}\right\rvert$ |
| Curvature using $t$ | $\kappa = \dfrac{1}{\lvert\vec r'(t)\rvert}\left\lvert\dfrac{d\hat T}{dt}\right\rvert$ |

---

# Part VII — The Frenet Frame

> **Idea:** describe motion along a curve with a coordinate system **attached to the path** — forward, turning-inward, and twisting-out — instead of fixed $x, y, z$.
>
> **Driving analogy:** $\hat T$ points forward along the road, $\hat N$ points toward the inside of the turn, $\hat B$ points perpendicular to the turning plane.

## 1. The Three Vectors

| Vector | Name | Direction it points |
|---|---|---|
| $\hat T$ | unit tangent | the way the particle is moving |
| $\hat N$ | principal unit normal | toward where the curve is bending (concave side) |
| $\hat B$ | unit binormal | perpendicular to both $\hat T$ and $\hat N$ |

Together $\{\hat T, \hat N, \hat B\}$ form a **moving right-handed coordinate system** that follows the curve.

---

## 2. Unit Tangent $\hat T$

$$\boxed{\hat T(t) = \frac{\vec r'(t)}{\lvert\vec r'(t)\rvert}}$$

Direction of motion only — says nothing about speed.

---

## 3. Principal Unit Normal $\hat N$

Points toward the concave (turning) side, perpendicular to $\hat T$. The arc-length definition is $\hat N = \dfrac{d\hat T/ds}{\lvert d\hat T/ds\rvert}$, but since curves are usually in $t$, use the practical version:

$$\boxed{\hat N(t) = \frac{\hat T'(t)}{\lvert\hat T'(t)\rvert}}$$

> 💡 This is the key formula of the lecture. If $\hat T$ says where you're going, $\hat N$ says **how that direction is changing.**

---

## 4. Unit Binormal $\hat B$

$$\boxed{\hat B = \hat T \times \hat N}$$

Perpendicular to both $\hat T$ and $\hat N$; captures the curve's tendency to **twist out** of the $\hat T$–$\hat N$ plane.

---

## 5. Curvature $\kappa$

How sharply the curve turns:
$$\boxed{\kappa(t) = \frac{\lvert\hat T'(t)\rvert}{\lvert\vec r'(t)\rvert}} \qquad\text{or, often faster,}\qquad \boxed{\kappa(t) = \frac{\lvert\vec r'(t)\times\vec r''(t)\rvert}{\lvert\vec r'(t)\rvert^3}}$$

The second form avoids computing $\hat T'(t)$. Large $\kappa$ = sharp turn, small $\kappa$ = gentle turn, straight line = $0$.

---

## 6. Radius of Curvature $\rho$

The radius of the circle that best fits the curve at that point:
$$\boxed{\rho = \frac{1}{\kappa}}$$

Sharp turn → $\kappa$ large, $\rho$ small. Gentle turn → $\kappa$ small, $\rho$ large.

---

## 7. Osculating Circle

The best-fit ("kissing") circle at a point: radius $\rho = \tfrac1\kappa$, centered by stepping from the point along $\hat N$ by distance $\rho$:
$$\boxed{\vec C = \vec r(t_0) + \rho\,\hat N(t_0)}$$

---

## 8. Expressing a Vector in the Frenet Frame

Any vector $\vec F$ splits into components along the three directions:
$$\boxed{\vec F = (\vec F\cdot\hat T)\hat T + (\vec F\cdot\hat N)\hat N + (\vec F\cdot\hat B)\hat B}$$

| Component | Meaning (for a force) |
|---|---|
| $F_T = \vec F\cdot\hat T$ | part along the motion |
| $F_N = \vec F\cdot\hat N$ | part causing turning |
| $F_B = \vec F\cdot\hat B$ | part twisting out of the plane |

---

## 9. The Two Planes

| Plane | Built from | Perpendicular to | Equation at $\vec r(t_0)$ |
|---|---|---|---|
| **Normal plane** | $\hat N, \hat B$ | $\hat T$ | $(\vec x - \vec r(t_0))\cdot\hat T(t_0) = 0$ |
| **Osculating plane** | $\hat T, \hat N$ | $\hat B$ | $(\vec x - \vec r(t_0))\cdot\hat B(t_0) = 0$ |

The osculating plane is where the curve is bending at that instant.

---

## 10. Solving a Typical Question (step order)

1. **Velocity:** $\vec r'(t)$
2. **Unit tangent:** $\hat T = \dfrac{\vec r'}{\lvert\vec r'\rvert}$
3. **Differentiate:** $\hat T'(t)$
4. **Unit normal:** $\hat N = \dfrac{\hat T'}{\lvert\hat T'\rvert}$
5. **Binormal:** $\hat B = \hat T\times\hat N$
6. **Curvature:** $\kappa = \dfrac{\lvert\hat T'\rvert}{\lvert\vec r'\rvert}$ or $\dfrac{\lvert\vec r'\times\vec r''\rvert}{\lvert\vec r'\rvert^3}$
7. **Radius:** $\rho = \dfrac1\kappa$
8. **Osculating circle center (if asked):** $\vec C = \vec r + \rho\,\hat N$

---

## 11. Must-Know Formulas

| Concept | Formula |
|---|---|
| Unit tangent | $\hat T = \dfrac{\vec r'}{\lvert\vec r'\rvert}$ |
| Unit normal | $\hat N = \dfrac{\hat T'}{\lvert\hat T'\rvert}$ |
| Unit binormal | $\hat B = \hat T\times\hat N$ |
| Curvature | $\kappa = \dfrac{\lvert\hat T'\rvert}{\lvert\vec r'\rvert} = \dfrac{\lvert\vec r'\times\vec r''\rvert}{\lvert\vec r'\rvert^3}$ |
| Radius of curvature | $\rho = \dfrac1\kappa$ |
| Osculating circle center | $\vec C = \vec r + \rho\,\hat N$ |
| Normal plane | $(\vec x - \vec r(t_0))\cdot\hat T(t_0) = 0$ |
| Osculating plane | $(\vec x - \vec r(t_0))\cdot\hat B(t_0) = 0$ |

---

# Part VIII — Acceleration Components

> **Idea (builds on the Frenet Frame):** split acceleration into the part that changes **speed** and the part that changes **direction**.
> $$\boxed{\vec a = a_T\,\hat T + a_N\,\hat N}$$
> $a_T\hat T$ = speeding up / slowing down; $\;a_N\hat N$ = turning.

## 1. Velocity Has Only a Tangential Part

Velocity always points along the curve, so there's **no normal component**:
$$\boxed{\vec v = \lvert\vec v\rvert\,\hat T = v_T\,\hat T + 0\,\hat N, \qquad v_T = \lvert\vec v\rvert}$$

The particle moves *along* the path, never sideways off it.

---

## 2. Acceleration Has Two Parts

The full derivation gives:
$$\vec a = \frac{d^2s}{dt^2}\,\hat T + \kappa\left(\frac{ds}{dt}\right)^2\hat N$$

Since $\frac{ds}{dt} = \lvert\vec v\rvert$, this is $\vec a = a_T\hat T + a_N\hat N$ with:
$$\boxed{a_T = \frac{d}{dt}\lvert\vec v\rvert} \qquad\qquad \boxed{a_N = \kappa\lvert\vec v\rvert^2}$$

---

## 3. Tangential Acceleration $a_T$ (changes speed)

$$\boxed{a_T = \frac{d}{dt}\lvert\vec v\rvert} \qquad\text{or, easier,}\qquad \boxed{a_T = \frac{\vec v\cdot\vec a}{\lvert\vec v\rvert}}$$

The dot-product form avoids differentiating the speed expression.

| Sign | Meaning |
|---|---|
| $a_T > 0$ | speeding up |
| $a_T < 0$ | slowing down |
| $a_T = 0$ | constant speed |

---

## 4. Normal Acceleration $a_N$ (changes direction)

$$\boxed{a_N = \kappa\lvert\vec v\rvert^2} \qquad \boxed{a_N = \sqrt{\lvert\vec a\rvert^2 - a_T^2}} \qquad \boxed{a_N = \frac{\lvert\vec v\times\vec a\rvert}{\lvert\vec v\rvert}}$$

> 💡 The middle form $a_N = \sqrt{\lvert\vec a\rvert^2 - a_T^2}$ is the workhorse — it gets $a_N$ **without** computing curvature first.

Normal acceleration never changes speed, only direction. You can have acceleration even at constant speed, because the direction is still changing.

---

## 5. Curvature & Radius (fastest forms)

$$\boxed{\kappa = \frac{\lvert\vec v\times\vec a\rvert}{\lvert\vec v\rvert^3} = \frac{\lvert\vec r'\times\vec r''\rvert}{\lvert\vec r'\rvert^3}} \qquad\qquad \boxed{\rho = \frac{1}{\kappa}}$$

Combining $a_N = \kappa\lvert\vec v\rvert^2$ with $\kappa = \tfrac1\rho$ gives the classic **centripetal** form:
$$\boxed{a_N = \frac{\lvert\vec v\rvert^2}{\rho}}$$

Smaller radius → sharper turn → larger normal acceleration.

---

## 6. Solving a Typical Problem (step order)

1. **Velocity:** $\vec v = \vec r'(t)$
2. **Acceleration:** $\vec a = \vec r''(t)$
3. **Speed:** $\lvert\vec v\rvert$
4. **Tangential:** $a_T = \dfrac{d}{dt}\lvert\vec v\rvert$ or $\dfrac{\vec v\cdot\vec a}{\lvert\vec v\rvert}$
5. **Normal:** $a_N = \sqrt{\lvert\vec a\rvert^2 - a_T^2}$
6. **Write it out:** $\vec a = a_T\hat T + a_N\hat N$ and $\vec v = \lvert\vec v\rvert\hat T + 0\hat N$

---

## 7. Worked Example

Given $\vec r(t) = \langle t,\, t^2,\, t^2\rangle$:

1. **Velocity:** $\vec v = \langle 1, 2t, 2t\rangle$
2. **Speed:** $\lvert\vec v\rvert = \sqrt{1 + 8t^2}$, so $\;\vec v = \sqrt{1+8t^2}\,\hat T + 0\,\hat N$
3. **Acceleration:** $\vec a = \langle 0, 2, 2\rangle$, magnitude $\lvert\vec a\rvert = \sqrt{8} = 2\sqrt2$
4. **Tangential:** $a_T = \dfrac{d}{dt}\sqrt{1 + 8t^2} = \dfrac{8t}{\sqrt{1 + 8t^2}}$
5. **Normal:** $a_N = \sqrt{8 - \left(\dfrac{8t}{\sqrt{1+8t^2}}\right)^2} = \dfrac{2\sqrt2}{\sqrt{1+8t^2}}$

$$\boxed{\vec a = \frac{8t}{\sqrt{1+8t^2}}\,\hat T + \frac{2\sqrt2}{\sqrt{1+8t^2}}\,\hat N}$$

---

## 8. Must-Know Formulas

| Concept | Formula |
|---|---|
| Velocity | $\vec v = \vec r'(t)$ |
| Acceleration | $\vec a = \vec r''(t)$ |
| Velocity (Frenet) | $\vec v = \lvert\vec v\rvert\hat T$ |
| Acceleration (Frenet) | $\vec a = a_T\hat T + a_N\hat N$ |
| Tangential | $a_T = \dfrac{d}{dt}\lvert\vec v\rvert = \dfrac{\vec v\cdot\vec a}{\lvert\vec v\rvert}$ |
| Normal | $a_N = \sqrt{\lvert\vec a\rvert^2 - a_T^2} = \kappa\lvert\vec v\rvert^2 = \dfrac{\lvert\vec v\times\vec a\rvert}{\lvert\vec v\rvert}$ |
| Curvature | $\kappa = \dfrac{\lvert\vec v\times\vec a\rvert}{\lvert\vec v\rvert^3}$ |
| Radius of curvature | $\rho = \dfrac1\kappa$ |
| Centripetal form | $a_N = \dfrac{\lvert\vec v\rvert^2}{\rho}$ |

---

## Main Takeaway

$$\boxed{\vec v = \lvert\vec v\rvert\hat T} \qquad \boxed{\vec a = a_T\hat T + a_N\hat N}$$

Velocity points along the curve; acceleration does two jobs — $a_T$ changes **speed**, $a_N$ changes **direction**.

---

# Part IX — Multivariable Functions

> **Shift:** from one input ($y = f(x)$, a curve) to **many inputs** ($z = f(x,y)$, a surface; $w = f(x,y,z)$, visualized by level surfaces).
>
> **Core skill:** turn $f(x,y) = c$ or $f(x,y,z) = k$ into a recognizable shape (circle, ellipse, plane, cylinder, sphere).

## 1. Single vs Multivariable

$$y = f(x) \;\longrightarrow\; w = f(x_1, x_2, \dots, x_n)$$

Many independent inputs, **one** dependent output. Example: $V(x,y,z) = xyz$ is the volume of a box with sides $x, y, z$.

---

## 2. Domain and Range

- **Domain** = the set of allowed inputs. For $z = f(x,y)$, usually a region in the $xy$-plane.
- **Range** = the set of possible outputs (the $z$-values).

---

## 3. Functions of Two Variables = a Surface

$z = f(x,y)$ is a **3D surface**: the input $(x,y)$ gives a height $z$, so a full point on the surface is $(x, y, f(x,y))$.

$$\boxed{z = f(x,y) = \text{height of the surface above the point } (x,y)}$$

**Example:** $f(x,y) = 100 - x^2 - y^2$ is a downward-opening paraboloid with max height $100$ at the origin; $z$ drops as $x^2 + y^2$ grows.

---

## 4. Level Curves, Contour Curves & Contour Maps

These three are closely related but distinct:

| Term | Meaning |
|---|---|
| **Contour curve** | the actual slice on the 3D surface (intersection of $z = f(x,y)$ with the plane $z = c$) |
| **Level curve** | that slice **projected down** onto the $xy$-plane — the set where $f(x,y) = c$ |
| **Contour map** | a 2D drawing of level curves, each labeled by its height $c$ (like a topographic map) |

To find a level curve, set the function equal to a constant: $\;f(x,y) = c$, then simplify.

---

## 5. Worked Example — Level Curves

For $f(x,y) = 100 - x^2 - y^2$, set $f = c$:
$$100 - x^2 - y^2 = c \;\Rightarrow\; \boxed{x^2 + y^2 = 100 - c}$$

These are **circles** — the higher the height $c$, the smaller the circle:

| $c$ | equation | radius |
|---|---|---|
| $0$ | $x^2 + y^2 = 100$ | $10$ |
| $51$ | $x^2 + y^2 = 49$ | $7$ |
| $75$ | $x^2 + y^2 = 25$ | $5$ |

The contour map shows these circles labeled with their heights.

---

## 6. Functions of Three Variables = Level Surfaces

$w = f(x,y,z)$ has three inputs and one output. Its graph would live in 4D ($(x,y,z,w)$), which we can't draw — so we visualize it with **level surfaces**, setting $f(x,y,z) = k$.

**Example:** $f(x,y,z) = x^2 + y^2 + z^2$, set $= k$:
$$\boxed{x^2 + y^2 + z^2 = k}$$

These are **spheres** of radius $r = \sqrt{k}$:

| $k$ | radius |
|---|---|
| $1$ | $1$ |
| $4$ | $2$ |
| $9$ | $3$ |

---

## 7. Finding Domains — Common Restrictions

| Expression | Requires |
|---|---|
| $\sqrt{g(x,y)}$ | $g(x,y) \ge 0$ |
| $\dfrac{1}{g(x,y)}$ | $g(x,y) \ne 0$ |
| $\ln(g(x,y))$ | $g(x,y) > 0$ |

**Example:** $f(x,y) = \sqrt{9 - x^2 - y^2}$ needs $9 - x^2 - y^2 \ge 0$, i.e. $x^2 + y^2 \le 9$ — the **disk of radius 3**.

---

## 8. Question Types at a Glance

| Type | Do this | Example result |
|---|---|---|
| **Find domain** | apply the restrictions above | $\sqrt{9-x^2-y^2} \to$ disk $x^2+y^2 \le 9$ |
| **Find level curves** | set $f(x,y) = c$, simplify | $x^2 + y^2 = c \to$ circles |
| **Find level surfaces** | set $f(x,y,z) = k$, identify | $x^2+y^2+z^2 = k \to$ spheres |

---

## 9. Key Intuition & Formulas

| Dimension | Function | What you get |
|---|---|---|
| 1 input | $y = f(x)$ | a curve |
| 2 inputs | $z = f(x,y)$ | a surface |
| 3 inputs | $w = f(x,y,z)$ | use level surfaces (can't graph directly) |

**Must-know:**

$$\boxed{z = f(x,y)} \quad \boxed{(x, y, f(x,y))} \quad \boxed{f(x,y) = c \text{ (level curve)}} \quad \boxed{f(x,y,z) = k \text{ (level surface)}}$$

The main skill is turning $f(x,y) = c$ or $f(x,y,z) = k$ into a recognizable shape.

---

# Part X — Partial Differentiation

> **One rule:** $\boxed{\text{differentiate with respect to one variable while treating the others as constants.}}$
>
> It's ordinary differentiation with all but one variable **frozen**.

## 1. The Idea

For $z = f(x,y)$ there are two derivatives to ask about:

- $\dfrac{\partial f}{\partial x}$ — how $f$ changes as $x$ varies, **$y$ held constant**.
- $\dfrac{\partial f}{\partial y}$ — how $f$ changes as $y$ varies, **$x$ held constant**.

---

## 2. Notation

The symbol $\partial$ is read "partial." Common shorthands:
$$\boxed{\frac{\partial f}{\partial x} = f_x} \qquad \boxed{\frac{\partial f}{\partial y} = f_y} \qquad \boxed{\frac{\partial z}{\partial x} = z_x} \qquad \boxed{\frac{\partial z}{\partial y} = z_y}$$

---

## 3. How to Compute

$$\boxed{\text{The variable you're NOT differentiating with respect to acts like a constant.}}$$

**Example:** $f(x,y) = x^2 y + 3xy^2$.

- $f_x = 2xy + 3y^2$ (treat $y$ as constant)
- $f_y = x^2 + 6xy$ (treat $x$ as constant)

---

## 4. Limit Definition

$$f_x(x_0, y_0) = \lim_{h\to 0}\frac{f(x_0 + h, y_0) - f(x_0, y_0)}{h} \qquad (y \text{ fixed})$$
$$f_y(x_0, y_0) = \lim_{k\to 0}\frac{f(x_0, y_0 + k) - f(x_0, y_0)}{k} \qquad (x \text{ fixed})$$

---

## 5. Geometric Meaning

On the surface $z = f(x,y)$:

- $f_x$ = slope of the surface in the **$x$-direction**.
- $f_y$ = slope of the surface in the **$y$-direction**.

They tell you how steep the surface is if you move along one direction only.

---

## 6. Worked Example (chain rule inside)

$f(x,y) = \sin\!\left(\dfrac{x}{1+y}\right)$.

**$f_x$** (treat $y$ as constant, inner derivative $\tfrac{1}{1+y}$):
$$\boxed{f_x = \frac{1}{1+y}\cos\!\left(\frac{x}{1+y}\right)}$$

**$f_y$** (treat $x$ as constant, inner derivative $\tfrac{\partial}{\partial y}\tfrac{x}{1+y} = -\tfrac{x}{(1+y)^2}$):
$$\boxed{f_y = -\frac{x}{(1+y)^2}\cos\!\left(\frac{x}{1+y}\right)}$$

---

## 7. Second-Order Partials

Differentiate $f_x$ and $f_y$ again — four of them:

| Symbol | Means | In words |
|---|---|---|
| $f_{xx} = (f_x)_x$ | $\partial_x$ then $\partial_x$ | $x$ twice |
| $f_{xy} = (f_x)_y$ | $\partial_x$ then $\partial_y$ | $x$ first, then $y$ |
| $f_{yx} = (f_y)_x$ | $\partial_y$ then $\partial_x$ | $y$ first, then $x$ |
| $f_{yy} = (f_y)_y$ | $\partial_y$ then $\partial_y$ | $y$ twice |

> ⚠️ **Subscript order:** $f_{xy}$ means differentiate by $x$ **first**, then $y$ — the variable closest to $f$ goes first. In Leibniz notation this flips: $f_{xy} = \dfrac{\partial^2 f}{\partial y\,\partial x}$.

---

## 8. Worked Example — Second Order

$f(x,y) = x\cos y + ye^x$. First: $f_x = \cos y + ye^x$, $\;f_y = -x\sin y + e^x$.

| | Result |
|---|---|
| $f_{xx}$ | $ye^x$ |
| $f_{xy}$ | $-\sin y + e^x$ |
| $f_{yx}$ | $-\sin y + e^x$ |
| $f_{yy}$ | $-x\cos y$ |

Note $f_{xy} = f_{yx}$. ✓

---

## 9. Mixed Derivative Theorem (Schwarz / Clairaut)

$$\boxed{f_{xy} = f_{yx}} \qquad\Longleftrightarrow\qquad \frac{\partial^2 f}{\partial y\,\partial x} = \frac{\partial^2 f}{\partial x\,\partial y}$$

**Holds whenever the mixed partials are continuous** — so for nice functions, order doesn't matter.

This extends to higher orders: the order can be rearranged as long as each variable is differentiated the **same number of times**:
$$\boxed{f_{yyx} = f_{yxy} = f_{xyy}} \quad (\text{two } y\text{'s, one } x)$$

---

## 10. Solving Procedure & Mental Model

- **$f_x$:** freeze $y$, differentiate normally in $x$.
- **$f_y$:** freeze $x$, differentiate normally in $y$.
- **Second order:** find $f_x, f_y$ first, then differentiate again for $f_{xx}, f_{xy}, f_{yx}, f_{yy}$.

**Mental model** — for $f(x,y) = x^2 y + 5y$: when finding $f_x$, treat $y$ as a number → $f_x = 2xy$; when finding $f_y$, treat $x$ as a number → $f_y = x^2 + 5$.

---

# Part XI — Applications: Laplace & Wave Equations

> **Why second partials matter:** they appear in **PDEs** that model real physics. A PDE relates a function's partial derivatives, so the task is usually: $\boxed{\text{compute the needed second partials and check the equation holds.}}$

## 1. The Laplace Equation

$$\boxed{f_{xx} + f_{yy} = 0} \quad (\text{2D}) \qquad\qquad \boxed{f_{xx} + f_{yy} + f_{zz} = 0} \quad (\text{3D})$$

A function satisfying Laplace's equation is called **harmonic**. These describe **steady-state** systems:

| Situation | Meaning |
|---|---|
| heat conduction | temperature no longer changing in time |
| fluid flow | smooth, stable flow |
| electrostatic potential | field with no charge source in that region |

**Intuition:** $f_{xx} + f_{yy} = 0$ means the function is *balanced* — not building up or dipping overall at that point.

---

## 2. Checking if a Function Is Harmonic

**Example:** $f(x,y) = x^2 - y^2$.

$$f_x = 2x \;\Rightarrow\; f_{xx} = 2, \qquad f_y = -2y \;\Rightarrow\; f_{yy} = -2$$
$$f_{xx} + f_{yy} = 2 + (-2) = 0 \;\Rightarrow\; \boxed{x^2 - y^2 \text{ is harmonic}}$$

---

## 3. The 1D Wave Equation

$$\boxed{\frac{\partial^2 \omega}{\partial t^2} = c^2\frac{\partial^2 \omega}{\partial x^2}} \qquad\Longleftrightarrow\qquad \boxed{\omega_{tt} = c^2\,\omega_{xx}}$$

| Symbol | Meaning |
|---|---|
| $\omega$ | wave height |
| $x$ | position along the string |
| $t$ | time |
| $c$ | wave speed |

**Meaning:** $\omega_{tt}$ is the time-acceleration of the wave height, $\omega_{xx}$ is the spatial curvature of its shape. So $\boxed{\text{time acceleration} \propto \text{spatial curvature}}$ — curvature in the string is what creates motion.

---

## 4. Classic Proof — $\omega = f(x - ct) + g(x + ct)$ Solves the Wave Equation

$f(x-ct)$ is a wave moving one way, $g(x+ct)$ a wave moving the other. Substitute $u = x - ct$ and $v = x + ct$, so $\omega = f(u) + g(v)$, with:
$$u_t = -c, \quad v_t = c, \qquad u_x = 1, \quad v_x = 1$$

**Time derivatives** (chain rule):
$$\omega_t = -c\,f'(u) + c\,g'(v) \;\Rightarrow\; \omega_{tt} = c^2 f''(u) + c^2 g''(v) = c^2[f''(u) + g''(v)]$$

**Space derivatives:**
$$\omega_x = f'(u) + g'(v) \;\Rightarrow\; \omega_{xx} = f''(u) + g''(v)$$

**Compare:** $c^2\omega_{xx} = c^2[f''(u) + g''(v)] = \omega_{tt}$, so $\boxed{\omega_{tt} = c^2\omega_{xx}}$ ✓

---

## 5. Solving the Two Question Types

**Type 1 — "Show $f$ satisfies Laplace's equation":** compute $f_{xx}$ and $f_{yy}$ (and $f_{zz}$ in 3D), then check the sum is $0$.

**Type 2 — "Show $\omega$ satisfies the wave equation":** compute $\omega_{tt}$ and $\omega_{xx}$, then check $\omega_{tt} = c^2\omega_{xx}$.

For traveling-wave forms, substitute $u = x - ct,\; v = x + ct$ and chain-rule through.

---

## 6. Must-Know Formulas

| Concept | Formula |
|---|---|
| Laplace (2D) | $f_{xx} + f_{yy} = 0$ |
| Laplace (3D) | $f_{xx} + f_{yy} + f_{zz} = 0$ |
| Harmonic function | any solution of Laplace's equation |
| Wave equation | $\omega_{tt} = c^2\omega_{xx}$ |
| Traveling-wave substitution | $u = x - ct,\; v = x + ct$ |
| Chain-rule factors | $u_t = -c,\; v_t = c,\; u_x = 1,\; v_x = 1$ |

**Takeaway:** second partials model real systems — $f_{xx} + f_{yy} = 0$ for balanced steady states (heat, fluids, potential), $\omega_{tt} = c^2\omega_{xx}$ for waves. The method is always: $\boxed{\text{differentiate carefully, substitute, prove LHS = RHS.}}$
