//matrix
#include <iostream>
using namespace std;

class Matrix {
    public:
        int r, c, arr[100][100];

        void initialize() {
            for(int i = 0; i<r; i++) {
                for(int j = 0; j<c; j++) {
                    arr[i][j] = 0;
                }
            }
        }

        void matInput() {
            cout << "Enter no. of rows of the matrix : ";
            cin >> r;
            cout << "Enter no. of columns of the matrix : ";
            cin >> c;
            cout << "\nEnter the elements in the matrix : " << endl;
            for(int i = 0; i<r; i++) {
                for(int j = 0; j<c; j++) {
                    cout << "Enter the element at index (" << i << "," << j << ") : ";
                    cin >> arr[i][j];
                }
            }
        }

        void matOutput() {
            cout << "The matrix is : " << endl;
            for(int i = 0; i<r; i++) {
                for(int j = 0; j<c; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            cout<<"--------------------------------------------------------";
        }
};

void matMultiply(Matrix m1, Matrix m2, Matrix m3) {
    if(m1.c != m2.r) {
        cout << "\nCan't multiply the matrices.\nThe no. of columns of the first matrix is not equal to the no. of rows of the second matrix.\n";
        return;
    }
    m3.r = m1.r;
    m3.c = m2.c;
    m3.initialize();
    for(int i = 0; i < m1.r; i++) {
        for(int j = 0; j < m2.c; j++) {
            for(int k = 0; k < m1.c; k++) {
                m3.arr[i][j] += m1.arr[i][k] * m2.arr[k][j];
            }
        }
    }
    cout << "\nAfter multiplication: \n";
    m3.matOutput();
}
int main() {
    Matrix m1, m2, m3; 
    cout << "Enter the details for the first matrix.\n";
    m1.matInput();
    m1.matOutput();
    cout << "\nEnter the details for the second matrix.\n";
    m2.matInput();
    m2.matOutput();
    matMultiply(m1, m2, m3);
    return 0;  
}
