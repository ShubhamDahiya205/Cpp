#include <iostream>
using namespace std;

class student {
    char name[30];
    char branch[50];
    long roll_no;
    int age;
    char sex;
    int cm_marks;
    int oop_marks;
    int ds_marks;
    int dm_marks;
    int dlcd_marks;
    public:
        void get_data(){
            cout << "Name : "; 
            cin >> name;
            cout << "Branch : "; 
            cin >> branch;
            cout << "Roll No : "; 
            cin >> roll_no ;
            cout << "Age : "; 
            cin >> age;
            cout << "Sex [M/ F] : "; 
            cin >> sex;
            cout << "Marks Scored : \n"; 
            cout << "Computational Methods : "; 
            cin >> cm_marks;
            cout << "Object Oriented Programming : "; 
            cin >> oop_marks;
            cout << "Data Structures : "; 
            cin >> ds_marks;
            cout << "Discrete Mathematics : "; 
            cin >> dm_marks;
            cout << "Digital Logic and Compiler Design : "; 
            cin >> dlcd_marks;
        }

        void put_data(){
            cout << "Name       : " << name << '\n';
            cout << "Percentage : " << percentage_scored() << '\n';
        }

        float percentage_scored(){
            float total = 500;
            float scored = cm_marks + ds_marks + oop_marks + dm_marks + dlcd_marks;
            float percentage = (scored/total)*100;
            return percentage;
        }
};

int main() {
    int l;
    cout << "Enter the number of students : ";
    cin >> l;
    class student stud_list[l];
    for (int i = 0; i < l; i++){
        cout << "\nStudent " << i+1 << " : \n";
        stud_list[i].get_data();
    }
    cout << "\nStudents who scored > 70% : ";
    for (int i = 0; i < l; i++){
        if (stud_list[i].percentage_scored() > 70){
            cout << "\n";
            stud_list[i].put_data();
        }
    }
    cout << "\nBy - Shubham Dahiya (00414802724)" << '\n';
    return 0;
}

