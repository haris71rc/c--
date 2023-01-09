#include <iostream>
void fibonacci(int);
using namespace std;
int main()
{
int n;
cout<<"Enter number of terms in series\n";
cin>>n;
fibonacci(n);
return 0;
}

void fibonacci(int n)
{
int n1=0,n2=1,n3;
for (int i = 1; i <= n; i++)
{
    cout<<n1<<"\n";
    n3=n1+n2;
    n1=n2;
    n2=n3;
    
}


}