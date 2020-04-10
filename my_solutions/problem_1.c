#include <stdio.h>

int main() {

    int counter = 0;
    int x;

    for(x=999; x > 0; x--) {
        if (x % 5 == 0) {
            counter = counter + x;
        } else if (x % 3 == 0) {
            counter = counter + x;
        }
    }

    printf("Result: %d\n", counter);

    return 0;
}