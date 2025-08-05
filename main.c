#include <stdio.h>

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int x = 5;
    int y = 10;
    int result = add(x, y);

    if (result > 10) {
        printf("Result is greater than 10: %d\n", result);
    } else {
        printf("Result is 10 or less: %d\n", result);
    }

    return 0;
}