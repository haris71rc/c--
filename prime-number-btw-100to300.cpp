#include <iostream>
using namespace std;
int main()
{
int i,j,c;
for ( i = 100; i <= 300; i++)
{c=0;
  for ( j = 2; j < i; j++)
  { 
    if (i%j==0)
    {
        c++;

    }
    }
    if (c==0)
    {
        cout<<i<<endl;;
    }
    
  
  
}

return 0;

}
