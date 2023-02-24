#include<iostream>
#include<map>
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

//insertion at any position
void inserionatposition(node* &tail, node* &head ,int position , int d){
    if (position == 1)
    {
        insertionathead(head,d);
        return;
        }
    
    node* temp= head;
    int count=1;
    while (count<position-1)
    {
         temp= temp->next;
           count++;
    }
   if (temp->next==NULL)
    {
        insertionattail(tail,d);
        return;
    }

    //first create new node
    node* nodetoinsert= new node(d);

    //insertion now
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
    

}

//traversing the LL
void print(node* head){
    node* newhead=head;
    while(newhead!=NULL){
        cout<<newhead->data<<" ";
        newhead=newhead->next;
    }cout<<endl;

}

//deleting node in SL
void deletenode(int position , node* &head ){

//deleting node for position
    if (position == 1)
    {
        node* temp = head;
        head= head->next;
        //jisko hum delete kr rhe h vo node kisi node ko point na kre uske liye ye code
        temp->next=NULL;
        delete temp;
    }

    //deleting node for any position 
     else
     {
       node* curr = head;
       node* prev = NULL;
       int count=1;
       while (count<position)
       {
        prev= curr;
        curr= curr->next;
        count++;
       }
       
       prev->next = curr->next;
        //jisko hum delete kr rhe h vo node kisi node ko point na kre uske liye ye code
        curr->next=NULL;
       delete curr;

     }
}

node* removeduplicate(node* head){
    node* prev = NULL;
    node* curr = head;
    map <node* , bool> visited;
    while (curr!=NULL)
    {
       
        if (visited[curr]==true)
        {
            prev->next=curr->next;
            curr=curr->next;
        }
        else{
            visited[curr]=true;
             prev = curr;
              curr=curr->next;
        }
        
        
    }
    
    
    return head;
}

int main(){
    node* obj1 = new node(10);
   // cout<<obj1 -> data<<endl;
   // cout<<obj1->next<<endl;
    //head pointing to obj1
   node* head= obj1;

   // print(head);
   // insertionathead(head,12);
    // print(head);
     //insertionathead(head,15);
      //print(head);
    
    //insertionathead(head,120);
      //print(head);

    node*tail=obj1;

    insertionattail(tail,15);
    insertionattail(tail,20);
    insertionattail(tail,30);

    inserionatposition(tail,head,2,12);
    
    inserionatposition(tail,head,3,12);
     inserionatposition(tail,head,6,30);
    print(head);
    
  // cout<<head->data<<endl;
    //cout<<tail->data;
    //deletenode(3 , head);

    

    print(removeduplicate(head));
    return 0;

}