#include <stdio.h>

int isPalindrome(int number)
{

    int length = 0;
    int n = number;

    while (n != 0)
    {
        n /= 10;
        length++;
    }

    int numberArray[length];

    int c = 0;
    n = number;

    while (n != 0)
    {
        numberArray[c] = n % 10;
        n /= 10;
        c++;
    }

    for (int x = 0; x < length / 2; x++)
    {
        if (numberArray[x] != numberArray[length - x - 1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{

    int largest = 0;

    for (int i = 999; i > 99; i--)
    {
        for (int j = 999; j > 99; j--)
        {
            int num = i * j;
            if (isPalindrome(num))
            {
                if (largest < num)
                {
                    largest = num;
                }
            }
        }
    }

    printf("%d\n", largest);

    return 0;
}