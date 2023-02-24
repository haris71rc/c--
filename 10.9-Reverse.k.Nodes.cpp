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

node* reverseKnodes(node* &head , int k){
          
          if (head==NULL)
          {
            return NULL;
          }
          

          node* prev=NULL;
          node* curr=head;
          node* next;
          int cnt=0;
          while (curr!=NULL && cnt<k)
          {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
          }
         if (next!=NULL)
         {
            head->next = reverseKnodes(curr,k);
         }
         return prev;
          
         
}

int main()
{
    int k;
    cout<<"de baba de k de ";
    cin>>k;
     node* obj1 = new node(10);
    node* tail = obj1;
    node* head = obj1;
     
     insertionattail(tail,20);
     insertionattail(tail,30);
     insertionattail(tail,40);
     insertionattail(tail,50);
     insertionattail(tail,60);
     insertionattail(tail,70);
     insertionattail(tail,80);
     insertionattail(tail,90);
     print(head);

    node* head2= reverseKnodes(head,k);

     print(head2);
    
    return 0;

}