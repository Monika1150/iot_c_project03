#include <stdio.h>

#define pa printf("--------------------------------\n");

void main()
{
    int number1, number2, sum;

    pa
    printf("    Program Sum Number  \n");
    pa

    do
    {
        printf("Input number 1 : ");
        scanf("%d", &number1);
        printf("Input number 2 : ");
        scanf("%d", &number2);
        sum = number1 + number2;
        printf("Sum of number : %d\n", sum);
        pa
    }
    while( sum <=500 );

    getch();
}