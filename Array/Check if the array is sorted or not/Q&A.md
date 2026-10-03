### Q. Check if the array is sorted or not ?

Given an array, determine whether its elements are arranged in ascending order.

Ex : 
```
[1, 2, 3, 4, 5] -> yes

[1, 3, 2, 4, 5] -> no
```

### Ans : 

Loop through array from 1 to n

and check that `arr[i-1] < arr[i]`
- if yes then that element is in correct order
- if not, then array is not sorted in asc order


### Complexity
```
Time: O(n)
Space: O(1)
```