#include<iostream>
using namespace std;

class animal{

    public:
    int age;

    public:
    void speaking(){
        cout<<"speaking";
    }
};


class dog : public animal{

//this class inherited the animal class in public way
};

class germanshephard : public animal{

//this class inherited the dog class in public way
};




int main(){
    germanshephard g;
    
    cout<<g.age<<endl;
    g.speaking();

    return 0;

}