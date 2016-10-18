#include <iostream>

using namespace std;

int main()
{
    /*  Declaring message,keys and counter  */
    string msg;
    int key_enc,key_dec,i;
    string temp;
    cout<<"Enter msg"<<endl;
    getline(cin,msg);
    /*  Getting user message  */
    cout<<"Enter encryption key"<<endl;
    cin>>key_enc;
    
    

    temp  = msg[i] + key_enc;
    
    /*  Encrypting user message by casting message to integer according to ASCII table */
    cout<<"This is your encrypted message"<<endl;
    for ( i=0;i<=msg.length();i++)
        cout<<temp;
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
