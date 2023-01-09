#include <iostream>
using namespace std;
int main()
{
    int n;
    char x='A';
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<x;
            x++;
             if (x=='D')
        {
            x='A';
        }
        
        }cout<<endl;
          
    }
    return 0;
}