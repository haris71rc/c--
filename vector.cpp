#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector <int> v;
v.push_back(1);
v.push_back(3);
v.push_back(5);
/*
for (int i = 0; i < v.size(); i++)     //1st way to get output
{
    cout<<v[i]<<" ";
}

}
*/


/*vector <int>:: iterator it;             //2nd way to get output
for(it=v.begin(); it!=v.end(); it++)
{
     cout<<*it<<" ";
}
*/

/*for(auto element:v)
{
    cout<<element<<" ";
}
*/
//v.pop_back();                           // it will pop the last element from the vector


vector <int> v2(3,10);                    // we can't insert different element at once
swap(v,v2);
for (int i = 0; i < v.size(); i++)     //1st way to get output
{
    cout<<v[i]<<" ";
} cout<<endl;
for (int i = 0; i < v.size(); i++)     //1st way to get output
{
    cout<<v2[i]<<" ";
}


return 0;
}