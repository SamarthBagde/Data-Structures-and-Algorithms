### Q. Minimum Bit Flips to Convert Number

Given a `start` and `goal`, two positive int. Your task is to find how many bits you need to flips to convert `start` into `goal`

Ex :
```
start = 10          goal = 7
(1, 0, 1, 0)        (0, 1, 1, 1)   --> 3 bits (0, 2, 3)


start = 3       goal = 4
(0, 1, 1)       (1, 0, 0)   --> 3 bits (0, 1, 2)
```


### Ans : 

Do XOR of start and goal, and count number of set bits in result

```
start = 10          1 0 1 0
goal = 7          ^ 0 1 1 1
                ----------------
                    1 1 0 1    --> 3 bit's
```

### Complexity : 
```
Time:  O(log(start ^ goal))
Space: O(1)
```