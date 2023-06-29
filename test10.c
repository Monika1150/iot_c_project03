#include <stdio.h>

void main()
{
    int i;

    for ( i = 1  ; i <= 5  ; i = i + 1  )
    {
        if ( i == 3)
        {
            continue;
        }
        printf("%d)IOT\n" , i);
    }

    printf("SAU\n");
}