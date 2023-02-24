#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;

    //inserting elements in the stack
    s.push(3);
    s.push(7);
    s.push(9);

    //removing elements from the stack
    s.pop();

    //seeing the top elements
    cout<<"The top element is "<<s.top()<<endl;

    //to see if list is empty or not
   // cout<<s.empty()<<endl;

   if (s.empty())
   {
    cout<<"List is empty"<<endl;
   }
   else
    cout<<"List is not empty"<<endl;

    //size of stack = it tells the number of elements present in stack
    cout<<"The size of stack is "<<s.size()<<endl;
   
   
    return 0;
}