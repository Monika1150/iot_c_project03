#include <stdio.h>

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

    for ( i = 1  ; i <= 12  ; i = i + 1  )
    {
        printf("%d x %d = %d\n", i , number , i * number);
    }

    printf("--------------------\n");

    getch();

}