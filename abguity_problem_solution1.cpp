#include <iostream>
using namespace std;

// Base class
class A {
public:
    void show() {
        cout << "Show from Class A" << endl;
    }
};

// Intermediate classes with virtual inheritance
class B : virtual public A {};
class C : virtual public A {};

// Derived class
class D : public B, public C {};

int main() {
    D obj;
    obj.show(); // No ambiguity due to virtual inheritance

    return 0;
}
