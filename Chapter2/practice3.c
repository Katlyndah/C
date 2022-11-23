/*QN. 3.
Write a program to check whether a number is divisible by 97 or not.
*/
#include <stdio.h>

int main()
{
    int a = 194;
    int b = 195;
    printf("%d", a % 97); // remainder is 0 therefore, it is divisible
    printf("%d", b % 97); // remainder is not 0 therefore, it is not divisible

    // to take input from user
    int c;
    scanf("Enter the value to be checked\n");
    scanf("%d", &c);

    printf("The remainder is %d", c % 97);
    return 0;
}