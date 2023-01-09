#include <iostream>
using namespace std;
void pattern2(int N,int x)
{
    if (N==x)
    { cout<<N;
        return;
    }
    
    cout<<N<<" ";
    pattern2(N+5,x);
}
void pattern(int N,int x)
{
    if(N<0)
  { 
  pattern2(N,x);
      return;
  }
  cout<<N<<" ";
  pattern(N-5,x);

  
}

int main()
{
    int N,x;
    cin>>N;
    x=N;
    pattern(N,x);
    return 0;
}