#include<iostream>
using namespace std;
void mean(int a[],int m,int n,int sum)
{
 if(n==4)
 {
    cout<<sum;
 }
 
    sum=sum+a[n];
    mean(a,m,n++,sum);
 
}
int main()
{
    int x,n=0,i,m,sum=0;
    cin>>m;
    int a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    mean(a,m,n,sum);
   // y=median();
   // printf("%d",y);
   return 0;
}