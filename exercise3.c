#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void findCloseSq(int num)
{
    double sqrIs = sqrt(num);
    if (ceil(sqrIs) == floor(sqrIs))
    {
        printf("The square root of the integer is a whole number. \n");
    }
    else
    {
        bool x = true;
        int tempNum = num;
        int currentLevel = 1;
        while (x)
        {
            if (currentLevel == num)
            {
                break;
            }
            double sqrIsUp = sqrt(tempNum + currentLevel);
            if (ceil(sqrIsUp) == floor(sqrIsUp))
            {
                printf("The nearest number with a whole number square root is %d. \n", tempNum + currentLevel);
                break;
            }

            double sqrIsDown = sqrt(tempNum - currentLevel);
            if (ceil(sqrIsDown) == floor(sqrIsDown))
            {
                printf("The nearest number with a whole number square root is %d. \n", tempNum - currentLevel);
                break;
            }
            currentLevel++;
        
        }
    }
}

int main()
{
    bool x = true;
    while (x)
    {
        int num;
        int numOfInts = 0;
        printf("Enter a positive integer : ");
        scanf("%d", &num);
        long temp = num;
        // count number of ints in the number
        do
        {
            temp /= 10;
            ++numOfInts;
        } while (temp != 0);
        if (numOfInts <= 0 || numOfInts >= 8)
        {
            printf("Enter an integer with number of integers 1 and 7 \n");
        }
        else
        {
            num = abs(num);
            findCloseSq(num);
            break;
        }
    }

    return 0;
}