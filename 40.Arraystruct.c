#include <stdio.h>
#include <string.h>

// Array of structs

struct Student
{
    char name[12];
    float gpa;
};

int main()
{
    //initialize structs
    struct Student student1 = {"Patrick", 2.5};
    struct Student student2 = {"Spongebob", 3.0};
    struct Student student3 = {"Sandy", 4.0};
    struct Student student4 = {"Squidward", 2.0};

    //Array of struct
    struct Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name); //-12 displays 12 dits and justifies content
        printf("%.2%f\n", students[i].gpa);
    }

    return 0;
}