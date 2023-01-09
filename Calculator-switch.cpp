#include <iostream>
using namespace std;
int main()
{ int choice,a,b,c;
   cout<<"Enter the number\n";
   cin>>a>>b;
    cout<<"press 1 for addition"<<endl<<"press 2 for substraction"<<endl<<"press 3 for multiplication"<<endl<<"press 4 for division"<<endl<<"enter your choice\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
     c=a+b;
     cout<<"the sum is  "<<c;
        break;
    case 2:
    c=a-b;
     cout<<"the difference is  "<<c;
       break;
     case 3:
     c=a*b;
      cout<<"the product is  "<<c;
      break;
      case 4:
      c=a%b;
       cout<<"the mod is  "<<c;
       break;
    default:
    cout<<"wrong choice";
        break;
    }




    return 0;

}