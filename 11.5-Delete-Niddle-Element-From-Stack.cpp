#include <bits/stdc++.h>
using namespace std; 

void solve(stack<int>&s,int count, int N){
   //base case
   if(count==N/2){
       s.pop();
       return;
   }
   int ans=s.top();
   s.pop();
   solve(s,count+1,N);
   s.push(ans);

}

void deleteMiddle(stack<int>&s, int N){
	
   int count = 0;
   solve(s,count,N);
}
int main(){
    stack<int>s;
   s.push(3);
   s.push(7);
   s.push(9);
   s.push(10);
   s.push(15);
   s.push(99);
   deleteMiddle(s,5);
   cout<<s.top()<<endl;
   s.pop();
    cout<<s.top()<<endl;
   s.pop();
    cout<<s.top()<<endl;
   s.pop();
    cout<<s.top()<<endl;
   s.pop();
    cout<<s.top()<<endl;
   s.pop();

   return 0;
}