#include<iostream>
using namespace std;
class ram{
       public:
       static int a;
       static int b;
       void print(){
        cout<<a<<" "<<b<<endl;
       }
};

int ram::a;   // need to define like this in case of static int
int ram::b;
 
 int main()
 { 
   ram obj1; 
   obj1.a=10;
   obj1.b=20;
   obj1.print();

   ram obj2; 
   obj2.a=1;
   obj2.b=2;
   obj2.print();
   obj1.print();  //  becouse all the object are pointing the same a and b which is static after changing
   return 0;      //  in obj2 we will got the change in obj1 also
 }