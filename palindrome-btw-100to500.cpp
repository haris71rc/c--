#include <iostream>
using namespace std;
int main()
{int n,d,r,num;
for(n=100;n<=500;n++)
{
num=n;
r=0;
while (num>0)
{
  d=num%10;
  r=r*10+d;
  num=num/10;
}
if (n==r)
{
cout<<n<<endl; 
}

}



    return 0;
} 