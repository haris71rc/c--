#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for (int i = 1; i <= n; i++)
   {
    if (i==1||i==n)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<"*";
        }cout<<endl;
        
    }
    else
    {
    for (int j = 1; j <= n-i; j++)
    {
        cout<<" ";
    }
    cout<<"*";
    }cout<<endl;
   }
    return 0;
}