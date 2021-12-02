# Introduction to Programming_1

NTHU: 11020CS 135500

Online Course: https://ocw.nthu.edu.tw/ocw/index.php?page=course&cid=134&

Topic: Sieve-of-Eratosthenes

Reference: https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

Pseudocode algorithm Sieve of Eratosthenes is

```javascript=
    input: an integer n > 1.
    output: all prime numbers from 2 through n.

    let A be an array of Boolean values, indexed by integers 2 to n,
    initially all set to true.
    
    for i = 2, 3, 4, ..., not exceeding √n do
        if A[i] is true
            for j = i^2, i^2+i, i^2+2i, i^2+3i, ..., not exceeding n do
                A[j] := false

    return all i such that A[i] is true.
```
