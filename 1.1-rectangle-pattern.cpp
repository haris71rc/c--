#include <iostream>
using namespace std;
int main()
{
int i,j,c,r;
cout<<"Enter the number of row and coloumn\n";
cin>>r>>c;
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}