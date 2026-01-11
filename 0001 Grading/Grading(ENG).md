## Grading

**Time limit:** 1 second
**Memory limit:** 64 MB

In a computer science class at a school, students are graded using the following components:

* Assignment score: 30 points
* Midterm exam: 30 points
* Final exam: 40 points

The total score is 100 points.

After the semester ends, the registration office needs to calculate each student’s grade based on these scores. Since there is no existing program to do this, you are asked to write a program to determine the student’s grade.

---

### Input

The input consists of three lines:

* Line 1: An integer **a** $(0 ≤ a ≤ 30)$, the assignment score
* Line 2: An integer **b** $(0 ≤ b ≤ 30)$, the midterm exam score
* Line 3: An integer **c** $(0 ≤ c ≤ 40)$, the final exam score

---

### Output

Print one line containing the student’s grade, determined by the total score using the following criteria:

| Total Score | Grade |
| ----------- | ----- |
| 80 – 100    | A     |
| 75 – 79     | B+    |
| 70 – 74     | B     |
| 65 – 69     | C+    |
| 60 – 64     | C     |
| 55 – 59     | D+    |
| 50 – 54     | D     |
| 0 – 49      | F     |

---

### Example

**Input**

```
25
25
30
```

**Output**

```
A
```

---

### Source

Programming.in.th (Northern Series)

---
