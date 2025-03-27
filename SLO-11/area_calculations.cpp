#include <iostream>
using namespace std;

float areaCircle(float radius) {
    return 3.1416 * radius * radius;
}

float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

float areaParallelogram(float base, float height) {
    return base * height;
}

int main() {
    int choice;
    float radius, base, height;
    
    cout << "Choose shape to calculate area:\n";
    cout << "1. Circle\n2. Triangle\n3. Parallelogram\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Area of Circle: " << areaCircle(radius) << endl;
            break;
        case 2:
            cout << "Enter base and height: ";
            cin >> base >> height;
            cout << "Area of Triangle: " << areaTriangle(base, height) << endl;
            break;
        case 3:
            cout << "Enter base and height: ";
            cin >> base >> height;
            cout << "Area of Parallelogram: " << areaParallelogram(base, height) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
