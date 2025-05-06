#include <bits\stdc++.h>
using namespace std;

int freq(int[], int); //complete hashmap for frequency, then fix max & min freq
int freq2(int[], int); // compare freq each time and update

int main(){
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5};
    freq(arr, sizeof(arr)/sizeof(arr[0]));
    freq2(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}

int freq(int arr[], int n){
    unordered_map <int, int> hashmp;
    int count = 0;

    for (int i = 0; i < n; i++){
        hashmp[arr[i]]++;
    }

    pair <int, int> min = { 0, 0 };
    pair <int, int> max = { 0, 0 };
    
    for (auto it : hashmp){
        if (it.second > max.second){
            max = it;    
        }
        if (it.second < min.second || min.second == 0){
            min = it;    
        }
    }

    cout << max.first << " " << min.first << "\n";
    return 0;
}
int freq2(int arr[], int n){
    pair <int , int> max_freq = { 0, 0 };
    pair <int , int> min_freq = { 0, 0 };
    bool visited_arr[n];
    int count = 0;

    for (int i = 0; i < n; i ++){
        count = 0;
        if (!visited_arr[i]){
            for (int j = i; j < n; j++){
                if (arr[j] == arr[i]){
                    visited_arr[j] = true;
                    count++;
                }
            }
            if (max_freq.second < count){
                max_freq = { arr[i], count};
            }
            if (min_freq.second > count || min_freq.second == 0){
                min_freq = { arr[i], count};
            }
        }
    }
    
    cout << max_freq.second << " " << min_freq.second << "\n";
    return 0;
}
