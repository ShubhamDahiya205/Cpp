#include <bits\stdc++.h>
using namespace std;

void print_arr(vector<int>);
vector<int> bubble_sort(vector<int>);
vector<int> selection_sort(vector<int>);
vector<int> insertion_sort(vector<int>);

int main(){
    vector<int> arr = {2, 1, 4, 3, 4, 6, 5, 9, 10, 8, 7};
    print_arr(arr);
    print_arr(bubble_sort(arr));
    print_arr(selection_sort(arr));
    print_arr(insertion_sort(arr));

    return 0;
}

void print_arr(vector<int> arr){
    cout << "{ ";
    for (auto it : arr){
        cout << it << ' ';
    }
    cout << "}\n";
    return;
}
vector<int> bubble_sort(vector<int> arr){
    int n = arr.size();
    int temp;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n - i; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;   
            }
        }
    }
    return arr;
}
vector<int> selection_sort(vector<int> arr){
    int min_index, temp;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++){
        min_index = i;
        for (int j = i; j < n; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
    return arr;
}
vector<int> insertion_sort(vector<int> arr){
    int temp;
    int n = arr.size();
    for (int i = 1; i < n; i++){
        for (int j = i; j > 0; j--){
            if (arr[j] < arr[j - 1]){
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else{
                break;
            }
        }
    }
    return arr;
}
