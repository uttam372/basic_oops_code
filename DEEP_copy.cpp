#include<iostream>
using namespace std;
class ram {
      public:
      int a;
      int* b;
      ram():a(10),b(new int(20)){}

      // makinng copy constructor
      ram(ram& obj)                 // for the first call ram s(r) this keyword is for s object
      {
        this->a = obj.a;
        this->b = new int(*obj.b);  // creating another pointer which pointing the equal value but not same 
      }
      void print()
      {
        cout<<a<<" "<<b<<" "<<*b<<endl;
      }

      ~ram(){
        delete b;
      }
};

 int main()
{  
    ram r;
    r.print();
    ram s(r);
    s.print();
    ram t=r;
    t.print();
    return 0;
}