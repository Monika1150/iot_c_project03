#include    <stdio.h>

void main()
{
    int number;
    int i = 1;

    printf("--------------------\n");
    printf("    Multiplicaion   \n");
    printf("--------------------\n");
    printf("Input number : ");
    scanf("%d", &number);
    printf("--------------------\n");

    do
    {
        printf("%d x %d = %d\n", i , number , i * number);
        i = i+1;
    }
    while( i <=12 );

    printf("--------------------\n");

    getch();

}