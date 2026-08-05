//write a program to print the average of 3 numbers 


#include<stdio.h>
int main(){
    float a,b,c,average;
    printf("enter a number a :");
    scanf("%f",&a);
    printf("enter a number b :");
    scanf("%f",&b);
    printf("enter a number c :");
    scanf("%f",&c);
    average = (a+b+c)/3;
    printf("%f\n",average);
    return 0 ;

}