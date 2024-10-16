#include <stdio.h>

// Function to compute the factorial
long long factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d = %lld\n", number, factorial(number));

    return 0;
}
