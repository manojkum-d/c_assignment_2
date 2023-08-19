#include <stdio.h>
#include <string.h>

int main() {
    const char *inputString = "Hello, World!";
    int length = strlen(inputString);
    const char *ptr = inputString + length - 1;

    while (ptr >= inputString) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}
