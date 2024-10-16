#include <stdio.h>
#include <math.h> // For sqrt()

double area(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;
    printf("Enter the three side lengths of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double triangleArea = area(a, b, c);
    printf("Area of the triangle = %.2lf\n", triangleArea);

    return 0;
}


// #include <stdio.h>

// double perim(double a, double b, double c) {
//     return a + b + c;
// }

// int main() {
//     double a, b, c;
//     printf("Enter the three side lengths of the triangle: ");
//     scanf("%lf %lf %lf", &a, &b, &c);

//     double trianglePerimeter = perim(a, b, c);
//     printf("Perimeter of the triangle = %.2lf\n", trianglePerimeter);

//     return 0;
// }
