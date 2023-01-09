#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n],b[n][n];
    cout<<"Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j]=a[j][i];
        }
        
    }
    cout<<"the transpose of matrix is\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    return 0;
    
    
    
    }