// Chapter 4

/*
Loop Control Instruction

Why loops: Theses are used when we need to execute a set of
instructions over and over again. e.g printing 1 - 100. printing
first 100 even numbers e.t.c

Loops make it easy for a programmer to tell a computer to
execute certain instructions repeatedly.

Types of loops:
1. While loop //used too
2. do-while loop //rarely used
3. for loop //widely used

//WHILE LOOP

syntax

While(condition is true){
    //code              >>Block keeps executing as long as the condition is true!
    //code
}
if the condition never becomes false, we get what is called an infinite loop.

//INCREMENT AND DECREMENT OPERATORS
i++ i is increased by 1
i-- i is decreased by 1

printf("--i = %d", --i); //This first decrements the value of i and then prints it.

printf("i-- = %d", i--); //first prints i and the decrements it.

+++ operator doesnt exist

+= is a COMPOUND ASSIGNED OPERATOR
just like -=, +=, /=, %=


//DO-WHILE LOOP
Is very similar to the while loop. While loop checks the condition then executes the code where as the do-while
loop executes the code then checks for the condition.

syntax

do{
    //code;
    //code;
} while(condition)

It is a loop which executes atleast once


//FOR-LOOP

syntax
for(initialize; test; increment/decrement)
{
    //code;
    //code;
    //code;
}

initlialize -> setting a loop counter to an initial value
test -> checking a condition
increment/decrement -> updating the loop counter

Decrementing loop
for(i=5; i; i--)
printf("%d\n", i);

This for loop will keep running till i becomes 0


BREAK AND CONTINUE STATEMENTS IN C:
-> Break
is used to exit the loop irrespective of whether the 
condition is true or fale. 

Means stop the loop and execute the next thing. 

-> Continue 
*/