 #include<iostream>
 #include<vector>
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

 bool checkp(vector<int> arr){
        int n = arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return false;   
                  }
            s++;
            e--;
            }
            return true;
        }
        
    bool isPalindrome(node *head)
    {
        vector<int> arr;
        node* temp= head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        return checkp(arr);
    }

 node* getmid(node* head){
        node* slow = head;
        node* fast = head->next;
        while(fast!=NULL && fast->next!= NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    node* reversel(node* head){
        node* prev = NULL;
        node* curr = head;
        node* next = curr->next;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
  
    bool isPalindrome2(node *head)
    {
       node* mid = getmid(head);
       mid->next = reversel(mid->next);
       node* head2 = mid->next;
       node* head1 = head;
       while(head2!=NULL){
           if(head1->data != head2->data){
               return false;}
                head1=head1->next;
               head2=head2->next;
       }
       return true;
    }

int main(){
    node* obj1 = new node(10);
   node* head= obj1;
    node*tail=obj1;
    insertionattail(tail,15);
    insertionattail(tail,15);
    insertionattail(tail,10);
    print(head);
    if (isPalindrome2(head))
    {
        cout<<"The given LL is palindrome"<<endl;
    }
    else
    cout<<"Not a palindrome"<<endl;
    return 0;

}