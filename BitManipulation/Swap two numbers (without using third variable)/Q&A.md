### Q. Swap two numbers without using third variable

Ex :
```
Before swap
a = 10. b = 20

After swap

a = 20, b = 10
```

### Ans :

We can use XOR operator

a = a ^ b<br>
b = a ^ b    (i.e (a ^ b) ^ b = a)<br>
a = a ^ b    (i.e (a ^ b) ^ b = b)  here b is already a