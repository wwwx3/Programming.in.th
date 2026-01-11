## Kornislav

**Time limit:** 1 second  
**Memory limit:** 32 MB  

Kornislav wants to form the largest possible *closed* rectangle using four given integers as walking lengths.

He starts walking in a straight line, then turns 90 degrees, walks again, and repeats until he has used all four lengths as the four sides of a rectangle. Each of the four sides must use a different one of the given numbers (values may repeat).  
Because the order of choosing the numbers can vary, some orders may not form a closed shape.

Your task is to compute the area of the largest rectangle that can be formed.

---

### Input  
One line containing four integers **A, B, C, D** such that  
$$\[
0 < A, B, C, D < 100
\]$$

---

### Output  
Print one integer: the maximum possible area of a closed rectangle.

---

### Examples  

| Input | Output |
|------|--------|
| `1 2 3 4` | `3` |
| `4 4 3 4` | `12` |

---

### Source  
COCI 2008/2009, Contest 2 – November 15, 2008

---
