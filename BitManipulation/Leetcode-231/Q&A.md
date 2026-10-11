### Q. Power of Two

Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

Ex :
```
Input: n = 16
Output: true
Explanation: 24 = 16
```

### Ans : 

Do  `N & (N - 1)` 
- if ans is 0 then n is power of 2

