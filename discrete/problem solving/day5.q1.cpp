#include <iostream>
using namespace std;
void chocolate(int arr[],int i,int j)
{if (i==j)
{
    cout<<arr[i];
    return;
}

if (arr[i]>arr[j])
{
    i++;
}
else
{
    j--;
}
chocolate(arr,i,j);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }int i=0,j=n-1;
    chocolate(arr,i,j);
    return 0;
}