#include<iostream>
using namespace std;
class a{
    public:
    void fun1(){
        cout<<"in class a "<<endl;

    }
};

class b{
    public:
    void fun2(){
        cout<<"in class b "<<endl;

    }  

};

//c and d inherit kr rhe h a ko hierarchical order me aur d kr rha h b ko multiple inheritance ke order me to ye hybrid inheritance ho gya

class c : public a{
      public:
    void fun3(){
        cout<<"in class c "<<endl;

    }

};

class d : public a , public b{
      public:
    void fun4(){
        cout<<"in class d "<<endl;

    }
};

int main(){
    c obj3;
    obj3.fun1();
    obj3.fun3();

    d obj4;
    obj4.fun1();
    obj4.fun2();
    obj4.fun4();

    return 0;
}