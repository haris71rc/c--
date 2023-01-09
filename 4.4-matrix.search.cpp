#include <iostream>
using namespace std;
int main()
{
    int n,m,num;
    cin>>n>>m;
    cout<<"enter num\n";
    cin>>num;
    int arr[n][m];
    cout<<"Enter the elements of matrix\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }int i=n-1,j=0;
    while (i>=n || j<=m)
    {
        if(arr[n][0]==num)
        {
            cout<<"found";
        }
        else if (arr[n][0]>num)
        {
            i--;
        }
        else
        {
          j++;
        }
        
    } return 0;

    


}