#include <iostream>
using namespace std;

int main() 
{
    int a = 90;
    int b = 0;
    
    try {
        if (b == 0)
            throw "Error: Division by zero!";
        if (a < 0)
            throw 404;  // Custom error code
        int c = a / b;
    }
    catch (const char* e) {
        cout << e << endl;
    }
    catch (int e) {
        cout << "Custom error code: " << e << endl;
    }
    return 0;
}
