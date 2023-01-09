#include <iostream>
using namespace std;
int multiply(int arr[],int n)
{int x,sum1=0,sum2=0;
    if (n%2==0)
    {
        x=n/2;
    }
    else{
        x=(n/2)+1;
    }
    for (int i = 0; i < x; i++)
    {
       sum1+=arr[i]; 
    }
    for (int i = x; i < n; i++)
    {
        sum2+=arr[i];
    }
    
    return sum1*sum2;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   cout<<multiply(arr,n);
    return 0;
}