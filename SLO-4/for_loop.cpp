#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Printing the first " << n << " natural numbers:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Printing the square of each number:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Square of " << i << " is " << (i * i) << endl;
    }

    cout << "Printing even numbers up to " << n << ":" << endl;
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Printing odd numbers up to " << n << ":" << endl;
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
