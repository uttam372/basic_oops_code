#include<iostream>
using namespace std;
class animal{
         public:
         void speak()   // write virtual keyword here before void and see what happend and why.
         {
            cout<<"speaking"<<endl;
         }
        //  virtual void speak();
};

class dog:public animal{     
        public:
        void speak()            // here we are overwriting the method so runtime pollymorphism
        {
            cout<<"barking"<<"."<<endl;
        }
};
int main()
{  
    animal* a = new animal;
    a->speak();
    dog* d = new dog;
    d->speak();

    // upcasting
    animal* c = new dog;  // see this section carefully, if you add virtual keyword as above mentioned  
    c->speak();           // then this time derived class speak function will be called 
    return 0;
}