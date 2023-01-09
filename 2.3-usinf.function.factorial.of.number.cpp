#include <iostream>
int fact(int);
using namespace std;
int main()
{
    int n,factorial;
    cout<<"Enter the number\n";
    cin>>n;
    factorial=fact(n);
    cout<<"The factorial of the number is "<<factorial;
    return 0;
}
int fact(int n)
{
int x=1;
for (int i = n ; i >= 1; i--)
{
    x=x*i;
}
return x;

}