#include <iostream>

using namespace std;
int *key_enc_ptr,key_enc,*key_dec_ptr,key_dec,i;
 string msg;

string enc(string msg,int key_enc);
string dec(string encmsg1,int key_enc);
int main()
{
     cout<<"Enter msg"<<endl;
     getline(cin,msg);
    
    cout<<"Enter encryption key"<<endl;
    cin>>key_enc;
    string encmsg1 = enc(msg,key_enc);
    
    dec(encmsg1,key_enc);
    
    
    return 0;
}
string enc(string msg,int key_enc){
    
    

    string cryptography,*cryptography_ptr;
   
    
    cryptography  = msg[i] + key_enc;
    cryptography_ptr = &cryptography;
    
    
    cout<<"This is your encrypted message"<<endl;
    for ( i=0;i<=msg.length();i++)
        cout<<*cryptography_ptr;
    cout<<endl;
    return msg;
}

string dec(string encmsg1,int key_enc){
    key_enc_ptr=&key_enc;
    key_dec_ptr=&key_dec;
    /*  Decrypting user message  */
    cout<<"Enter Decryption key"<<endl;
    cin>>key_dec;
    if(*key_enc_ptr == *key_dec_ptr){
        cout<<msg<<endl;
    }else
        cout<<"sorry"<<endl;
    
    return msg;
}
