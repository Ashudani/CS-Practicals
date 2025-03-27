#include <iostream>
using namespace std;

float volumeCylinder(float radius, float height) {
    return 3.1416 * radius * radius * height;
}

float volumeSphere(float radius) {
    return (4.0 / 3.0) * 3.1416 * radius * radius * radius;
}

float volumeCube(float side) {
    return side * side * side;
}

int main() {
    int choice;
    float radius, height, side;
    
    cout << "Choose shape to calculate volume:\n";
    cout << "1. Cylinder\n2. Sphere\n3. Cube\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter radius and height: ";
            cin >> radius >> height;
            cout << "Volume of Cylinder: " << volumeCylinder(radius, height) << endl;
            break;
        case 2:
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Volume of Sphere: " << volumeSphere(radius) << endl;
            break;
        case 3:
            cout << "Enter side length: ";
            cin >> side;
            cout << "Volume of Cube: " << volumeCube(side) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
