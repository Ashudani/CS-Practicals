#include <iostream>
using namespace std;

class Person {
private:
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
    Person p1;
    string name;
    int age;
    
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    
    p1.setData(name, age);
    p1.display();
    
    return 0;
}
