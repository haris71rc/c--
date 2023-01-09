#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num of elements\n";
    cin>>n;
    const int N=1e6+2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i]=-1;
    }
    int arr[n];
    cout<<"Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        }
        int minind=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (idx[arr[i]]!=-1)
            {
                minind=min(minind,idx[arr[i]]);
            }
            else{
                idx[arr[i]]=i;
            }
        }
        
        if (minind==INT_MAX)
        {
            cout<<-1;
        }
        else{
            cout<<minind+1;
        }
        
        return 0;
        }