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

//reversing the LL
node* reversell(node* head){
    node* prev=NULL;
    node* curr=head;
    node* forward;            //agr hum forward nhi lenge to jb hum curr ko peeche krenge to aage ke node ka address kha se milega
    while (curr!=NULL)
    {
        forward= curr->next;
        curr->next=prev;
        
        prev=curr;
        curr=forward;
    }
    return prev;        //because prev is at last node so prev is now our new head
}


int main(){
    node* obj1 = new node(1);
    node* tail = obj1;
    node* head = obj1;

     insertionattail(tail,2);
     insertionattail(tail,3);
     insertionattail(tail,4);
     print(head);

     node* newhead = reversell(head);

     print(newhead);

     return 0;

}