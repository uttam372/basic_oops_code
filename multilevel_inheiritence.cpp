#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating\n";
    }
};

// Derived class 1 inheriting from Animal
class Dog : public Animal {                  // inheritence with mode of inheritence "public"
public:
    void bark() {
        cout << "Dog is barking\n";
    }
};

// Derived class 2 inheriting from Dog
class GermanShepherd : public Dog {
public:
    void display() {
        cout << "German Shepherd is a type of dog\n";
    }
};

int main() {
    GermanShepherd gs;
    
    gs.eat();     // Inherited from Animal
    gs.bark();    // Inherited from Dog
    gs.display(); // Defined in GermanShepherd
    
    return 0;
}
