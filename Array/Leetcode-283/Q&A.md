### Q. Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Ex :
```
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
```


### Ans : 

Using Two Pointers

Take two variables 
- `i` -> position where the next non-zero element should go.
- `j` -> scans the entire array.

Whenever `nums[j]` is non-zero, put it at `nums[i]` and increment `i`.

After scanning, fill the remaining positions with 0.


### Complexity :

```
Time: O(n)
Space: O(1)
```