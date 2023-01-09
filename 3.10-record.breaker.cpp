#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num of elements\n";
    cin>>n;
    int arr[n+1];
    arr[n]=-1;
    cout<<"Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        }
       int mx=-1;
       int ans=0;
       for (int i = 0; i <n; i++)
       {
        if (arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }mx=max(mx,arr[i]);
        cout<<endl;

       }
       cout<<ans;
        
        
        return 0;
        }