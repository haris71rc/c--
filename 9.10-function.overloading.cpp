#include<iostream>
using namespace std;
class A{

public:
void hello(){
 cout<<"saying hello 1st"<<endl;
}
int hello(int size,char name){      //return type change krne se overloading nhi hogi,input parameter bhi unique hna chahiye
 cout<<"saying hello 2nd"<<endl;
 return 1;
}
void hello(int n){
 cout<<"saying hello 3rd"<<endl;    //input parameter change kro func overloading ho jayegi

}


};

int main(){

    A obj;
    obj.hello();
    return 0;
}