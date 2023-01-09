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
        int c=1;
        while(c<=n-1)
     {
        for (int j = 0; j < n-c; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            
        }c++;
     }
     
     cout<<"The sorted array is\n";
for (int j = 0; j < n; j++)
{
    cout<<arr[j]<<" ";
}
return 0;
    
}