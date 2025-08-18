#include <iostream>

using namespace std;

int main() {
    int rows, columns;
    
    cout << "Enter rows of matrix : \n";
    cin >> rows;
    
    cout << "Enter columns of matrix : \n";
    cin >> columns;
    
    int matrix[rows][columns];
    
    cout << "\nInput Matrix : \n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << "Enter Element " << i+1 << ", " << j+1<< ": ";
            cin >> matrix[i][j];
        }
    }
    cout << "\nMatrix :\n";
    int count = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << matrix[i][j] << "    ";
            if (matrix[i][j] != 0){
                count++;
            }
        }
        cout << "\n";
    }

    int result_matrix[3][count];
    int col_count = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (matrix[i][j] != 0){
                result_matrix[0][col_count] = i;
                result_matrix[1][col_count] = j;
                result_matrix[2][col_count] = matrix[i][j];
                col_count++;
            }    
            
        }
    }
    
    cout << "\nResultant Matrix : \n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < col_count; j++){
            cout << result_matrix[i][j] << "    ";
        }
        cout << "\n";
    }
    cout << "\nBy - Shubham Dahiya (00414802724)" << '\n';
    
    return 0;
}