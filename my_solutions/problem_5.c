#include <stdio.h>

int main()
{

    int num = 0;
    int counter = 1;

    while (num == 0)
    {

        int isSatisfied = 1;

        for (int i = 1; i <= 20; i++)
        {
            if (counter % i != 0)
            {
                isSatisfied = 0;
                continue;
            }
        }

        if (isSatisfied)
        {
            num = counter;
            printf("%d\n", num);
            return 0;
        }

        counter++;
    }

    return 0;
}