//wap to check if a number is divisble by two or not ?


#include<stdio.h>
int main(){
    int x;
    printf("enter the number x: ");    //1 means divisible 2
    scanf("%d",&x);                    //0 means not divisible by 2
    printf("%d\n",x%2 == 0);
    return 0 ;

}