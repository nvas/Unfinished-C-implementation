#include <iostream>


using namespace std;

void input(string question,int *var);
int age;
int main (){

  

    input("Please Enter your Age",&age);

    cout<<endl;


    return 0;

}

void input(string question,int *var){
    
    cout<<question<<endl;
    cin>>*var;
    
    cout<<"you entered \n"<<*var<<endl;


}
