#include <iostream>
int factorial(int);
using namespace std;
int main()
{
int n;
cin>>n;
cout<<factorial(n);
return 0;
}

int factorial(int n)
{
    if (n==1)                //base condition
    {
        return 1;
    }
    
    int prevfactorial=factorial(n-1);
    return n*prevfactorial;
}