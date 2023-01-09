#include <iostream>
using namespace std;
void binarysearch(int arr[], int s , int e, int key)
{
if (s>e)
{
    cout<<"Not found";
    return;
}
int mid=(s+e)/2;
if (arr[mid]==key)
{
   cout<<"Found";
   return;
}

if (arr[mid] < key)
{
    binarysearch(arr,s,e=mid-1,key);
}
else
binarysearch(arr,s=mid+1,e,key);


}
int main()
{
    int n,key,s,e;
    cin>>n>>key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    binarysearch(arr,s=0,e=n-1,key);
    return 0;
}