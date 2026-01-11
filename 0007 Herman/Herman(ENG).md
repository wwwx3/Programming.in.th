## Herman

**Time limit:** 1 second
**Memory limit:** 64 MB

In taxicab geometry, distance is measured by traveling along grid-like city streets, similar to how a taxi moves.
For two points
$(T_1(x_1, y_1))$ and $(T_2(x_2, y_2))$, the taxicab distance is defined as

$$[
D_T(T_1, T_2) = |x_1 - x_2| + |y_1 - y_2|
]$$

In standard Euclidean geometry, the distance is

$$[
D_E(T_1, T_2) = \sqrt{(x_1 - x_2)^2 + (y_1 - y_2)^2}
]$$

To define a taxi’s service area, a center point and a radius (R) are given.
Your task is to compute the area of this region using both Euclidean geometry and taxicab geometry.

---

### Input

* Line 1: An integer **R** $(0 \le R \le 10{,}000)$, the radius

---

### Output

* Line 1: The area using **Euclidean geometry**
* Line 2: The area using **taxicab geometry**

Print the results as real numbers.

---

### Examples

**Input**

```
1
```

**Output**

```
3.141593
2.000000
```

**Input**

```
21
```

**Output**

```
1385.442360
882.000000
```

**Input**

```
42
```

**Output**

```
5541.769441
3528.000000
```

---

### Source

Croatian Open Competition in Informatics
Contest 1 – October 28, 2006

---
