#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[50], str2[50], str3[50];
    
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    
    strcpy(str3, str1);
    cout << "Copied string: " << str3 << endl;
    
    strcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;
    
    cout << "Length of first string: " << strlen(str1) << endl;
    cout << "Length of second string: " << strlen(str2) << endl;
    
    int result = strcmp(str1, str2);
    if (result == 0)
        cout << "Strings are equal" << endl;
    else if (result > 0)
        cout << "First string is greater" << endl;
    else
        cout << "Second string is greater" << endl;
    
    return 0;
}
