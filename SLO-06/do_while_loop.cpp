#include <iostream>
using namespace std;

int main() {
    int i = 1, n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << ":" << endl;
    
    do {
        cout << i << endl;
        i++;
    } while (i <= n);
    
    return 0;
}
