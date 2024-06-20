#include<iostream>
using namespace std;
class ram{
    private:
     int roll_no;
     string name;
     public:
     void setting(int a, string h)   // this way we can use private 
     {                               // data outside the class 
        roll_no=a;
        name=h;
     }
     string getting()
     {
        return name;
     }
};
int main()
{  
    ram r;
    r.setting(10,"uttam");
    cout<<"name is :"<<r.getting()<<endl;
    return 0;
}