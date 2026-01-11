## Matrix Addition

**Time limit:** 1 second
**Memory limit:** 64 MB

You are given two matrices of size (m \times n). Your task is to compute their sum.

---

### Input

* Line 1: Two positive integers **m** and **n** ($1 \le m, n \le 100$), the dimensions of the matrices
* Lines 2 to (m + 1): Each line contains **n** integers representing the first matrix
* Lines (m + 2) to (2m + 1): Each line contains **n** integers representing the second matrix

Each matrix element satisfies
$-2{,}000{,}000{,}000 \le Ai,j \le 2{,}000{,}000{,}000$

---

### Output

Print **m** lines. Each line should contain **n** integers representing the resulting matrix, formatted the same way as the input.

---

### Example

**Input**

```
3 3
1 2 3
3 2 1
1 3 2
1 1 1
1 1 1
1 1 1
```

**Output**

```
2 3 4
4 3 2
2 4 3
```

---

### Source

Programming.in.th (Northern Series)

---
