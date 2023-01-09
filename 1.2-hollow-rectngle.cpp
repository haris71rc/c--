#include <iostream>
using namespace std;
int main()
{
int i,j,row,coloumn;
cout<<"Enter number of rows and coloumn\n";
cin>>row>>coloumn;
for (int i = 1; i <= row; i++)
{
 for (int j = 1; j <= coloumn; j++)
 {
    if (j==1 || j==coloumn || i==1 || i==row)
    {
        cout<<"*";
    }
    else{
        cout<<" ";
    }
    
 }
 cout<<endl;
}
return 0;
}