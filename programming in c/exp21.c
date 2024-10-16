#include <stdio.h>

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num = 10; // Number of Fibonacci numbers to print
    printf("Fibonacci series up to %d numbers:\n", num);

    for (int i = 0; i < num; ++i) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}
