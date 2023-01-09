#include <iostream>
void decreasing(int);
void increasing(int);
using namespace std;
int main()
{
    int n;
    cin>>n;
    decreasing(n);
    increasing(n);
    return 0;
}


// for in decreasing order

void decreasing(int n)
{
    if (n==0)
    {
        return;
    }
    
    cout<<n;
    decreasing(n-1);
}

// for in increasing order

void increasing(int n)
{ if (n==0)
    {
        return;
    }

increasing(n-1);
cout<<n;
}