#include <iostream>
using namespace std;
int main()
{
    int n,sum,mx=-1;
    cout<<"Enter the num of elements\n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
               for (int k = i; k <= j; k++)
               {
                cout<<a[k];
               }cout<<endl;
               
               }
               cout<<endl;
            }
            
            return 0;
            }