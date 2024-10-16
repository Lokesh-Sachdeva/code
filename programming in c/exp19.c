#include <stdio.h>

// Function to compute the Fibonacci series
void printFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci series up to %d numbers:\n", n);
    printf("%d %d ", first, second);

    for (int i = 2; i < n; ++i) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int count = 10; // Number of Fibonacci numbers to print
    printFibonacci(count);
    return 0;
}
