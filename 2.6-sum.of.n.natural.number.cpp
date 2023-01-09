#include <iostream>
void nsum(int);
using namespace std;
int main()
{
int n;
cout<<"Enter n\n";
cin>>n;
nsum(n);
return 0;
}

void nsum(int k)
{int sum=0;
for (int i = 1; i <= k; i++)
{
    sum+=i;
}
cout<<sum;

}