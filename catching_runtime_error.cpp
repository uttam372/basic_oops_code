#include <iostream>
#include <stdexcept>  // For runtime_error
using namespace std;

int main() 
{
    int a = 90;
    int b = 0;
    
    try {
        if (b == 0)
            throw runtime_error("Attempted to divide by zero.");
        int c = a / b;
    }
    catch (const runtime_error& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}
