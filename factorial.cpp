#include <iostream>
using namespace std;
int main()
{int n,i,factorial=1;
cout<<"Enter the number\n";
cin>>n;
for(i=n;i>0;i--)
{
factorial=factorial*i;

}
cout<<"the factorial of the number is   "<<factorial;

    return 0;
}