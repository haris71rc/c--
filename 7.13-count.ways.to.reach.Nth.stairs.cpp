#include <iostream>
using namespace std;
int stairs(int n)
{
  if (n == 0)
  {
    return 1;
  }
  if (n<0)
  {
    return 0;
  }
  
  int ans= stairs(n-1) + stairs(n-2);
  return ans;
    
}
int main()
{
    int n;
    cin>>n;
  cout<< stairs(n);
   return 0;

}