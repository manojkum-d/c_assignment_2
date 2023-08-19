#include <stdio.h>

int findStringLength(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    const char *myString = "Hello, World!";
    int len = findStringLength(myString);
    
    printf("Length of the string: %d\n", len);

    return 0;
}

