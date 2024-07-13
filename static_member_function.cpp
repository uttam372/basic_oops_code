#include<iostream>
using namespace std;
class ram {
     public:
     int a;
     int b;
    ram() : a(1),b(4){}
    static void print()
    {
        //cout<<a<<" "<<b<<endl;  // it will give error becouse there is no this pointer pass here as other
        cout<<" i am in static function"<<endl;
    }
};

int mian() 
{   
    ram obj1;
    ram::print();
    // ram obj2;
    // ram::print();
    return 0;
}