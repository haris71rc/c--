#include <iostream>
int fact(int);
using namespace std;
int main()
{
  int n,x,y,z,r,q,c;
  cout<<"Enter the value of n and r\n";
  cin>>n>>r;
  x=fact(n);
  y=fact(r);
  z=n-r;
  q=fact(z);
  c=x/(z*y);
  cout<<"the nCr value is  "<<c;
  return 0;
}

int fact(int k)
{
int factorial=1;
for (int i = k; i >= 1; i--)
{
    factorial*=i;
}
return factorial;
}
