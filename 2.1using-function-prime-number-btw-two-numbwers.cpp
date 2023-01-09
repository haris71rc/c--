#include <iostream>
void prime(int,int);
using namespace std;
int main()
{
int n1,n2;
cout<<"Enter the two number to find prime number btw them\n";
cin>>n1>>n2;
prime(n1,n2);
return 0;
}

void prime(int x,int y)
{
    int c;
    for (int i = x; i <= y; i++)
    { c=0;
        for (int j = 2; j < i; j++)
        {
           if (i%j==0)
           {
            c++;
           }
           
        }
        if (c==0)
        {
            cout<<i;
            cout<<endl;
        }
    
    }
    


}
