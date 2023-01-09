#include <iostream>
using namespace std;
class hero{
private:
int health;
public:
char level;
char *name;

hero(){
    cout<<"simple constructor called"<<endl;
    name = new char[100];
}
void print(){
    cout<<"Health is "<<this->health<<endl;
    cout<<"Level is "<<this->level<<endl;
    cout<<"Name is "<<this->name<<endl;

}
/*hero(int health, char level){
   // cout<<"Content of this : "<<this<<endl;
    this-> health = health;
    this-> level = level;     
}*/
int gethealth(){
    return health;
}
void sethealth(int h){
    health=h;
}
char getlevel(){
    return level;
}
void setlevel(char ch){
    level = ch;
} 
void setname(char name[]){
    strcpy(this->name,name);
}


};


int main()
{
    hero h1;
    h1.sethealth(70);
    h1.setlevel('B');
    char name[6]="Haris";
    h1.setname(name);
   // h1.print();

    hero h2(h1);
   // h2.print();

    h1.name[0]='K';
    h1.print();
    h2.print();
    return 0;
}