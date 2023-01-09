#include <iostream>
void sum(int,int);
using namespace std;
int main()
{int a,b;
cout<<"Enter the two numbers\n";
cin>>a>>b;
sum(a,b);
    return 0;
}
void sum(int x,int y)
{int c;
c=x+y;
cout<<"the sum is "<<c;

}