#include <iostream>
using namespace std;
void linearsearch(int arr[], int n, int key)
{
if (n==0)
{
    cout<<"Not found";
    return;
}
if (arr[0]== key)
{
    cout<<"Found";
    return;
}
linearsearch(arr+1,n-1,key);


}

int main()
{
    int n,key;
    cin>>n>>key;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    linearsearch(arr,n,key);
    return 0;
    
}