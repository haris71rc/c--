#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int rs=0,re=n-1,cs=0,ce=m-1;

    while (rs<=re && cs<=ce)
    {  //for upper rows
       for (int col = cs; col <= ce; col++)
       {
         cout<<arr[rs][col]<<" ";
         }  rs++;


       //for ending coloumns
       for (int row = rs; row <= re; row++)
       {
          cout<<arr[row][ce]<<" ";
          }   ce--;
       
       
       //for bottom rows
       for (int col = ce; col >= cs; col--)
       {
         cout<<arr[re][col]<<" ";
         }  re--;


       //for starting coloumns
       for (int row = re; row >= rs; row--)
       {
         cout<<arr[row][cs]<<" ";
         }  cs--;
       
               
    }
    
    return 0;
}