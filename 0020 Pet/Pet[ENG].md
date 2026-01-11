## Pet

**Time limit:** 1 second  
**Memory limit:** 32 MB  

In the TV show "Dinner For Five", five contestants compete by cooking food. Each day, one contestant cooks, and the other four contestants give a score from 1 to 5.

The total score for a contestant is the sum of the four scores they receive. The contestant with the highest total score wins.

Your task is to determine the winner and their total score.

---

### Input  
Five lines are given.  
On line `i`, there are four positive integers representing the scores received by contestant `i`.  
Each score is between 1 and 5.

It is guaranteed that there is exactly one winner.

---

### Output  
Print two integers:  
- the number of the winning contestant  
- the total score of that contestant  

---

### Examples  

**Input**
```

5 4 4 5
5 4 4 4
5 5 4 4
5 5 5 4
4 4 4 5

```

**Output**
```

4 19

```

**Input**
```

4 4 3 3
5 4 3 5
5 5 2 4
5 5 5 1
4 4 4 4

```

**Output**
```

2 17

```

---

### Source  
COCI 2008/2009, Contest #3 – December 13, 2008

---
