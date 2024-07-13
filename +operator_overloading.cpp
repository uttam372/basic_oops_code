#include<iostream>
using namespace std;
class ram{
   public:
   int val;
   void operator+(ram& b)    // here a is as current object and 
   {                         // b is as inpute parametor 
    int value1 = this->val;
    int value2 = b.val;
    cout<<value1-value2<<endl;
   }
};
int main()
{  
    ram a,c;
    a.val = 10;
    c.val= 30;
    a+c;         // calculating difference from + operator
    return 0;
}