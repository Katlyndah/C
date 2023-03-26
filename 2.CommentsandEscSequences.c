#include<stdio.h>

int main(){
    //This is a single line comment
    /*
    This 
    is 
    a 56 \  ../
    multi-line 
    comment
    */

   /*
   escape sequences are characters consisting of \ followed 
   by a letter of combination of digits.

   e.g \t = tab, 
   \n = newline,
    */
    printf("I\nlike\npizza\n"); //new lines
    printf("1\t2\t3\t4\t5\t6\t7\t8\t9"); //will evenly space numbers
    printf("\"I like pizza\" - Abraham Lincold probably"); // adding \''\ or \""\ allows up to print quotes with text
    return 0;
}