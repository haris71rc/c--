#include<iostream>
using namespace std;
class node{

    public:
    int data;
    node* next;
     
     //constructor
    node(int data){

       this->data=data;
        this->next=NULL;
    }

    //destructor
    ~node(){
        int value=this->data;
        //now freeing up the memory
        if (this->next != NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"the memory which is freed is "<<value<<endl;

    }

};

void insertnode(node* tail , int element , int d){
    //if our ll is empty then
    if (tail==NULL)
    {
        node* newnode = new node(d);
        newnode->next=newnode;
    }
    else{
        //our ll is not empty
        //element is present in our ll
        node* curr=tail;
        while (curr->data!=element)
        {
            curr=curr->next;
        }//now curr is at element we were searching
        
        //creating new ll
        node* temp= new node(d);
        
        temp->next=curr->next;
        curr->next=temp;
        
    }
}

void print(node* tail){
    node* newtail = tail;
    do
    {
      cout<<tail->data<<endl;
      tail = tail->next;
    } while (tail != newtail);
    
    
}

void deletenode(node* &tail , int element){
    node* prev = tail;
    node* curr = prev->next;
    while (curr->data != element)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    if (tail == curr)
    {
        tail=prev;
    }
    
    curr->next = NULL;
    delete curr;
    
}

int main(){
    node* obj1=new node(10);
    node* tail=obj1;
    insertnode(tail,10,11);
    insertnode(tail,11,12);
    insertnode(tail,12,13);
    insertnode(tail,13,14);
    insertnode(tail,13,40);
    print(tail);
    deletenode(tail,40);
    print(tail);
    return 0;
}