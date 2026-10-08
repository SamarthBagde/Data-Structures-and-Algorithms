## Q1. Check if the ith bit is set or not

Ex : 
```
N = 13 and i = 2

=> true, second bit is set 

(1, 1, 0, 1)  -> 13 in binary 
 3  2  1  0   -> bit number
```

### Ans :

- using left shift :

    do left shift of 1 by i `(i.e 1 << i)` and & with N, after soing this  <br>
    if number is greater that 0 it menas bit is set <br>
    or else bit is not set

    ```cpp
    int N = 13, i = 2;
    int ans = (N >> i) & 1;

    if(ans == 1){
        return 1; //bit is set
    }else{
        return 0; // bit is not set
    }
    ```

        
- using right shift :

    do right shift of N by `(i.e N >> i)` and then & it with 1, after doing this <br>
    if you get 1 then bit is set <br>
    or else bit is not set

    ```cpp
    int N = 13, i = 2;
    int ans = (1 << i) & N;

    if(ans > 0){
        return 1; //bit is set
    }else{
        return 0; // bit is not set
    }
    ```


## Q2. Set the ith bit

You have given N and i, you need to set ith bit in number N

Ex :
```
N = 9      i = 2

(1, 0, 0, 1) --> (1, 1, 0, 1)
 3, 2, 1, 0       3, 2, 1, 0
```

### Ans :

Do left shift of 1 by 1 and then perform OR ( | ) operator with N

```cpp
int N = 9, i = 2;

return N | (1 << i)
```


## Q3. Clear ith bit

You have give N and i, you need to clear the ith bit in N

Ex :
```
N = 13      i = 2

(1, 1, 0, 1) --> (1, 0, 0, 1)
```

### Ans : 

Do left shift of 1 by i, take negation of it and then perform AND (&) with N

```cpp
int N = 13, i = 2;

return n & (~(1 << i))
```


## Q4. Toggle the ith bit

Ex :
```
N = 13      i = 1

(1, 1, 0, 1) --> (1, 1, 1, 1)
```

### Ans :
Do left shift of 1 by i and then perform XOR with N

```cpp
int N = 13, i = 1;

return N ^ (1 << i);
```


## Q5. remove the last set bit (Right most)

Ex :
```
N = 12

(1, 1, 0, 0) --> (1, 0, 0, 0)

N = 16

(1, 0, 0, 0, 0) --> (0, 0, 0, 0, 0)
```

### Ans

```
N = 16              => N = 15
(1, 0, 0, 0, 0)     => (0, 1, 1, 1, 1)

-----------------------------------------

N = 40              => N = 39
(1, 0, 1, 0, 0, 0)  => (1, 0, 0, 1, 1, 1)
```

Observation :

Here if we do N-1 then first set bit in n become clear and all other bits on its right become 1

So, if we do n-1 and then AND (&) it with N, then last set bit is removed 

```cpp
int N = 16;

return N & (N-1);
```

## Q6. Check if number is even or odd

### Ans :

Do AND (&) of N and 1 

- if ans is 1 then N is odd
- if 0 then N is even

```
N = 10

    1 0 1 0
  & 0 0 0 1
 ------------
    0 0 0 0    --> N is even

```


```cpp
int N = 10;

int ans = N & 1;

return ans ? "odd" : "even";
```


## Q7. Check if a number is power of 2

Given a number `N`, check whether N can be written as `2^x` for some non-negative integer `x`

Ex :
```
2  = 2^1  → Power of 2
16 = 2^4  → Power of 2

6  -> not power of 2
```

### Ans :

Do `N & (N - 1)`

- if ans is 0 then its power of 2

```cpp
int N = 16;

return N & (N - 1) ? 'not power of 2' : 'power of 2'
```

## Q8. Find 2^n 

### Ans :

```cpp
return 1 << N; 
```


## Q9. Multiply or Divide a number by 2^k

### Ans :

```
multiply -->  x << k (left shift)

divide --> x >> k (right shift)
```