//calculate the perimeter of rectangle
#include<stdio.h>
int main (){
    float a, b,perimeter;
    printf("enter the lenth a :");
    scanf("%f", &a);
    printf("enter the breadth b :");
    scanf("%f", &b);
    perimeter = 2*(a+b);
    printf("%f",perimeter);
    return 0;
}