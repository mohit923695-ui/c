// write the program to check if given character is digit or not using operators
#include <stdio.h>
int main (){
    char ch;
    printf("enter the character ");
    scanf(" %c", &ch);
    printf("%s", (ch >= '0' && ch <= '9') ? "digit" : "not a digit");
    return 0;
}