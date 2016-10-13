#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    /*  Declaring message,keys and counter  */
  char msg[10];                         
   int key_enc,key_dec,i;
   cout<<"Enter msg"<<endl;
   gets(msg);                           
   /*  Getting user message  */
   cout<<"Enter encryption key"<<endl;
   cin>>key_enc;
   
   /*  Encrypting user message by casting message to integer according to ASCII table */
   cout<<"This is your encrypted message"<<endl;
   for ( i=0;msg[i];i++)
   cout<<(int)msg[i];
   cout<<endl;
   
   /*  Decrypting user message  */
   cout<<"Enter Decryption key"<<endl;
   cin>>key_dec;
    if(key_enc == key_dec){
    cout<<msg<<endl;
    }else
    cout<<"sorry"<<endl;
   
   return 0;
}

