#include<iostream>
/*    #include"name_of_file.cpp"   */
using namespace std;
class hero{                      //only class which is empty take 0 size
        //properties
};
int main()
{
    hero h1;  //objects has been initialised
    cout<<"size = "<<sizeof(h1)<<endl; // size will be 1  for object only
                                       //becouse there is no properties ;
    return 0;                          //else give size of data type   
}