#include<iostream>
using namespace std;
class hero{
 private:
    int health;
    public:
    char level;
    int gethealth() {                  //step to
        return health;                 //access
    }
     void sethealth(int h)             //private
     {
        health=h;                      //members
     }
hero(){
    cout<<"constructor called"<<endl;
}
hero(int health, char level){
   // cout<<"Content of this : "<<this<<endl;
    this-> health = health;
    this-> level = level;                 //pehla health object ke health ki baat kr rha = ke baad wala health jo parameter me paas hua aur private ke neeche likha vo wala health hai = ke idhar udhar jo health likha h dono alag alag hai
//ab health ki value 10 ho gyi..level ki B ho gyi
}
};
int main()
{   //object created statically
    //hero h1;

    // parameterised constructor
    hero h1(10,'B');
    //cout<<"Address of h1 : "<<&h1<<endl;
    //h1.gethealth();
    cout<<h1.gethealth()<<endl;
    cout<<h1.level<<endl;
    
    //copy constructor
    hero h2(h1);
    cout<<h2.gethealth()<<endl;
    cout<<h2.level<<endl;

    //object created dynamically
    hero *p= new hero;
    return 0;
}