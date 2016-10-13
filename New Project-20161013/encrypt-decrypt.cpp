#include <iostream>

using namespace std;

int main()
{
 char msg[5];
    char key_encrypt,key_decrypt;
   cout<<"Enter message \n";             
   for (int i=0;i<=4;i++)
   cin>>msg[i];                     // read message 
   
                                    
   cout<<"Enter Key to encrypt this message \n";
   cin>>key_encrypt;
   
   cout<<"This is the encrypted message \n";
  
   for (int i=0;i<=4;i++)
   
   cout<<(int) msg[i];    //encrypt msg
   cout<<endl;
   
   cout<<"\n";
   
   cout<<"enter key to decrypt message \n";            //decrypt msg
   cin>>key_decrypt;
   if(key_encrypt == key_decrypt){
       
    for (int i=0;i<=4;i++)
    cout<<msg[i];
    cout<<endl;
   } 
    else cout<<"sorry wrong key \n";
   return 0;
}

