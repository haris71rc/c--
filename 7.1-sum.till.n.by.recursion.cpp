#include <iostream>
int sum(int);
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    x=sum(n);
    cout<<x;
    return 0;
}
int sum(int n)
{
    if (n==0)          //base condition
    {
        return 0;
    }
    
    int prevsum=sum(n-1);
    return n+prevsum;
}