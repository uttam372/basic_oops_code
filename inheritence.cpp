#include<string>
#include<iostream>
using namespace std;
class ram{
      public:
      string  name;
      int roll;
      void geting(){
        cout<<"i am in the parent class"<<endl;
      }
};
class sita:public ram {      // syntex of inheriting the class ram publically 
                             // here we define the mode of inheritence see table 
};
int main()
{   
    sita s;
    s.geting();
    return 0;
}