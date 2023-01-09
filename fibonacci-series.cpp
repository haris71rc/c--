#include <iostream>
using namespace std;
int main()
{int i,c,a=0,b=1,n;
cout<<"Enter the number of elements\n";
cin>>n;
for (i = 0; i <n ; i++)
{
  c=a+b;
  cout<<c<<endl;
  a=b;
  b=c;

}


    return 0;
}
