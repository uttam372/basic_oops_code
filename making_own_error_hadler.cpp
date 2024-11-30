#include <iostream>
#include <exception>
using namespace std;

class DivisionByZeroException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero!";
    }
};

int main() 
{
    int a = 90;
    int b = 0;
    
    try {
        if (b == 0)
            throw DivisionByZeroException();
        int c = a / b;
    }
    catch (const DivisionByZeroException& e) {
        cout << e.what() << endl;
    }
    return 0;
}
