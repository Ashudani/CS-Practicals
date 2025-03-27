#include <iostream>
using namespace std;

void inputMatrix(int mat[4][4], int row, int col, string name) {
    cout << "Enter elements of " << name << " matrix (" << row << "x" << col << "):" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }
}

void printMatrix(int mat[4][4], int row, int col, string name) {
    cout << name << " Matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int A[4][4], int B[4][4], int result[4][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[4][4], int B[4][4], int result[4][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int A[4][4], int B[4][4], int result[4][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int row, col;
    cout << "Enter the number of rows and columns (max 4x4): ";
    cin >> row >> col;
    
    int A[4][4], B[4][4], result[4][4];
    
    inputMatrix(A, row, col, "First");
    inputMatrix(B, row, col, "Second");
    
    addMatrices(A, B, result, row, col);
    printMatrix(result, row, col, "Sum");
    
    subtractMatrices(A, B, result, row, col);
    printMatrix(result, row, col, "Difference");
    
    multiplyMatrices(A, B, result, row, col);
    printMatrix(result, row, col, "Product");
    
    return 0;
}
