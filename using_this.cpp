#include<iostream>
using namespace std;
class ram{ 
       public:   // "this" is a pointer to current object 
 int weight;        // current object is a object jisse call ayi hai
 void func(int weight)
 {
    // weight=weight;     // it never initialise the object weight
    this->weight = weight; // correct way 
 }
 // default construnctor 
  ram()
  {

  }
  // making copy cunstrunctor 
   ram(ram& t)
   {
     this->weight=t.weight;
     cout<<"i am inside copy constructor"<<endl;
   }
     // making a distructor 
     ~ram()
     {                                            //it will automatically call at  last
        cout<<"i am inside distructor"<<endl;
     }
   
};
int main()
{  
    ram a;
    a.func(19); 
    ram b(a);           // or do as ram b=a;
    cout<<a.weight<<endl;
    cout<<b.weight;   
    return 0;
}