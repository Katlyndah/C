#include<stdio.h>

int main(){
    //Format specifier % - defines and formats a type of data to be displayed

    //%c - character
    //%s - string(array of characters)
    //%f - float
    //%lf- double
    //%d - integer

    //%.1 - decimal precision
    //%1  - minimum field width
    //%-  - left align 

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("item 1: $%5.2f\n, item1"); //.2 will display 2 digits
    printf("item 2: $%5.2f\n, item2"); //5 will determine the space between the item and the value in print
    printf("item 3: $%5.2f\n, item3");

    return 0;
}