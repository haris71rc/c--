#include <iostream>
using namespace std;
int main()
{
    int i=5;
    int *p1=&i;
    int **p2=&p1;
    cout<<"address of i "<<p1<<endl;
    cout<<"address of p1 "<<p2<<endl;
    cout<<"value of p1 "<<*p2<<endl;
    cout<<"value of i is "<<**p2<<endl;

    return 0;

}