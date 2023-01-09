#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int n,c=0,sum=0,r,q ,originaln;
cout<<"Enter the number\n";
cin>>n;
originaln=n;
while (n>0)
{
  r= n%10;
  sum+=pow(r,3) ;
  n=n/10;
}
if (sum==originaln)
{
    cout<<"Its a armstrong number and the number is  "<<sum;
}
else{
    cout<<"not a armstrong number";
}
return 0;
}