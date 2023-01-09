/*Q-Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.*/

#include <iostream>
using namespace std;
int main()
{
    int n,s;
    cout<<"Enter the num of elements\n";
    cin>>n;
    cin>>s;
    int arr[n];
    cout<<"Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        }
        int i=0,j=0,en=-1,st=-1,sum=0;
        while (j<n && sum+arr[j]<=s)
        {
            sum+=arr[j];
            j++;
        }
        if (sum==s)
        {
            cout<<i+1<<" "<<j;
            return 0;
        }
        while (j<n)
        {
            sum+=arr[j];
            while (sum>s)
            {
                sum-=arr[i];
                i++;
            }
            if (sum==s)
            {
                st=i+1;
                en=j+1;
                break;
            }
            
        }
        cout<<st<<" "<<en;
        
        return 0;

}
