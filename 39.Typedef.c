#include <stdio.h>
#include <string.h>

typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    // typedef = reserved keyword that gives an existing data type a "nickname"
    // usually used in structs
    
    User user1 = {"Kat", "Password245", 352492842};
    User user2 = {"Kit", "passwordhj", 698986957};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);

    printf("\n");

    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0;
}