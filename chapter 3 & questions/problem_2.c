//give gades to the studentd 

#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks : ");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90){
        printf("excellent or A++\n");
    }
    else if(marks<90 && marks>=80){
        printf("B");
    }
    else if(marks<80 && marks>=70){
        printf("C\n");
    }
    else if(marks<70 && marks>=60){
        printf("D\n");
    }
    else if(marks<60 && marks>=50){
        printf("E\n");
    }
    else if(marks<50){
        printf("fail\n");
    }
printf("good luck for next season ");   
    
    return 0;
}