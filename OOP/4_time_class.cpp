#include <iostream>
using namespace std;
class Time{
    int hour, minute, second;
    public:
        void put(){
            cout << "Enter the following : \n";
            cout << "Hour : ";
            cin >> hour;
            cout << "Minute : ";
            cin >> minute;
            cout << "Second : ";
            cin >> second;
            minute += (second/60);
            hour += (minute/60);
            second = second % 60;
            minute = minute % 60;
        };
        void get(){
            cout << "\nTime : " << hour << " hr " << minute << " min "  << second << " sec \n";
        };
        void add(Time time_1, Time time_2){
            second = time_1.second + time_2.second;
            minute = time_1.minute + time_2.minute + (second/60);
            hour = time_1.hour + time_2.hour + (minute/60);
            second = second % 60;
            minute = minute % 60;
        };
};
int main() {
    Time time_1, time_2, time_sum;
    cout << "Time Class\n\n";
    cout << "First Time Object\n";
    time_1.put();
    time_1.get();
    cout << "\nSecond Time Object\n";
    time_2.put();
    time_2.get();
    time_sum.add(time_1, time_2);
    cout << "\nSum of time 1 and time 2 : ";
    time_sum.get();
    cout << "\nBy - Shubham Dahiya (00414802724)" << '\n';
    return 0;
}