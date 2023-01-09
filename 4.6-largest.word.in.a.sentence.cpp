#include <iostream>
#include <string>
using namespace std;
int main()
{
int n;
cin>>n;
cin.ignore();
char arr[n+1];
cin.getline(arr,n);                 //to get whole sentence along with space
cin.ignore();                      //to clear the buffer
int curlen=0,maxlen=0,st=0,maxst=0;
int i=0;
while (1)
{
    if (arr[i]==' ' || arr[i]=='\0')
    {
       if (curlen>maxlen)
       {
        maxlen=curlen;
        maxst=st;
       }
        curlen=0;
        st=i+1;
    }
    else
    {curlen++;}
    if (arr[i]=='\0')
    {
        break;
    }
    
}
cout<<maxlen<<" ";
for (int i = 0; i < maxlen; i++)
{
   cout<<arr[i+maxst];
}
return 0;
}