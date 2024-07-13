#include<iostream>
using namespace std;
class a{
    public:
    int value;
    a(){
        value = 100;
    }
};
class b{
    public:
   int value;
    b(){
        value = 200;
    }
};
class c:public a,public b{        
    public:
    int a;
};
int main()
{   
    c obj;
    cout<<obj.a::value<<endl;   // if i will not write the scope resolution operater 
                                // compiler get confuse which calss value is being called
    cout<<obj.b::value;
    return 0;
}