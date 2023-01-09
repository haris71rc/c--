#include <iostream>
using namespace std;
int c = 50;
int main()
{
int a,b,c;
cout<<"enter the value of two numbers\n";
cin>>a>>b;
c = a+b;
cout<<"the sum is"<<c<<endl;
cout<<"the global value of c is"<<::c; //:: is scope resolution operator
    return 0;
}