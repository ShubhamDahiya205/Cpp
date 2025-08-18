#include <iostream>

using namespace std;

int main(){
    int row_A, row_B, column_A, column_B;
    cout << "Enter Rows of Matrix A : ";
    cin >> row_A;
    cout << "Enter Columns of Matrix A : ";
    cin >> column_A;
    cout << "Enter Rows of Matrix B : ";
    cin >> row_B;
    cout << "Enter Columns of Matrix B : ";
    cin >> column_B;

    if (column_A != row_B){
        cout << "Matrix Multiplication not possible.\n";
    } else {

    int matrix_A[row_A][column_A];
    int matrix_B[row_B][column_B];
    int result_matrix[row_A][column_B];

    cout << "\nInput Matrix A\n\n";
    for (int row_index = 0; row_index < row_A; row_index++){
        for (int column_index = 0; column_index < column_A; column_index++){
            cout << "Enter Element " << row_index + 1 << ", " << column_index + 1 << ": ";
            cin >> matrix_A[row_index][column_index];
    }
    }

    cout << "\nInput Matrix B\n\n";
    for (int row_index = 0; row_index < row_B; row_index++){
        for (int column_index = 0; column_index < column_B; column_index++){
            cout << "Enter Element " << row_index + 1 << ", " << column_index + 1 << ": ";
            cin >> matrix_B[row_index][column_index];
    }
    }

    int element = 0;

    for (int row_index = 0; row_index < row_A; row_index++){
        for (int column_index = 0; column_index < column_B; column_index++){
            element = 0;
            for (int common_index = 0; common_index < column_A; common_index++){
                element += matrix_A[row_index][common_index] * matrix_B[common_index][column_index];
            }
            result_matrix[row_index][column_index] = element;
        }
    }

    cout << "\nResult Matrix\n\n";
    for (int row_index = 0; row_index < row_A; row_index++){
        for (int column_index = 0; column_index < column_B; column_index++){
            cout << result_matrix[row_index][column_index] << "   ";
        }
        cout << "\n";
    }

}
    return 0;
}