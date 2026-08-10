git // write a program to print the smallest number

#include<stdio.h>
int main (){
    int a,b,c,small;
    printf("enter the numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    small = (a < b && a < c) ? a : (b < c ? b : c);
    printf("%d", small);
    return 0;

}