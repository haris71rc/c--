#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    int m1[n1][n2],m2[n3][n4];
    cout<<"Enter the elements of matrix m1\n";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin>>m1[i][j];
        }
        
    }
      
    cout<<"Enter the elements of matrix m2\n";
    for (int i = 0; i < n3; i++)
    {
        for (int j = 0; j < n4; j++)
        {
            cin>>m2[i][j];
        }
        
    }
      int ans[n1][n4];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n4; j++)
        {
         ans[i][j]=0;
        }
        
    }

    if (n2==n3)
    {
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n4; j++)
            {
                for (int k = 0; k < n2; k++)
                {
                    ans[i][j]+=m1[i][k]*m2[k][j];
                }
                
            }
            
        }
        
    }
    else{
    cout<<"Multiplication not possible";
    return 0;
    }

     for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n4; j++)
            {
              cout<<ans[i][j]<<" ";
            }
            cout<<endl;
            }

return 0;

    }