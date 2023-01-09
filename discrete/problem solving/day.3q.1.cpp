#include <iostream>
using namespace std;
int factorial(int i)
{
  int f=1;
  for (int j = i; j >=1 ; j--)
  {
    f*=j;
  }
  return f;
}
int main()
{
    int n,sum=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        
        sum+=factorial(i);
    }
    cout<<sum;
    return 0;
}