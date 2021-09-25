#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void SumDigits(int num, int sizeInt)
{

    int sumIs = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sumIs += digit;
        num /= 10;
    }
    printf("Sum of digits is : %d \n ", sumIs);
}

int main()
{
    bool x = true;
    while (x)
    {
        long userNum;
        int numOfInts = 0;
        printf("Enter an integer : ");
        scanf("%ld", &userNum);
        long temp = userNum;
        // count number of ints in the number
        do
        {
            temp /= 10;
            ++numOfInts;
        } while (temp != 0);
        if (numOfInts <= 0 || numOfInts >= 11)
        {
            printf("Enter an integer with number of integers 1 and 10 \n");
        }
        else
        {
            SumDigits(userNum, numOfInts);
            break;
        }
    }

    return 0;
}