#include <iostream>
int firstocc(int arr[],int n,int i,int key)
{if (i==n)
{
    return -1;
}

if (arr[i]==key)
{
    return i;
}
return firstocc(arr,7,i+1,2);
}
int lastocc(int arr[],int n,int i,int key)
{
    if (i==0)
    {
        return -1;
    }
    
if (arr[i]==key)
{
    return i;
}
return lastocc(arr,7,i-1,2);

}
using namespace std;
int main()
{
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstocc(arr,7,0,2)<<endl;
    cout<<lastocc(arr,7,7,2);
    return 0;

}