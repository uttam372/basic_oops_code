#include<iostream>
using namespace std;
class ram{
    public:
     int sum(int a , int b){     // sum function is existing in many form 
        return a+b;              // so it is an pollymorphism 
     }

     int sum(float a , int b){
        return a+b;
     }

     int sum(int a , int b, int c){
        return a+b+c;
     }
};
int main()
{  ram a;
   cout<<a.sum(40,6,89);
    return 0;
}