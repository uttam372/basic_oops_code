#include <iostream>
using namespace std;

// Base class A
class A {
public:
    void show() {
        cout << "Show from Class A" << endl;
    }
};

// Base class B
class B {
public:
    void show() {
        cout << "Show from Class B" << endl;
    }
};

// Derived class inherits from A and B
class C : public A, public B {
};

int main() {
    C obj;

    // Resolving ambiguity by specifying the class name
    obj.A::show(); // Calls show() from class A
    obj.B::show(); // Calls show() from class B

    return 0;
}
