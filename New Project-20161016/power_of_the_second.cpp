


        // *Write a function whose interface accepts two integers and returns the first to the power of the second

#include <iostream>
#include <cmath>

using namespace std;

int power(int base,int exponent);


int main(){
    
    
    int base,exponent;
    cout<<"Enter base"<<endl;
    cin>>base;
    cout<<"Enter exponent"<<endl;
    cin>>exponent;
    power(base,exponent);
    

return 0;

}
int power(int base,int exponent){

   //returns the first to the power of the second
   int temp = base;

    for(int i = exponent ; i>0 ; i--)
    {
        
     
        temp = temp * base;
            
        
        cout<<temp<<endl;
    }
    
    

    return 0;

}








