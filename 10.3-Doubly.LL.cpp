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
    cout<<"The lenght of LL : "<<getlength(head)<<endl;
    cout<<"Head data : "<<head->data<<endl<<"Tail data : "<<tail->data<<endl;

    return 0;

}