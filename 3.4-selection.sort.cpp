#include <iostream>
using namespace std;
int main()
{ int n;
cout<<"Enter the num of elements\n";
cin>>n;
int arr[n];
cout<<"Enter the elements of array\n";
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n-1; i++)
{
for (int j = i+1; j < n; j++)
{ if(arr[j]<arr[i])
    {
        int temp;
    temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
    }
}

}
cout<<"The sorted array is\n";
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
return 0;

}