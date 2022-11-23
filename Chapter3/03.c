//Conditionals
/*
Every decision we make depends on a condition being made. In C language, we must be able
to execute instructions on a condition(s) being met.

There are two types of decision making instructions in C
1. If-else statement
2. switch stamement

Relational operators in C
Theses are used to evaluate consitions(true or false) inside if statements.
e.g: ==, >=, >, <, <=, !=

note: = is used for assignment
      == is used for equality check

IMPORTANT: The condition can be any expression. In C, a non-zero value is considered
to be true!!!!!!!!!!!

Logical Operators in C
&&   || and !  are logical operators in C.

______|________
|     |        |

AND, OR and NOT

&& -> AND -> is true when both conditions are true

   1 and 0 is evaluated as false
   0 and 0 is evaluated as false
   1 and 1 is evaluated as true   | Remember any non-zero number is true in C

|| -> OR -> is true when atleast one of the conditions is true

   1 or 0 is evaluated as true
   1 or 1 is evaluated as true
   0 or 0 is evaluated as false

! -> NOT -> returns true if given false and false if given true
   !(3==3) is evaluated as false
   !(3>30) is evaluated as true

As the number of conditions increases, the level of indemnation increases. This reduces
readability. Logical operators come to the rescue in such cases.

else if clause
   Instead of using multiple if statemnts, we can also use 'else if' along with 'if' thus forming an if-else if-else ladder.
   Using if-else if-else reduces indents
   the last 'else' is optional
   Also, there can be any number of 'else if'

   NOTE: Last 'else' is executed if all previous conditions fail

Operator Precedence
   Priority | Operator
   1.           !
   2.         *, /, %
   3.          +,-
   4.         <>,<=,>=
   5.          ==, !=
   6.          &&
   7.          ||
   8.          =

Conditional Operators
  A short hand if-else can be written using the conditional or termary operators.

Swicth case control instruction
  This is used when we have to make a choice between a number of alternatives
  for a given variable. 
  switch(interger-expression)

e.g 
#include<stdio.h>

int main(){
    int age = 24; //try with 26, 27 e.t.c
    switch (age)
    {
    case 24:
        printf("You are 24");
        break;
    case 25:
        printf("You are 25");
        break;
    case 26:
        printf("You are 26");
        break;
    case 27:
        printf("You are 27");
        break;
    case 28:
        printf("You are 28");
        break;

    default: //will be executed if no case matches
        printf("No case matched");
        break;
    }
    return 0;
}

!!!!IMPORTANT NOTES!!!!
1. We can use switch-case statements even by writing cases in any order
of our choice. (not nescessarily ascending or descending).

2. Char values are allowed as they can be easily evaluated to an integer.

3. A swicth can occur within another but in practice, this is rarely done.



*/