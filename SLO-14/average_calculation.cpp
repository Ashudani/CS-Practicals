#include <iostream>
using namespace std;

float calculateAverage(int numbers[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return static_cast<float>(sum) / size;
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    
    int numbers[size];
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    
    cout << "Average of the numbers: " << calculateAverage(numbers, size) << endl;
    
    return 0;
}
