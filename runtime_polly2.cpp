#include<iostream>
using namespace std;
class animal{
         public:
         animal()
         {
            cout<<"speaking"<<endl;
         }
};

class dog:public animal{     
        public:
        dog()            
        {
            cout<<"barking"<<endl;
        }
};
int main()
{  
    animal* a = new animal();
    
    dog* d = new dog();    // call both the constructor

    // upcasting
    animal* c = new dog();  // making object of dog type which refring by the animal type pointer

    return 0;
}