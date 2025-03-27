#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int* ptr = &num;
    
    cout << "Value: " << *ptr << endl;
    cout << "Memory Address: " << ptr << endl;
    
    return 0;
}
