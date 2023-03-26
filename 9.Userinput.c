#include <stdio.h>
#include <string.h>

int main()
{
    char name[25]; // bytes
    int age;

    printf("\nWhat is your name?");
    // scanf("%s", &name); //reads up to white spaces
    fgets(name, 25, stdin); // reads white spaces
    name[strlen(name) - 1] = '\0'; //gets rid of auto new line character

    printf("\nHow old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?.", name);
    prinf("\nYou are %d years old.", age);

    return 0;
}