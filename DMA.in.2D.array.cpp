#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int** arr=new int*[n];           //creation of 2d array
        for (int i = 0; i < n; i++)
    {
         arr[i]= new int[m];           //n num of rows banane ke baad m num of col bana rhe h dynamically
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete []arr[i];                   //for deleting coloumn
    }
    delete []arr;                           // for deleting rows
    return 0;
    
}