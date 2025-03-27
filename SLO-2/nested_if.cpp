#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0) {
        if (num == 0) {
            cout << "The number is zero." << endl;
        } else {
            if (num % 2 == 0) {
                cout << "The number is positive and even." << endl;
            } else {
                cout << "The number is positive and odd." << endl;
            }
        }
    } else {
        cout << "The number is negative." << endl;
    }

    return 0;
}
