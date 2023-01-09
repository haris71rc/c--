#include <iostream>
using namespace std;
int main()
{
int n,count;
cout<<"Enter number of rows\n";
cin>>n;
for (int i = 1; i <= n; i++)
{
    count=1;
   for (int j = i; j <= n; j++)
   {
    cout<<count;
    count++;
   }
 cout<<endl;  
}
return 0;

}