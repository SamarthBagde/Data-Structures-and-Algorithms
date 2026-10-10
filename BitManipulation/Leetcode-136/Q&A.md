### Q. Single Number

Given a nums arra, every number in array apperes twice except one number that apperes once.
So you need to return that number

Ex :
```
[4, 1, 2, 1, 2]

=> 4
```


### Ans :

Using `XOR` operator

If you perform `XOR` for same number you get zero

Ex : 2 ^ 2 = 0

So if you `XOR` all numbers in array  at last you remain with number which apperes only once in array

### Complexity : 
```
Time:  O(n)
Space: O(1)
```