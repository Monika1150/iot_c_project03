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

    while(  i <= 12  )
    {
        printf("%d x %d = %d\n", number , i , i * number);
        i = i+1;
    } 
    printf("--------------------\n");

    getch();

}