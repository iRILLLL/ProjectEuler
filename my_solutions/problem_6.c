#include <stdio.h>

int main()
{

    int sumOfTheSquares = 0;
    int squareOfTheSum = 0;

    for (int i = 1; i <= 100; i++)
    {
        sumOfTheSquares += i * i;
        squareOfTheSum += i;
    }

    squareOfTheSum = squareOfTheSum * squareOfTheSum;

    int result = squareOfTheSum - sumOfTheSquares;
    printf("%d - %d = %d\n", squareOfTheSum, sumOfTheSquares, result);

    return 0;
}