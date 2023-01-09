#include <iostream>
using namespace std;
int main()
{
    int n,num,c=0,i;
    cout<<"Enetr n\n";
    cin>>n;
    cout<<"Enter the number you want to search\n";
    cin>>num;
    int arr[n];
    cout<<"Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {c=i;}
    }
    if (c!=0)
    {

            cout<<"Element is found and is at "<<c<<" index";

        }
        else
        {cout<<"Element not found";}
    
    return 0;
}