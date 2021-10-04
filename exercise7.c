#include <stdio.h>
int main()
{
    int i, j;
    int dimension = 4;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < dimension; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
        dimension--;
    }
    dimension = 0;
    for (i = 5; i > 0; i--)
    {
        for (j = 0; j < dimension; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }

        printf("\n");
        dimension++;
    }

    return 0;
}
