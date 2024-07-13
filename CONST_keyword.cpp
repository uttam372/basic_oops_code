#include<iostream>
using namespace std;
class ram{
     private:
     int a =10;
     int* b = new int(20);
     public:
     const int c;
      ram()
      {
        a =10;
        b = new int(20);
        c=30;             //not working becouse c is constant you have to write initialiser constructor 
      }                   // for this

      //initialiser
       ram():a(30),b(new int(50)),c(0)   // this is how to initialise the const variable here
       {
          cout<<"in init list"<<endl;
       }


     void set()
     {
        a = 30;
        *b=40;
        cout<<a<<" "<<*b<<endl;
     }

    //  void seter() const   // here becouse of const keyword you can't reassined the new value ;
    //  {                     // but even you want to change the variable value with this const function 
    //       a=60;           // then you have to write "mutable" keyword before that particular variable
    //       *b = 100;
    //  }
};

int main()
{   
    ram* r=new ram;
    r->set();
    return 0;
}