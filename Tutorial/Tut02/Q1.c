/*
1. Assume the following declaration:
int number;
int *p;
Assume also that the address of number is 7700 and the address of p is 3478. That is,

3478 ||||| p
.
.
.
7700 ||||| number

For each case below, determine the value of

(a) number 
(b) &number 
(c) p 
(d) &p 
(e) *p

All of the results are cumulative.
(i) p = 100; number = 8
    number = 8
    &number = 7700
    p = 100
    &p = 3478
    *p = undefined (value at memory address 100)

(ii) number = p
    number = 100
    &number = 7700
    p = 100
    &p = 3478
    *p = undefined (value at memory address 100)

(iii) p = &number
    number = 100
    &number = 7700 (now points to number)
    p = 7700
    &p = 3478
    *p = 100 (value of number)

(iv) *p = 10
    number = 10 (modified via *p)
    &number = 7700
    p = 7700
    &p = 3478
    *p = 10 (updated value of number)
    
(v) number = &p
    number = 3478 (address of p stored as integer)
    &number = 7700
    p = 7700
    &p = 3478
    *p = 3478 (value at 7700 is now 3478, which is number)
    
(vi) p = &p
    number = 3478
    &number = 7700
    p = 3478 (now points to itself)
    &p = 3478
    *p = 3478 ( value at 3748 is p itself, creating a self-referential pointer)
*/