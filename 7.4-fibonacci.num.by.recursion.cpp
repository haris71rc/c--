#include <iostream>
int fibonacci(int);
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}

int fibonacci(int n)
{
    if (n==0)              //base condition
    {
       return 0;
    }
     if (n==1)              //base condition
    {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
    
    
}