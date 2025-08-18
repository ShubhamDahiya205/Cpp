#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter Rows of Matrix 1: ";
    cin >> r1;
    cout << "Enter Columns of Matrix 1: ";
    cin >> c1;
    cout << "Enter Rows of Matrix 2: ";
    cin >> r2;
    cout << "Enter Columns of Matrix 2: ";
    cin >> c2;
    
    int arr1[r1][c1], arr2[r2][c2];
    
    cout << "\nInput Matrix 1 : \n";
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cout << "Element " << i << " " << j << " : ";
            cin >> arr1[i][j];
        }
    }
    cout << "\nInput Matrix 2 : \n";
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            cout << "Element " << i << " " << j << " : ";
            cin >> arr2[i][j];
        }
    }
    
    cout << "\nMatrix Addition : \n";
    if ((r1 == r2) && (c1 == c2)){
        int add[r1][c1];
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                add[i][j] = arr1[i][j] + arr2[i][j];
                cout << add[i][j] << "    ";
            }
        cout << "\n";
        }
    } else {
        cout << "Order of the matrices are different.\n";
        cout << "Matrix Addition is not possible.\n";
    }
    cout <<"\nMatrix Multiplication : \n";
    if (c1 == r2){
        int element, res[r1][c2];
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c2; j++){
                element = 0;
                for (int c = 0; c < c1; c++){
                    element += arr1[i][c] * arr2[c][j];
                }
                res[i][j] = element;
                cout << element << "    ";
            }
            cout << '\n';
        }
    } else {
        cout << "Column of Matrix 1 and Row of Matrix 2 are not equal.\n";
        cout << "Matrix Multiplication is not possible.\n";
    }
    cout << "\nMatrix Transpose :\n";
    cout << "Transpose of Matrix 1 :\n";
    int trans[c1][r1];
    for (int i = 0; i < c1; i++){
        for (int j = 0; j < r1; j++){
            cout << arr1[j][i] << "    ";
            trans[i][j] = arr1[j][i];
        }
        cout << '\n';
    }
    
    return 0;
}

