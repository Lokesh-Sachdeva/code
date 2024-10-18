// #include <iostream>
// #include <iomanip>
// #include <math.h>
// #include <stdlib.h>
// using namespace std;
// #define SIZE 10
// int main()
// {
//     float a[SIZE][SIZE], x[SIZE], ratio;
//     int i, j, k, n;
//     cout << setprecision(3) << fixed;
//     cout << "enter order of matrix";
//     cin >> n;
//     cout << "enter coefficiet of matrix:" << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "a[" << 1 << "][" << j << "]=";
//             cin >> a[i][j];
//         }
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == j)
//             {
//                 a[i][j] = 1;
//             }
//             else
//             {
//                 a[i][j + n] = 0;
//             }
//         }
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i][i] == 0)
//         {
//             cout << "mathematical error!";
//             exit(0);
//         }
//         for (int j = 1; j <= n; j++)
//         {
//             if (i != j)
//             {
//                 ratio = a[i][j] / a[i][i];
//                 for (int k = 1; k <= 2 * n; k++)
//                 {
//                     a[j][k] = a[j][k] - ratio * a[i][k];
//                 }
//             }
//         }
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             a[i][j] = a[i][j] / a[i][i];
//         }
//         cout << endl
//              << "inverse matrix is:" << endl;
//         for (j = n + 1; j <= 2 * n; j++)
//         {
//             cout << a[i][j] << "lt";
//         }
//         cout << endl;
//     }
//     cout << "LOKESH SACHDEVA \n 09014802723" << endl;
//     return 0;
// }

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#define SIZE 10  // Or adjust size dynamically based on `n`

int main() {
    float a[SIZE][2 * SIZE], ratio;
    int i, j, k, n;
    
    cout << setprecision(3) << fixed;
    cout << "Enter order of matrix: ";
    cin >> n;
    
    if (n > SIZE) {
        cout << "Matrix size exceeds allowed limit." << endl;
        return 0;
    }
    
    cout << "Enter coefficients of matrix:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    // Augmenting the identity matrix to form [A | I]
    for (i = 0; i < n; i++) {
        for (j = 0; j < 2 * n; j++) {
            if (j == (i + n)) {
                a[i][j] = 1;
            } else if (j >= n) {
                a[i][j] = 0;
            }
        }
    }

    // Applying Gauss-Jordan Elimination
    for (i = 0; i < n; i++) {
        if (a[i][i] == 0) {
            cout << "Mathematical Error!" << endl;
            exit(0);
        }

        for (j = 0; j < n; j++) {
            if (i != j) {
                ratio = a[j][i] / a[i][i];
                for (k = 0; k < 2 * n; k++) {
                    a[j][k] = a[j][k] - ratio * a[i][k];
                }
            }
        }
    }

    // Row normalization to get inverse matrix
    for (i = 0; i < n; i++) {
        for (j = n; j < 2 * n; j++) {
            a[i][j] = a[i][j] / a[i][i];
        }
    }

    // Display the inverse matrix
    cout << "Inverse Matrix is:" << endl;
    for (i = 0; i < n; i++) {
        for (j = n; j < 2 * n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "LOKESH SACHDEVA \n 09014802723" << endl;
    return 0;
}
