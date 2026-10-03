### Q. Second largest element in an array without using sorting

Given an array, find the second largest element without sorting the array.

Ex:
```
Input:  [10, 5, 8, 20, 15]

Largest = 20
Second largest = 15

Output: 15
```

### Ans:

Maintain two variables 
- `largest` → largest element seen so far
- `secondLargest` → second largest element seen so far

Loop through the array :

For every element:

- If `arr[i] > largest`
    - `secondLargest = largest`
    - `largest = arr[i]`
- Otherwise, if `arr[i] > secondLargest` and `arr[i] != largest`
    -   `secondLargest = arr[i]`


### Complexity : 
```
Time:  O(n)
Space: O(1)
```