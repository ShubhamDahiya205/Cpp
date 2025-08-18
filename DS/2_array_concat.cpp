// Aim : WAP showing the implementation of array concatenation

// Source Code :

#include <iostream>
using namespace std;

int main() {
    int r1, r2, c1, c2;
    cout << "Enter Rows of Matrix 1 : ";
    cin >> r1;
    cout << "Enter Columns of Matrix 1 : ";
    cin >> c1;
    cout << "Enter Rows of Matrix 2 : ";
    cin >> r2;
    cout << "Enter Columns of Matrix 2 : ";
    cin >> c2;
    
    int arr1[r1][c1], arr2[r2][c2];
    if ((r1 != r2) && (c1 != c2)){
        cout << "The arrays have different number of rows and different number of columns.\n";
        cout << "Array concatination not possible.\n";
    } else {
        
    cout << "\nInput Array 1 : \n";
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cout << "Element " << i << " " << j << " : ";
            cin >> arr1[i][j];
        }
    }
    cout << "\nInput Array 2 : \n";
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            cout << "Element " << i << " " << j << " : ";
            cin >> arr2[i][j];
        }
    }
    
    if ((r1 == r2) && (c1 == c2)){
        // Row concat
        int res1[r1][c1 + c2];
        cout << "\nRow Concatination : \n";
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1 + c2; j++){
                if (j < c1){
                    res1[i][j] = arr1[i][j];
                    cout << arr1[i][j] << "    ";
                } else {
                    res1[i][j] = arr2[i][j - c1];
                    cout << arr2[i][j - c1] << "    ";
                }
            }
            cout << '\n';
        }
        // Column concat
        cout << "\nColumn Concatination : \n";
        int res2[r1 + r2][c1];
        for (int i = 0; i < r1 + r2; i++){
            for (int j = 0; j < c1; j++){
                if (i < r1){
                    cout << arr1[i][j] << "    ";
                    res2[i][j] = arr1[i][j];
                } else {
                    res2[i][j] = arr2[i - r1][j];
                    cout << arr2[i - r1][j] << "    ";
                }
            }
            cout << '\n';
        }
        cout << "\n";
    } else if (r1 == r2){
        // Row concat
        cout << "\nRow Concatination : \n";
        int res1[r1][c1 + c2];
        cout << "\nRow Concatination : \n";
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1 + c2; j++){
                if (j < c1){
                    res1[i][j] = arr1[i][j];
                    cout << arr1[i][j] << "    ";
                } else {
                    res1[i][j] = arr2[i][j - c1];
                    cout << arr2[i][j - c1] << "    ";
                }
            }
            cout << '\n';
        }
        cout << "\n";
    }else {
                // Column concat
        cout << "\nColumn Concatination : \n";
        int res2[r1 + r2][c1];
        for (int i = 0; i < r1 + r2; i++){
            for (int j = 0; j < c1; j++){
                if (i < r1){
                    cout << arr1[i][j] << "    ";
                    res2[i][j] = arr1[i][j];
                } else {
                    res2[i][j] = arr2[i - r1][j];
                    cout << arr2[i - r1][j] << "    ";
                }
            }
            cout << '\n';
        }
    }
    }
    
    return 0;
}