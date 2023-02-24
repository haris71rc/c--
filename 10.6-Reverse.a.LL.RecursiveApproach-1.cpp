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
        int value = this->data;
        if (this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }

        cout<<"The node which is freed is "<<value<<endl;
        
    }

};

//insertion node in head
void insertionathead(node* &head,int d){
    //first create new node
    node* temp= new node(d);

    //insertion now
     temp->next=head;
     head=temp;
    
}

//insertion at tail
void insertionattail(node* &tail, int d){
   //first create new node
    node* temp= new node(d);

    //insertion now
    tail->next=temp;
    tail=temp;                 //or isko aise bhi likh skhte h "tail=tail->next;"


}

//traversing the LL
void print(node* head){
    node* newhead=head;
    while(newhead!=NULL){
        cout<<newhead->data<<" ";
        newhead=newhead->next;
    }cout<<endl;

}

node* reversell(node* &head,node* &curr,node* &prev){
    if (curr==NULL)
    {
        head=prev;
        return head;
    }
    node* forward = curr->next;
    reversell(head,forward,curr);
    curr->next=prev;
    

}

int main(){
    node* obj1 = new node(1);
    node* tail = obj1;
    node* head = obj1;

     insertionattail(tail,2);
     insertionattail(tail,3);
     insertionattail(tail,4);
     print(head);
      
      node* curr= head;
      node* prev= NULL;
     reversell(head,curr,prev);

     print(head);

     return 0;

}