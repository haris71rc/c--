#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
   string str;
   cin>>str;

   //convert to lower case
  for (int i = 0; i < str.size(); i++)
   {
       if (str[i]>='A' && str[i]<='Z')
       {
         str[i]+=32;
       }
       
   }
   cout<<str;


    // convert to upper case
    for (int i = 0; i < str.size(); i++)
    {  
        if (str[i]<='a' && str[i]>='z')
    {
        str[i]-=32;
    }
    }
    cout<<str;

    // by using c++ function
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    cout<<str<<endl;

    transform(str.begin(),str.end(),str.begin(), ::tolower);
    cout<<str;
    return 0;
}