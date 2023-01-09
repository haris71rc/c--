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
    }int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        
         if (arr[i]>=max)
         {
           max=arr[i]; 
         }
         cout<<max<<" ";
         
    }
    return 0;
    
    }