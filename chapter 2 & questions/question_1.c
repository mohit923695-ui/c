//write a program to check the if a number is even or odd ?

#include<stdio.h>
int main(){
    int x;
    printf("enter the number x: ");    //1 means true (even)
    scanf("%d",&x);                    //0 means false(odd)
    printf("%d\n",x%2 == 0);
    return 0 ;

}