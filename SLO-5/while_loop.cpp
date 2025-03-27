#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Counting from 1 to " << n << ":\n";
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}
