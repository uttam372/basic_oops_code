#include<iostream>
using namespace std;
class A {
      private:
      int a ;
      int b;
      friend class B;
      friend void print(A &a); // as now private member can be access outside the class
};

class B{
      public:
      int geter(A &obj)   // as this class is friend of A so can access private member of A
      { 
        
        return obj.a;
      }

};

void print(A &a)
{
    cout<<a.a<<endl;
}

int main()
{    
      A a;
      print(a);
      B b;
     int c = b.geter(a);
     cout<<c;
      return 0;
}