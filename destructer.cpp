#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called." << endl;
    }

    ~MyClass() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    cout << "Creating object on stack." << endl;
    {
        MyClass obj;                              // Constructor is called here
    }                              // Destructor is called when obj goes out of scope

    cout << "Creating object on heap." << endl;
    MyClass* obj = new MyClass();            // Constructor is called here
    delete obj;                      // Destructor is called here

    cout << "End of program." << endl;
    return 0;
}
