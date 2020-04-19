#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{

    int counter = 0;
    int x = 0;
    int result = 0;

    while (x <= 4000000)
    {
        x = fib(counter);
        if (x % 2 == 0)
            result += x;
        counter++;
    }

    printf("%d\n", result);

    return 0;
}