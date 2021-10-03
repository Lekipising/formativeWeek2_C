#include <stdio.h>
int main()
{
    int i, j;
    int space = 4;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
        space--;
    }
    space = 0;
    for (i = 5; i > 0; i--)
    {
        for (j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }

        printf("\n");
        space++;
    }

    return 0;
}
