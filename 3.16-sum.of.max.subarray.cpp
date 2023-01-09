#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number of elements\n";
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int mx=INT_MIN,sum=0;
for (int i = 0; i < n; i++)
{
   sum+=arr[i];
   if (sum<0)
   {
    sum=0;
   }
   mx=max(mx,sum);
}

cout<<mx;
return 0;
}