#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int highest, lowest, sum = 0;

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (i == 0) {
            highest = lowest = arr[i];
        } else {
            if (arr[i] > highest) highest = arr[i];
            if (arr[i] < lowest) lowest = arr[i];
        }
    }

    float average = (float)sum / n;
    
    cout << "Highest value: " << highest << endl;
    cout << "Lowest value: " << lowest << endl;
    cout << "Average value: " << average << endl;
    
    return 0;
}
