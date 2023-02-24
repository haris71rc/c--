#include<iostream>
using namespace std;
class stack{
    public:
     int *arr;
         int top;
    int size;

   
    
    //Basically we r making a constructor
    stack(int size){
        this->size=size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if (size - top > 1)
        {
             top++;
            arr[top] = element;
           
        }
        else
        {
             cout<<"Stack Overflow"<<endl;
        } 
    }

    void pop(){
        if (top>=0)
        {
            top--;
        }
        else
        cout<<"Stack Underflow"<<endl;       
    }

    int peak(){
        if (top>-1)
        {
            return arr[top];
        }
        else
        cout<<"Stack is empty";
        return -1;
    }

    void isEmpty(){
        if (top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        cout<<"Stack is not empty"<<endl;        
    }
};

int main(){
    stack h1(3);
    h1.push(8);
    h1.push(5);
    h1.push(90);
    h1.push(90);
    cout<<h1.peak()<<endl;
    h1.pop();
     cout<<h1.peak()<<endl;
     h1.pop();
      cout<<h1.peak()<<endl;
      h1.pop();

      h1.isEmpty(); 
      return 0;
}