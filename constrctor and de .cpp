#include <iostream>
using namespace std;
class Demo {
    int x;
public:
    Demo() {
        x = 10;
        cout << "Constructor Called. Value of x = " << x << endl;
    }
    ~Demo() {
        cout << "Destructor Called. Object Destroyed." << endl;
    }
};
int main() {
    Demo obj;
    cout << "Inside Main Function." << endl;
    return 0;
}
