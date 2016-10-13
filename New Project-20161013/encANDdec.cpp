#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
string msg,key_encrypt,key_decrypt;

   cout<<"Enter message \n";  //read msg;  
   getline(cin,msg);
   
   cout<<"Enter Key to encrypt this message \n"; //enter key
   getline(cin,key_encrypt);
   
   cout<<"This is the encrypted message \n";
  
   for (int i=0;i<=4;i++)
   
   cout<<(int) msg[i];    //encrypt msg using ASCII
   cout<<endl;
   cout<<"\n";
   cout<<"enter key to decrypt message \n";            //decrypt msg
   getline(cin,key_decrypt);
   
   if(key_encrypt == key_decrypt){
       
    for (int i=0;i<=4;i++)
    cout<<msg[i];
    cout<<endl;
   } 
    else cout<<"sorry wrong key \n";
  
   
   return 0;
}

