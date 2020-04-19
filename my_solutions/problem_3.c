#include <stdio.h>

#include <stdio.h>

int isPrimeNumber(int n)
{

    int isPrime = 1;

    for (int x = 2; x < n; x++)
    {
        if ((n % x) == 0)
        {
            isPrime = 0;
        }
    }

    return isPrime;
}

int main()
{

    long n = 600851475143;

    for (long x = 2; x <= n; x++)
    {
        long result = n / x;
        if (result * x == n && isPrimeNumber(x))
        {
            n = result;
            printf("%ld ", x);
        }
    }

    return 0;
}