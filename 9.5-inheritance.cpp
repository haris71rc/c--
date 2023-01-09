#include<iostream>
using namespace std;
class human{
public:
int age;
int height;
int weight;

int getage(){
      
      return this->age;
}
void setweight(int w){
    this->weight=w;
}

};

class male : protected human{

public:
string color;
public:
void sleeping(){
    cout<<"Male is sleeping";
}
int getheight(){
     return this->height;
}

};

int main(){
    male object1;
   // cout<<object1.age<<endl;                 //properties inherit
    cout<<object1.getheight()<<endl;              // karr rhe h
   // object1.setweight(90);                   
   // cout<<object1.weight<<endl;              //jo properties human me hai usko male me bhi le le rhe h

  //  cout<<object1.color<<endl;
   // object1.sleeping();
      
      return 0;
}