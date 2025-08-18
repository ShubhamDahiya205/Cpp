#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float area(float radius);
float area(float length, float breadth);
float area(float a, float b, float c);

int main() {
    int shape;
    std::cout << "Enter one of the following to find area of the shape: \n";
    std::cout << "Circle    : 1\n";
    std::cout << "Rectangle : 2\n";
    std::cout << "Triangle  : 3\n";
    std::cout << "Exit      : 4\n";
    do{
        std::cout << "\nEnter     : ";
        cin >> shape;
        switch(shape){
            case 1 :
            float radius, area_circle;
            cout << "Enter radius of the circle : ";
            cin >> radius;
            area_circle = area(radius);
            cout << "Area of the circle is : " << area_circle << " units squared"; 
            break;
            
            case 2 :
            float length, breadth, area_rect;
            cout << "Enter length of the rectangle : ";
            cin >> length;
            cout << "Enter breadth of the rectangle : ";
            cin >> breadth;
            area_rect = area(length, breadth);
            cout << "Area of the rectangle is : " << area_rect << " units squared"; 
            break;
            
            case 3 :
            float a, b, c, area_triangle;
            cout << "Enter side 1 of the traingle : ";
            cin >> a;
            cout << "Enter side 2 of the traingle : ";
            cin >> b;
            cout << "Enter side 3 of the traingle : ";
            cin >> c;
            area_triangle = area(a, b, c);
            cout << "Area of the triangle is : " << area_triangle << " units squared"; 
            break;
            
            case 4:
            cout << "Exiting!\n";
            break;

            default : cout << "Invalid Input!\n";
        }
        cout << "\n";
    } while (shape != 4);
        return 0;
    }
    
    float area(float radius){
        return M_PI * radius * radius;}
        float area(float length, float breadth){
            return length * breadth;
}
float area(float a, float b, float c){
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}