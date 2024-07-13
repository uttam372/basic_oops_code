#include <iostream>

// Base class
class Animal    // here we can say that this is a abstract class
{
public:
    
    virtual void makeSound()    // it is a virtual function that can be overridden in derived class
    {
        std::cout << "Animal sound" << std::endl;
    }

    
    virtual void move() = 0;   // it is a pure virtual function that MUST be overridden in derived class.
};

// Derived class
class Dog : public Animal 
{
public:
    void makeSound()  
    {
        std::cout << "Bark" << std::endl;
    }

    void move()  
    {
        std::cout << "Run" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound();  // Output: Bark
    myDog.move();       // Output: Run

    Animal* animalPtr = &myDog;                // it will call animal class function in case of not writting 
    animalPtr->makeSound();  // Output: Bark    // virtual keyword there although it is having mydog class refrence
    animalPtr->move();       // Output: Run

    return 0;
}
