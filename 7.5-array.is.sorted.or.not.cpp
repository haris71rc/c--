#include <iostream>
bool arrcheck(int arr[], int n)
{
if (n==1)
{
    return 1;
}
if (arr[0]>arr[1])
{
    return false;
}
else
{
    bool roa= arrcheck(arr+1,n-1);
    return roa;
}
}
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<arrcheck(arr,n);
    return 0;
}