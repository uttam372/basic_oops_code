#include<iostream>
using namespace std;
class ram{
    public:
     int age;
     string type;   // new keyword alwaysh return a address;

};
int main()
{   
    ram* a = new ram;     // allocating dynamically by the help of ->
    a->type = "uttam";    // or use (*a).type="uttam";
    a->age = 91;          // and use (*a).age=80;
    cout<<"age = "<<a->age<<endl;
    cout<<"type = "<<a->type<<endl;
    return 0;
}