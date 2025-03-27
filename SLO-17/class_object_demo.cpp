#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
    
public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;
    string name;
    int age;
    
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    
    s1.setData(name, age);
    s1.display();
    
    return 0;
}
