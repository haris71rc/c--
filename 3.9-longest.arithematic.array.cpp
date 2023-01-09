#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        }
        int ans=2;
        int pd=arr[1]-arr[0];
        int curr=2;
        for (int i = 2; i < n; i++)
        {
            if (pd==arr[i]-arr[i-1])
            {
                curr++;
            }
            else{
                pd=arr[i]-arr[i-1];
                curr=2;
            }
            ans=max(ans,curr);
        }
        
     cout<<ans;
     return 0;
}