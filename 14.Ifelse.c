#include <stdio.h>

int main()
{

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are now signed up!");
    }
    else if (age < 0)
    {
        printf("\nYou haven't been born yet!");
    }
    else if (age == 0)
    {
        printf("\nYou can't sign up! You were just born!");
    }
    else
    {
        prinf("\nYou are too young to sign up!");
    }

    return 0;
}