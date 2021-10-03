// 4 functions - 1 main
// 3 functions - uppercase
// lowercase,

#include <stdio.h>
#include <string.h>

int countUpper(char string[])
{
    int i;
    int upperCase = 0;
    i = 0;
    while (string[i] != '\0')
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
            upperCase++;

        i++;
    }
    return upperCase;
}

int countLower(char string[])
{
    int i;
    int lowerCase = 0;
    i = 0;
    while (string[i] != '\0')
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            lowerCase++;

        i++;
    }
    return lowerCase;
}

int countSpecial(char string[])
{
    int allChars = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        allChars++;
    }
    int countUp = countUpper(string);
    int countLow = countLower(string);
    return allChars - (countUp + countLow);
}

int main()
{
    char c[] = "This IS my string 10";
    printf("Count of uppercase == %d \n", countUpper(c));
    printf("Count of lowercase == %d \n", countLower(c));
    printf("Count of special characters == %d \n", countSpecial(c));
    return 0;
}