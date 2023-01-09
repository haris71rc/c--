#include <iostream>
int sum(int,int);
using namespace std;
int main()
{int a,b,c;
cout<<"enter the two numbers\n";
cin>>a>>b;
c=sum(a,b);
cout<<"the sum is "<<c;

    return 0;
}
int sum(int x,int y)
{int z;
    z=x+y;
    return z;
}