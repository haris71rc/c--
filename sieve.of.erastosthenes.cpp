#include <iostream>
void sieveprime(int);
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num upto which you want to check prime number\n";
    cin>>n;
    sieveprime(n);
    return 0;

}

void sieveprime(int x)
{
    int check[x];
    for (int i = 0; i < x; i++)
    {
        check[i]=0;
    }
    
    
    for (int i = 2; i < x; i++)
    {
        if (check[i]==0)
        {
            for (int j = i*i; j < x; j+=i)
            {
               check[j]=1; 
            }
            
        }
        
    }
    for (int i = 2; i < x; i++)
    {
        if (check[i]==0)
        {
            cout<<i<<endl;
        }
        
    }
    


}
