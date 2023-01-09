#include <iostream>
int divide(int,int,int);
using namespace std;
int main()
{
    int n,m,p;
    cin>>n>>m>>p;
    cout<<"Total numbers are\n";
    cout<<divide(n,m,p);
    
}
int divide(int n,int m,int p)
{
    int c1=n/m;
    int c2=n/p;
    int c3=n/(m*p);
    return c1+c2-c3;

}