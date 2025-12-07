#include <iostream>
using namespace std;

class Employee {
    int id;
    char name[50];
    char dept[50];
    float salary;

public:
    void inputData() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Department: ";
        cin >> dept;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayData() {
        cout << "\nEmployee Details:\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;

    e.inputData();
    e.displayData();

    return 0;
}
