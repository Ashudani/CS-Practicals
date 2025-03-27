#include <iostream>
using namespace std;

int main() {
    //practical number 1
    cout<<"Practical Number 1!"<<endl;
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // If statement
    if (number > 0) {
        cout << "The number is positive." << endl;
    }

    // If-else statement
    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    // Else-if statement
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    
    return 0;
}
//https://github.com/emkaaygolden/AKUEB_Grade12Practicals_2024-25