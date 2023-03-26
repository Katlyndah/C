#include <stdio.h>

enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};

int main()
{
    // enum = user defined type of names integer identifiers
    //        helps to make a progam more readable
    //        enums are constants
    //        They are treated as integers

    enum Day today = Sun; // Enums are not strings

    // printf("%d", today);

    if (today == Sun || today == Sat)
    {
        printf("It's the weekend! Party time!");
    }
    else
    {
        printf("I have to work today :(");
    }

    return 0;
}