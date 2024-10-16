// #include <stdio.h>

// void swapByValue(int x, int y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main() {
//     int a = 10, b = 20;
//     swapByValue(a, b);
//     printf("In the Caller:\n");
//     printf("a = %d, b = %d\n", a, b);
//     return 0;
// }

#include <stdio.h>

void swapByReference(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    swapByReference(&a, &b);
    printf("Inside the Caller:\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
