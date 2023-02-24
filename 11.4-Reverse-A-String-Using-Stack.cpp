#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char>s;
    string str;
    cin>>str;
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }
    for (int i = 0; i < str.length(); i++)
    {
        str[i]=s.top();
        s.pop();
    }
    cout<<str;
    
    return 0;
    
}