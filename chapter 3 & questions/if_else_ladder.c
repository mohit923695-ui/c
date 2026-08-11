#include<stdio.h>
int main (){
    int age ;
    printf("enter the age :");
    scanf("%d",&age);
    if(age>=18){
        printf("adult\n");
    }
    else if(age<18){
        printf("not adult\n");
    }
    printf("thanks for contribution");

    return 0 ;
    
}