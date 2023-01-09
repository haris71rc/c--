#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num of elements\n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        }
        int maxsum=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            { int sum=0;
                for (int k = i; k <=j; k++)
                {
                    sum+=a[k];
                }
                maxsum=max(sum,maxsum);
            }cout<<endl;
            
        }
        
        cout<<maxsum;

}
        
        
        