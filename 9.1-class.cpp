#include <iostream>
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
};
int main()
{
    hero h1;                          //static allocation
     h1.sethealth(70);
     h1.level='A';
    cout<<"health is : "<<h1.level<<endl;
    cout<<"level is : "<<h1.gethealth()<<endl;


    hero *p = new hero;             //dynamic allocation
    p->sethealth(80);
    p->level='B';
    cout<<"health is : "<<(*p).level<<endl;
    cout<<"level is : "<<(*p).gethealth()<<endl;

    //alternate way to gt output dynamically

    cout<<"health is : "<<p->level<<endl;
    cout<<"level is : "<<p->gethealth()<<endl;
   /* 
    h1.sethealth(70);
    h1.level='A';
    cout<<"health is : "<<h1.gethealth()<<endl;
    cout<<"level is : "<<h1.level;
    */
    return 0;

}