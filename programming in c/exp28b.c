#include <stdio.h>

// Function to swap two numbers using call by reference (pointers)
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10, num2 = 20;

    printf("Before swapping (call by reference):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function
    swapByReference(&num1, &num2);

    printf("After swapping (call by reference):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
