#include<iostream>
using namespace std;
class node{

    public:
    int data;
    node* next;

    node(int data){

       this->data=data;

    }

};

int main(){
    node* obj1 = new node(10);
    cout<<obj1 -> data<<endl;
    cout<<obj1->next<<endl;
    return 0;

}