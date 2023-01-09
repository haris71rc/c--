#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    int j=1;
    while (j<=n/2)
    {int temp;
        temp=arr[j];
        arr[j]=arr[n];
        arr[n]=temp;
        j++;
        n--;
    }
    
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i];
    }
    return 0;
}