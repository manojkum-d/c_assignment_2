#include <stdio.h>

int findMax(int *x, int *y) {
    if (*x > *y) {
        return *x;
    } else {
        return *y;
    }
}

int main() {
    int value1 = 15, value2 = 30;

    printf("value1 = %d, value2 = %d\n", value1, value2);

    int maximum = findMax(&value1, &value2);

    printf("Maximum value: %d\n", maximum);

    return 0;
}
