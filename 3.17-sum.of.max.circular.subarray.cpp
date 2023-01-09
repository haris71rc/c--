#include <iostream>
#include <climits>
using namespace std;
int kedane(int arr[], int n)
{
int mx=INT_MIN;
int sum=0;
for (int i = 0; i < n; i++)
{
    sum+=arr[i];
    if (sum<0)
    {
        sum=0;
    }
    mx=max(sum,mx);
}
   return mx;

}
int main()
{
    int n,noncircularsum;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    noncircularsum=kedane(arr,n);
    int circularsum,totalsum=0;
    for (int i = 0; i < n; i++)
    { 
        totalsum+=arr[i];
        arr[i]=-arr[i];
        
    }
    
    circularsum=totalsum + kedane(arr,n);
    cout<< max(circularsum,noncircularsum)<<endl;
    return 0;
}