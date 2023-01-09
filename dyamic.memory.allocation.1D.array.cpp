#include<iostream>
using namespace std;
int sum(int ptr[], int n)
{
   int sum=0;
   for (int i = 0; i < n; i++)
   {
    sum+=ptr[i];
   }
   return sum;
}
int main(){
    int n;
    cin>>n;
    //now we can declare array of vaiable size
    int *ptr= new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>ptr[i];
       
    }
     cout<<sum(ptr,n)<<endl;
        cout<<sizeof(n)+ sizeof(ptr);     //its size in stack + size in heap
        return 0;
}