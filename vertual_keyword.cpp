#include<iostream>
using namespace std;
class animal{
         public:
        virtual void speak()    // "virtual"  This allows the method to be dynamically bound (resolved at runtime) based on the actual object type 
         {
            cout<<"speaking"<<endl;
         }
};

class dog:public animal{     
        public:
        void speak()            // here we are overwriting the method so runtime pollymorphism
        {
            cout<<"barking"<<endl;
        }
};
int main()
{  
    // upcasting
    animal* c = new dog;  // see this section carefully in case of upcasting alwysh parent  
    c->speak();           // function is called to avoid this we will use vertual keyword
    return 0;
}