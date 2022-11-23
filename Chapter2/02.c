//a c program is a set of instructions just like a recipe

/*
Types of instructions in C
1. Type declaration instruction
e.g
int a;
float b;

other variations;
int i = 10; int j = i; int a = 2; int j = a+j-i;

float b = a+3; float a = 1.1; => error!! as we are trying to use a before defining it. 

int a, b, c, d;
a = b = c = c = 30;
This means a,b,c and d will all equal to 30. => shortcut

2. Arithmetic instruction
int i = (3 * 2) + 1; plus and times are operators and the numbers are operands.

operands can be int, float e.t.c
+ - / * are operants.

e.g
int b = 2, c = 3;
int z = b*c; is legal and won't return an error.
int z; b*c = z; is illegal and will return an error. 

% => modular division operator.
returns the remainder.
cannot be applied on floating point numbers.
%sign is the same as of numerator(-5%/2 = -1)
          ____|____
         |         |
      5%2 = 1    -5%2 = -1

No operator is assumed to be present.
int i = ab  is invalid
int i = a*b is valid!

There is no operator to perform exponentiation in C. However, we can use
pow(x,y) from <math.h> - more later!

3. Control  instruction

Determines the flow of control in a program.
The four types of control instructions in C are:
i. Sequence control instruction
ii. Decision control instruction
iii. Loop control instruction
iv. Case control instruction

*/




/*
Type conversion

An arithmetic operation between
int and int => int
int and float => float
float and float => float

5/2 = 2 but 5.0/2 = 2.5 Important!!!!!
2/5 = 0 but 2.0/5 = 0.4 Important!!!!!

NOTE:
int a = 3.5; In this case 3.5(float) will be demoted to 
3(int) becasue a is not able to store floats.

float a =8; a will store 8.0. 8 will be promoted to a float 8.0.
*/