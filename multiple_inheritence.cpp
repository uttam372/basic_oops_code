#include<iostream>
using namespace std;
class a{
    public:
    void cal1()
    {
        cout<<"i am in class a"<<endl;
    }
};
class b{
    public:
    void cal2()
    {
        cout<<"i am in class b"<<endl;
    }
};
class c:public a,public b{       // write the same name for each function and see what happen 
    public:
    void cal3()
    {
        cout<<"i am in class c"<<endl;
    }
};
int main()
{   
    c obj;
    obj.cal1(); obj.cal2(); obj.cal3();
    return 0;
}