#include <iostream>
using namespace std;
// SINGLE INHERITANCE
class A {
public:
    void showA() {
        cout << "Single Inheritance: Base Class A\n";
    }
};
class B : public A {  
public:
    void showB() {
        cout << "Single Inheritance: Derived Class B\n\n";
    }
};
// MULTIPLE INHERITANCE
class X {
public:
    void showX() {
        cout << "Multiple Inheritance: Base Class X\n";
    }
};
class Y {
public:
    void showY() {
        cout << "Multiple Inheritance: Base Class Y\n";
    }
};
class Z : public X, public Y {  
public:
    void showZ() {
        cout << "Multiple Inheritance: Derived Class Z\n\n";
    }
};
// MULTILEVEL INHERITANCE
class P {
public:
    void showP() {
        cout << "Multilevel Inheritance: Class P\n";
    }
};
class Q : public P { 
public:
    void showQ() {
        cout << "Multilevel Inheritance: Class Q \n";
    }
};

class R : public Q { 
public:
    void showR() {
        cout << "Multilevel Inheritance: Class R\n\n";
    }
};
int main() {
    cout << " SINGLE INHERITANCE\n";
    B obj1;
    obj1.showA();
    obj1.showB();
    cout << "MULTIPLE INHERITANCE\n";
    Z obj2;
    obj2.showX();
    obj2.showY();
    obj2.showZ();
    cout << "MULTILEVEL INHERITANCE\n";
    R obj3;
    obj3.showP();
    obj3.showQ();
    obj3.showR();
    return 0;
}
