#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void oddEven(int up)
{
    int bound = up;
    int sumOfOdd = 0;
    int sumOfEven = 0;
    int difOddEven;
    double thirdEven;
    double fifthOdd;

    while (bound > 0)
    {
        //even
        if (bound % 2 == 0)
        {
            sumOfEven += bound;
        }
        //odd
        else
        {
            sumOfOdd += bound;
        }

        bound--;
    }

    printf("The sum of even numbers is : %d \n", sumOfEven);
    printf("The sum of oddfreecodenumbers is : %d \n", sumOfOdd);
    printf("The absolute difference of sum of odd and sum of even is : %d \n", abs(sumOfOdd - sumOfEven));
    printf("A third of the sum of even numbers is : %lf \n", 0.3333 * sumOfEven);
    printf("A third of the sum of odd numbers is : %lf \n", 0.2 * sumOfOdd);
}

int main()
{
    int upperBound;
    bool x = true;
    while (x)
    {
        printf("Enter the upper bound : ");
        scanf("%d", &upperBound);
        if (upperBound <= 0)
        {
            printf("Enter a value greater than 0 \n");
        }
        else
        {
            break;
        }
    }
    oddEven(upperBound);
    return 0;
}
