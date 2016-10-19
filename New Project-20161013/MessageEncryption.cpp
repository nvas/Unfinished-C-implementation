#include <iostream>

using namespace std;

int main()
{
    /*  Declaring message,keys and keys pointers and counter  */
    string msg;
    int *key_enc_ptr,key_enc,*key_dec_ptr,key_dec,i;
    key_enc_ptr=&key_enc;
    key_dec_ptr=&key_dec;
    string cryptography,*cryptography_ptr;
    
    cout<<"Enter msg"<<endl;
    getline(cin,msg);
    /*  Getting user message  */
    cout<<"Enter encryption key"<<endl;
    cin>>key_enc;
    
    
    /*  Encrypting user message by casting message to integer according to ASCII table */
    
    cryptography  = msg[i] + key_enc;           //casting msg to integer and add added to key value
    cryptography_ptr = &cryptography;           //Referencing
    
    
    cout<<"This is your encrypted message"<<endl;
    for ( i=0;i<=msg.length();i++)
        cout<<cryptography_ptr;
        cout<<endl;
    
    /*  Decrypting user message  */
    cout<<"Enter Decryption key"<<endl;
    cin>>key_dec;
    if(*key_enc_ptr == *key_dec_ptr){       
        cout<<msg<<endl;
    }else
        cout<<"sorry"<<endl;
    
    return 0;
}
