#include <bits\stdc++.h>
using namespace std;

int count1(int[], int);             //map hash
int count2(int[], int);             //loops
// int count3(int[], int);

int main(){
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5};
    count1(arr, sizeof(arr)/sizeof(arr[0]));
    count2(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}

int count1(int arr[], int n){
    unordered_map <int, int> hash_map;

    for (int i = 0; i < n; i++){
        hash_map[arr[i]]++;
    }
    
    for (int i = 0; i < 11; i++){
        if (hash_map[i] > 0){
            cout << i << " : " << hash_map[i] << "\n";
        }
    }    

    return 0;
}

int count2(int arr[], int n){
    bool visited_arr[n];

    for (int i = 0; i < n; i++){
        int count = 0;        
        if (!visited_arr[i]){
            for (int j = i; j < n; j++){
                if (arr[j] == arr[i]){
                    visited_arr[j] = true;
                    count++;
                }
            }    
            cout << arr[i] << " : " << count << '\n';
        }
    }
    return 0;
}
