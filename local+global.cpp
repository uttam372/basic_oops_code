#include<iostream>
using namespace std;
int x = 20;
int main()
{  
   int x =10;
   cout<<x<<endl;
   cout<<::x<<endl;   // way to access global variable 
    {
        int x =30;        // local jiska scop bs line 9 to line 12 tk hai 
        cout<<x<<endl;
        ::x =0; 
        cout<<::x<<endl;       
    }
    return 0;
}