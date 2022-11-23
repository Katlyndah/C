#include<stdio.h>

int main(){
    int age = 45;
    int placeCode = 12;

    //Scenario 1 | This won't check statements if the one before is true
    
    if(age>18){
        printf("You are eligible to drive");
    }
    else if(age>15){
        printf("You are not eligible to drive but we will check for a toy vehicle for you!");
    }
    else{
        printf("Sorry you are a kid and cannot drive");
    }
    return 0;

    //Scenario 2 | This will check all statements and print if they are true
    
    /*if(age>18){
        printf("You are eligible to drive");
    }
    if(age>15){
        printf("You are not eligible to drive but we will check for a toy vehicle for you!");
    }
    if(age<=15){
        printf("Sorry you are a kid and cannot drive");
    }
    return 0;*/

}