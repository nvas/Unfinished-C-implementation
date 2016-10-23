#include <iostream>


using namespace std;

void input(string question,int *var);
void print(int number);
void print(string text);
void print(double doubleN);
void println(char x);

int main (){
    
 int age;
    
    input("Please Enter your Age",&age);

    
    print(6);
    println('X');
    print("Any text  ");
    print(123.234);
    
    
    return 0;
    
}

void input(string question,int *var){
    
    cout<<question<<endl;
    cin>>*var;
    
    cout<<"you entered \n"<<*var<<endl;
    
    
}
void print(int number){
    
    cout<<number;


}
void println(char x){
    
    cout<<x<<"\n";
    
    
}
void print(string text){
    
    cout<<text;
    
    
}
void print(double doubleN){
    
    cout<<doubleN;
    cout<<endl;
    
    
}

