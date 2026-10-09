### Q. Count the number of set bits

Given a number n, you need to retrun number of set bits in n

Ex :
```
n = 16

(1, 0, 0, 0, 0)

there is only 1 set bit
```


### Ans 1 :

We will run loop until n > 1, 

in that do n & 1, if its is one then increase the count of ans else skip and do right shit (>>) of n by 1 

And at last return ans

### Complexity : 
```
Time:  O(number of bits in n)
Space: O(1)
```

<hr>

### Ans 2 :

We can do `n & (n-1)` until  n is not equal to 0, and count of how many time we done this is count of set bits;

So, by doing this we are clearing last set bit (right most), by count this operation we can get count to set bits

### Complexity : 
```
Time:  O(number of set bits in n)
Space: O(1)
```