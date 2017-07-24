#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            printf("* ");
        }
        if(i % 2 == 0)
        {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}

