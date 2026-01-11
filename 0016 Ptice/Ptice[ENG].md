## Ptice

**Time limit:** 1 second  
**Memory limit:** 32 MB  

Adrian, Bruno, and Goran take a multiple-choice test with **N** questions. Each answer is one of `A`, `B`, or `C`. Since they are not confident, they guess answers using fixed repeating patterns:

- Adrian repeats: `A B C A B C ...`
- Bruno repeats: `B A B C B A B C ...`
- Goran repeats: `C C A A B B C C A A B B ...`

Given the correct answers, determine:
1) the highest score achieved by any of them, and  
2) the name(s) of the person(s) who achieved that score.

If multiple people tie for the highest score, print their names in alphabetical order, one per line.

---

### Input  
- Line 1: An integer **N** $\((1 \le N \le 100)\)$ 
- Line 2: A string of length **N** consisting only of `A`, `B`, and `C`, representing the correct answers

---

### Output  
- Line 1: An integer **M**, the maximum score among the three  
- Next lines: The name(s) of the person(s) with score **M**, in alphabetical order, one per line

---

### Examples  

**Input**
```

6
BBAACC

```

**Output**
```

3
Bruno

```

**Input**
```

9
AAAABBBBB

```

**Output**
```

4
Adrian
Bruno
Goran

```

---

### Source  
COCI 2008/2009, Contest 1 – October 18, 2008

---
