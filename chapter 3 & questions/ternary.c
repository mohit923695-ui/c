#include<stdio.h>
int main (){
    int age;
    if (scanf("%d", &age) != 1) return 1;

    age >= 18 ? printf("adult\n") : printf("not adult\n");
    return 0;
}