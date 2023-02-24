#include<iostream>
using namespace std;
class node{

public:
int data;
node* prev;
node* next;

node(int d){
    this->data=d;
    this->next=NULL;
    this->prev=NULL;
}

~node(){
    int value = this->data;
    if (this->next != NULL)
    {
        delete next;
        this->next = NULL;
    }
    cout<<"The memory that is freed is "<<value<<endl;
}
};

//traversing in LL
void print(node* &head){
    node* newhead=head;
    while (newhead!=NULL)
    {
        cout<<newhead->data<<" ";
        newhead=newhead->next;
    }cout<<endl;
    
}

//gives the lenght of LL
int getlength(node* head){
      node* newhead=head;
      int lenght=0;
    while (newhead!=NULL)
    {
        newhead=newhead->next;
        lenght++;
    }
    return lenght;
}

void insertionaathead(node* &head, int d){

    //creating new LL
    node* temp= new node(d);
    
    //connecting the LL
    head->prev=temp->next;
    temp->next=head;
    head=temp;
    
}

void insertionattail(node* &tail, int d){

     //creating new LL
    node* temp= new node(d);

    //connecting the LL
    temp->prev=tail->next;
    tail->next=temp;
    tail=temp;
}

void insertatanyposition(node* &head, node* &tail, int position, int d){ 

    if (position==1)
    {
        insertionaathead(head,d);
        return;
    }
     
     node* temp=head;
     int count=1;
     while (count<position-1)
     {
        temp=temp->next;
        count++;
     }
     if (temp->next==NULL)
     {
        insertionattail(tail,d);
        return;
     }

     //agr upar ka kch satisfy nhi hua to
     //new node banana padega na new node ke liye
     node* nodetoinsert= new node(d);
     
     //connecting the nodes
     nodetoinsert->next=temp->next;
     temp->next->prev=nodetoinsert->next;
     temp->next=nodetoinsert;
     nodetoinsert->prev=temp->next;
         
}

//deleting node in SL
void deletenode(int position , node* &head ){

//deleting node for position
    if (position == 1)
    {
        node* temp = head;
        
        temp->next->prev=NULL;
        head=temp->next;
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
       curr->next->prev=curr->prev;
       prev->next = curr->next;
        //jisko hum delete kr rhe h vo node kisi node ko point na kre uske liye ye code
        curr->next=NULL;
        curr->prev=NULL;
       delete curr;

     }
}




int main(){
    node* obj1= new node(20);
    node* head= obj1;
    node*tail = obj1;
    insertionaathead(head,15);
     insertionaathead(head,10);
      insertionaathead(head,5);
    insertionattail(tail,25);
     insertionattail(tail,30);
      insertionattail(tail,35);
    insertatanyposition(head,tail,3,40);  
    
    print(head);

    deletenode(3,head);

    print(head);

    cout<<"The lenght of LL : "<<getlength(head)<<endl;
    cout<<"Head data : "<<head->data<<endl<<"Tail data : "<<tail->data<<endl;

    return 0;

}