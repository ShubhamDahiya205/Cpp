#include <iostream>
using namespace std;
int main() {
    int r1, c1;
    cout << "Enter Rows of the Matrix : ";
    cin >> r1;
    cout << "Enter Columns of Matrix : ";
    cin >> c1;
    int arr1[r1][c1];
    
    cout << "\nInput Matrix : \n";
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cout << "Element " << i << " " << j << " : ";
            cin >> arr1[i][j];
        }
    }
    int count = 0;
    cout << '\n';
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cout << arr1[i][j] << "    ";
            if (arr1[i][j] == 0){
                count++;
            }
        }
        cout << '\n';
    }
    if (count >= float(r1 * c1)/2){
        cout << "\nGiven Matrix is Sparse Matrix.\n";
    } else {
        cout << "\nGiven Matrix is not a Sparse Matrix.\n";
    }
    cout << "\nBy - Shubham Dahiya (00414802724)" << '\n';    
    return 0;
}
