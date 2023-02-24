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

node* reverse(node* head){
    node* prev=NULL;
    node* curr=head;
    node* next;
    while (curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

node* solve(node* first, node* second){

    first= reverse(first);
    second= reverse(second);
 

}

int main(){
    node* obj1 = new node(1);
    node* obj2 = new node(2);
   node* head1= obj1;
    node*tail1=obj1;
    node* head2=obj2;
    node* tail2=obj2;
    insertionattail(tail1,9);
    insertionattail(tail1,0);
    
    insertionattail(tail2,5);
    print(head1);
    print(head2);

    solve( head1, head2);

    
    return 0;

}