#include<stdio.h>
int main()
{
    int a = 7;//variable | int constants = -1, 6, 7, 9 e.tc
    char harry2 = 'c'; //this is a character. '' is for characters
    float harry3 = 5.23; // this is a real constant
    int _b = 9;//variable

	printf("Hello world\n");
	return(0);
}

/*
>>Variables 
is a container which stores a value | stores a constant
i.e a = 3, b = 4.7, c = 'A'. c is assigned a char A

rules for naming variables.
you can start with either an alphabet or an underscore. 
no spaces.
no commas otherwise you'll get errors.
no special symbols save for underscore.
names are case sensitive.

>>Constants
an entity whose value cannot be changed.
variables are not constants because they can be changed. 

types of constants
1. integer constants
2. Real constants
3. Character constants

>>Keywords
reserved words whose meaning is already known to the compiler. 
there are 32 keywords in c programming:
auto, double, int, struct, break, long, else, switch, case, return,
enum, typedef, char, register, exterm, union, const, short, float,
unsigned, continue, signed, for, void, default, sizeof, goto, volatile,
do, static, if, while.
*/