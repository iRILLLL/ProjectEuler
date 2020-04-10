#include <stdio.h>

int sumDivisibleBy(int x) {
    int target = 999;
    int result = target / x;
    return x * (result * (result + 1)) / 2;
}

int main() {

    int result = sumDivisibleBy(3) + sumDivisibleBy(5) - sumDivisibleBy(15);
    printf("Result: %d\n", result);
    
    return 0;
}