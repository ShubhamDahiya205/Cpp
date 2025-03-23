#include <bits/stdc++.h>

void print1(int);
void print2(int);
void print3(int);
void print4(int);
void print5(int);
void print6(int);
void print7(int);
void print8(int);
void print9(int);
void print10(int);
void print11(int);
void print12(int);
void print13(int);
void print14(int);
void print15(int);
void print16(int);
void print17(int);
void print18(int);
void print19(int);
void print20(int);
void print21(int);
void print22(int);
void print23(int);
void print24(int);
void print25(int);

using std::cout, std::cin;

int main() {
    int rows = 7;
    
    print1(rows);
    print2(rows);
    print3(rows);
    print4(rows);
    print5(rows);
    print6(rows);
    print7(rows);
    print8(rows);
    print9(rows);
    print10(rows);
    print11(rows);
    print12(rows);
    print13(rows);
    print14(rows);
    print15(rows);
    print16(rows);
    print17(rows);
    print18(rows);
    print19(rows);
    print20(rows);
    print21(rows);
    print22(rows);
    print23(rows);
    print24(rows);
    print25(rows);
    
    return 0;
}

void print1(int rows){
    cout << "Pattern 1" << "\n";
    for (int i = 1; i <= rows; i++){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";    
}

void print2(int rows){
    cout << "Pattern 2" << "\n";
    for (int i = rows; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";    
}

void print3(int rows){
    cout << "Pattern 3" << "\n";
    for (int i = 1; i <= rows; i++){
        for (int s = 1; s <= rows - i; s++){
            cout << " ";
        }
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void print4(int rows){
    cout << "Pattern 4" << "\n";
    for (int i = rows; i > 0; i--){
        for (int s = 1; s <= rows - i; s++){
            cout << " ";
        }
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void print5(int rows){
    cout << "Pattern 5" << "\n";
    int count = 1;
    for (int i = 1; i < rows; i++){
        for (int j = 0; j < i; j++){
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }
    cout << "\n";
}

void print6(int rows){
    cout << "Pattern 6" << "\n";
    int count = 1;
    for (int i = 1; i <= rows; i++){
        for (int j = 0; j < i; j++){
            cout << count;
            count++;
        }
        cout << "\n";
        count = 1;
    }
    cout << "\n";
}

void print7(int rows){
    cout << "Pattern 7" << "\n";
    int count = 1;
    for (int i = rows; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout << count;
            count++;
        }
        cout << "\n";
        count = 1;
    }
    cout << "\n";
}

void print8(int rows){
    cout << "Pattern 8" << "\n";
    for (int i = 1; i <= rows; i++){
        for (int s = 1; s <= rows - i; s++){
            cout << " ";
        }
        for (int j = 0; j < 2*i - 1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void print9(int rows){
    cout << "Pattern 9" << "\n";
    for (int i = rows; i > 0; i--){
        for (int s = 1; s <= rows - i; s++){
            cout << " ";
        }
        for (int j = 0; j < 2*i - 1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void print10(int rows){
    cout << "Pattern 10" << "\n";
    int coef = 1;
    for (int i = 0; i < rows; i++){
        for (int s = 1; s < rows - i; s++){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            if (j == 0){
                coef = 1;
            } else {
                coef = coef * (i - j + 1)/j;
            }
            cout <<" " << coef;
        }
        cout << "\n";
    }
    cout << "\n";
}

void print11(int rows){
    cout << "Pattern 11" << "\n";
    for (int i = 1; i <= rows; i++){
        for (int j = 0; j < 6; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void print12(int rows){
    cout << "Pattern 12" << "\n";
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            cout << i;
        }
        cout << "\n";
    }
    cout << "\n";
}

void print13(int rows){
    cout << "Pattern 13" << "\n";
    int k;
    for (int i = 1; i <= 2* rows; i++){
        if (i <= rows){
            for (int s = 1; s <= rows  - i; s++){
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++){    
                cout << "*";
            }
            cout << "\n";
        } else {
            k = 15 - i;
            for (int s = 1; s <= rows - k; s++){
                cout << " ";
            }
            for (int j = 1; j <= 2 * k - 1; j++){
                cout << "*";
            }
            cout << "\n";
        }
    }    
    cout << "\n";
}

void print14(int rows){
    cout << "Pattern 14" << "\n";
    for (int i = 1; i <= 2 * rows; i++){
        if (i <= rows){
            for (int j = 1; j <= i; j++){
                cout << "*";
            }
            cout << "\n";
        } else {
            for (int j = 1; j <= 2*rows - i; j++){
                cout << "*";
            }
            cout << "\n";
        }
    }
    cout << "\n";
}

void print15(int rows){
   cout << "Pattern 15" << "\n";
    for (int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            if ((i + j) % 2 == 0){
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << "\n";
   }
   cout << "\n";
}

void print16(int rows){
    cout << "Pattern 16" << "\n";
     for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            cout << j;
        }
        for (int s = 1; s <= (2 * rows) - (2 * i); s++){
            cout << " ";
        }
        for (int j = i; j >= 1; j--){
            cout << j;
        }
        cout << "\n";
    }
    cout << "\n";
}

void print17(int rows){
    const int alph = 65;              // char(65) == 'A'
    cout << "Pattern 17" << "\n";
    for (int  i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            cout << char(alph + j -1);
        }
        cout << "\n";
    }
    cout << "\n";
}

void print18(int rows){
    const int alph = 65;              // char(65) == 'A'
    cout << "Pattern 18" << "\n";
    for (int  i = rows; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout << char(alph + j - 1);
        }
        cout << "\n";
    }
    cout << "\n";
}

void print19(int rows){
    const int alph = 65;
    cout << "Pattern 19" << "\n";
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            cout << char(alph + i - 1);
        }
        cout << "\n";
    }
}

void print20(int rows){
    int alph = 65;
    cout << "Pattern 20" << "\n";
    for (int i = 1; i <= rows; i++){
        alph = 65;
        for (int s = 1; s <= rows - i; s++){
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++){
            cout << char(alph);
            if (j < i){
                alph++;
            } else {
                alph--;
            }
        }
        cout << "\n";
    }    
    cout << "\n";
}

void print21(int rows){
    cout << "Pattern 21" << "\n";
    int alph = 65;
    for (int i = 1; i <= rows; i++){
        for (int j = rows - i + 1; j <= rows; j++){
            cout << char(alph + j - 1);
        }
        cout << "\n";
    }
    cout << "\n";
}

void print22(int rows){
    cout << "Pattern 22" << "\n";
    for (int i = rows; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        for (int s = 1; s <= 2 * (rows - i); s++){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        for (int s = 1; s <= 2 * (rows - i); s++){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void print23(int rows){
    cout << "Pattern 23" << "\n";
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        for (int s = 1; s <= 2 * (rows - i); s++){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = rows - 1; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        for (int s = 1; s <= 2 * (rows - i); s++){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void print24(int rows){
    cout << "Pattern 24" << "\n";
    for (int i = 1; i <= rows; i++){
        if (i == 1 || i == rows){
            for (int j = 1; j <= rows; j++){
                cout << "*";
            }
        } else {
            cout << "*";
            for (int j = 2; j <= rows - 1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void print25(int n){
    cout << "Pattern 25" << "\n";
    int min, max, last;
    for (int row = 1; row <= 2 * n - 1; row++){
        last = n + 1;
        if (row <= n){
            min = n - row + 1;
        } else {
            min = row - n + 1;
        }
        for (int column = 1; column <= 2 * n - 1; column++){
            if (column <= n){
                if (last - 1 >= min){
                    last--;
                } else {
                    last = min;
                }
                cout << last;
            } else {
                max = column - n + 1;
                if (last + 1 == max){
                    last++;
                }
                cout << last;
            }
        }
        cout << "\n";
    }
    cout << "\n";
}