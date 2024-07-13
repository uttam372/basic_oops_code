#include<iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating\n";
    }
};

// Derived class 1 inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking\n";
    }
};

// Derived class 2 inheriting from Animal
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing\n";
    }
};

int main() {
    Dog d;
    Cat c;
    
    d.eat();  // Inherited from Animal
    d.bark(); // Defined in Dog
    
    cout << endl;
    
    c.eat();  // Inherited from Animal
    c.meow(); // Defined in Cat
    
    return 0;
}
