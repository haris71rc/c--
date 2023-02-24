 // approach 1
 void insertattail(Node* &head , Node* &tail , int d){
        Node* newnode = new Node(d);
        if(head==NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    
    public:
    Node *copyList(Node *head)
    {
        Node* clonehead = NULL;
        Node* clonetail = NULL;
        Node* temp = head;
        while(temp != NULL){
            insertattail(clonehead , clonetail , temp->data);
            temp=temp->next;
        }
        
        map<Node* , Node*> x;
        Node* originalhead=head;
        Node* clonehead2=clonehead;
        while(originalhead!=NULL){
            x[originalhead]=clonehead2;
            originalhead=originalhead->next;
            clonehead2=clonehead2->next;
        }
        originalhead=head;
        clonehead2=clonehead;
        
        while(originalhead!=NULL){
            clonehead2->arb=x[originalhead->arb];
            originalhead=originalhead->next;
            clonehead2=clonehead2->next;
        }
        return clonehead;
    }








    //approach 2