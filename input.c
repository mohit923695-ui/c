#include<stdio.h>
int main()
{
    int number;
    char star;
    float pi;

    printf("Enter the number: ");
    scanf("%d", &number);     

    printf("Enter the star: ");
    scanf(" %c", &star);      

    printf("Enter pi: ");
    scanf("%f", &pi);

    printf("You entered: %d %c %f\n", number, star, pi);

    return 0;
}