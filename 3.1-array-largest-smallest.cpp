#include <iostream>
using namespace std;
int main() {
 int n;
cout << "Enter n " << endl;
cin>>n;
int arr[n];                    //always declare array after taking n... 
 for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  int maxi=arr[0];
  int mini=arr[0];
  for (int i = 0; i < n; i++)
  {
    maxi=max(maxi,arr[i]);
    mini=min(mini,arr[i]);

  }
  cout<<"The max is "<<maxi<<"\n"<<"The min is "<<mini;
  return 0;
}