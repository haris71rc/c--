#include <iostream>
int fact(int);
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows\n";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<< fact(i)/(fact(i-j)*fact(j));
        }
        cout<<endl;
    }
    return 0;
}

int fact(int k)
{
int factorial=1;
for (int i = k; i >= 1; i--)
{
    factorial*=i;
}
return factorial;
}