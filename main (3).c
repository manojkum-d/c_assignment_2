#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void generatePermutations(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);
    } else {
        for (int i = left; i <= right; i++) {
            swap((str + left), (str + i));
            generatePermutations(str, left + 1, right);
            swap((str + left), (str + i)); // Backtrack
        }
    }
}

int main() {
    char inputString[] = "abcd"; 

    int length = strlen(inputString);
    generatePermutations(inputString, 0, length - 1);

    return 0;
}


