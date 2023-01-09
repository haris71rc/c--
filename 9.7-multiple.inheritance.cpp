#include<iostream>
using namespace std;

class animal{

    public:
    int age;

    public:
    void barking(){
        cout<<"Barking"<<endl;
    }
};


class human{
    public:
    string color;

    void speaking(){
        cout<<"speaking"<<endl;
        
    }
};

class hybrid : public animal , public human{    //multiple inheritance ho gya

};




int main(){
     hybrid g;
    
    cout<<g.age<<endl;
    g.speaking();
    g.barking();
    cout<<g.color;

    return 0;

}