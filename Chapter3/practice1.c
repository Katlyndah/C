/*
QN:01
What will be the output of this program

int a = 10;
if(a = 11){
   printf("I am 11");
}
else{
   printf("I am not 11");
}
*/
#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)
    {
        printf("I am 11");
    }
    else
    {
        printf("I am not 11");
    }
    return 0;
}

// The output is >> I am 11
// This is because line 17 will return a non-zero value. It is not a booleon expression