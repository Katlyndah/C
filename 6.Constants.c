#include<stdio.h>

int main(){
    //constants = fixed value that cannot be altered by the program during its execution

    const float PI = 3.14159; //save constants in an uppercase name

    float PI = 4.5; //this will return an error when run

    printf("%f", PI);
     
    return 0;
}