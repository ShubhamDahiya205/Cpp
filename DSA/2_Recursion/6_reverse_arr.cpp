#include <bits\stdc++.h>
using namespace std;

vector<int> reverse1(vector<int>);
vector<int> reverse2(int, vector<int>);

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr1 = reverse1(arr);    
    vector<int> arr2 = reverse2(0, arr);    

    for (int i = 0; i < 10; i++){
        cout << arr1[i] << " ";
    }
    cout << "\n";
    
    for (int i = 0; i < 10; i++){
        cout << arr2[i] << " ";
    }
    cout << "\n";

    
    return 0;
}

vector<int> reverse1(vector<int> arr){
    int temp, l= arr.size();
    for (int i = 0; i < l/2 ; i++){
        temp = arr[i];
        arr[i] = arr[l - i - 1];
        arr[l - i - 1] = temp;
    }
    return arr;
}
vector<int> reverse2(int i, vector<int> arr){
    int l = arr.size();
    if (i >= l/2) return arr;
    int temp = arr[l - 1 - i];
    arr[l - 1 - i] = arr[i];
    arr[i] = temp;
    return reverse2(i  + 1, arr);
}
