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
                cout<<"\t Standard output (cout) On most program environments, the standard output by default is the screen, and the C++ stream object defined to access it is cout . \n For formatted output operations, cout is used together with the insertion operator, which is written as << (i.e., two \"less than\" signs).t";
                break;
       case 2:
                cout<<"\t cout is used for output, cin for input. Important Point. cout and cin are not key words in the C++ language.\n  They are variables, instances of classes, that have been declared in <iostream>.  cout is a variable of type ostream." << "\n";
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
