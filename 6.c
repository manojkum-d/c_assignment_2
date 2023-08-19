#include <stdio.h>

void addNumbers(int *x, int *y, int *sum) {
    *sum = *x + *y;
}

int main() {
    int value1 = 10, value2 = 20, result;

    printf("value1 = %d, value2 = %d\n", value1, value2);

    addNumbers(&value1, &value2, &result);

    printf("Sum: %d\n", result);

    return 0;
}
