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
    for (int i = 1; i < n; i++)
    {
        int temp,j;
        temp=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>temp)
        {
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=temp;

    }
       cout<<"The sorted array is\n";
for (int j = 0; j < n; j++)
{
    cout<<arr[j]<<" ";
}
return 0;
       }

