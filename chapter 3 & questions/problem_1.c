//write a program to check if a student passed or failed 

#include<stdio.h>
int main (){
    int marks ;
    printf("enter the marks : ");
    scanf("%d",&marks);

    if(marks>=30){
        printf("pass\n");
    }
    else if(marks<30){
        printf("failed\n");
    }
printf("good luck ");
return 0;    
}