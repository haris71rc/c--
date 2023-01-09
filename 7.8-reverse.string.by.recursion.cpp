#include <iostream>
using namespace std;
void reversestring(string s)
{
if (s.length()==0)
{
    return;
}
string restofstring= s.substr(1);       //this gives remaining string after removing 1st element
reversestring(restofstring);
cout<<s[0];
}

int main()
{
    string s;
    cin>>s;
    reversestring(s);
    return 0;
}