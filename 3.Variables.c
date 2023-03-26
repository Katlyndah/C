#include<stdio.h>

int main(){

    //Variables are allocated space and memory to store a value
    //data type + variable name 
    //refer to variable name to access stored values

    //declaration
    int x;

    //initialization
    x = 123;

    //combined
    int y = 321;

    int age = 21; //integer %d
    float gpa = 2.25; //floating point number %f
    char grade = 'C'; //stores single character  %c
    char name[] = "Kat"; //array of characters.  %s   there are no strings in c
    
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("You're average grade is %c\n", grade);
    printf("You're gpa is %f\n", gpa);

    return 0;
}