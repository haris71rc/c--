#include <iostream>
int power(int,int);
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
    return 0;

}

int power(int n,int p)
{
    if (p==0)             //base condition
    {
        return 1;
    }
    
    int prevpower=power(n,p-1);
    return n*prevpower;
}