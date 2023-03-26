#include <stdio.h>

// functions can't read inside of other functions so we use arguments and parameters
// to be able to acheive this

void birthday(char name[], int age) //parameters
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main()
{
    char name[] = "Kat";
    int age = 23;

    birthday(name, age); //arguments
    return 0;
}