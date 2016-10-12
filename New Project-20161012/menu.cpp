#include <iostream>

using namespace std;

int main()
{
    int num;
   cout<<"MENU \t 1 for cout, 2 for cin, 3 for for, 4 for return \n";
   cout<<"enter a number \n";
   cin>>num;
   switch(num){
       case 1:
                cout<<"you got cout";
                break;
       case 2:
                cout<<"you got cin"<<"\n";
                break;
       case 3:
                cout<<"you got for"<<"\n";
                break;
       case 4:
                cout<<"you got return"<<"\n";
                break;
                        
       default:
                cout<<"noooooo"<<"\n";
       
   }
   return 0;
}

