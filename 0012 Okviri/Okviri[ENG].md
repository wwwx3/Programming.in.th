## Okviri

**Time limit:** 1 second  
**Memory limit:** 32 MB  

This problem decorates an uppercase word using diamond-shaped frames around each letter.

There are two frame styles:

### Peter Pan frame (default)
A letter `X` framed with Peter Pan style looks like:
```

..#..
.#.#.
#.X.#
.#.#.
..#..

```

### Wendy frame (every 3rd letter)
For letters in positions that are multiples of 3 (3rd, 6th, 9th, ...), use a Wendy frame instead:
```

..*..
.*.*.
*.X.*
.*.*.
..*..

```

Frames for adjacent letters overlap.  
If a Wendy frame overlaps a Peter Pan frame, the Wendy frame takes priority (it appears “in front”).

You must print the decorated result as 5 lines.

---

### Input  
One line containing an uppercase string of length at most 15.

---

### Output  
Print exactly 5 lines showing the decorated word.

---

### Examples

**Input**
```

A

```

**Output**
```

..#..
.#.#.
#.A.#
.#.#.
..#..

```

**Input**
```

DOG

```

**Output**
```

..#...#...*..
.#.#.#.#.*.*.
#.D.#.O.*.G.*
.#.#.#.#.*.*.
..#...#...*..

```

**Input**
```

ABCD

```

**Output**
```

..#...#...*...#..
.#.#.#.#.*.*.#.#.
#.A.#.B.*.C.*.D.#
.#.#.#.#.*.*.#.#.
..#...#...*...#..

```

---

### Source  
Croatian Open Competition in Informatics  
Contest 1 – October 28, 2006

---
