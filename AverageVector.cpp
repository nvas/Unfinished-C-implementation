#include <iostream>
#include <vector>
using namespace std;

void average(vector<int> MyVec);
void shownumbers(vector<int> MyVec);
int main(){
    int num;
    vector<int> MyVector;
    
    
    cout<<"Enter you numbers \nEnter -1 for exit "<<endl;
    do{
    cin>>num;
        if (num != -1)
            MyVector.push_back(num);
        
    }while(num !=-1);
    cout<<"You entered "<<MyVector.size()<<endl;
    cout<<"this is your numbers \n"<<endl;
    shownumbers(MyVector);
    cout<<"This is your average"<<endl;
    average(MyVector);
    
    
    return 0;

}
void average(int num){



}
void shownumbers(vector<int> MyVec){
    int total=0;
    for (vector<int>::iterator item=MyVec.begin(); item != MyVec.end();item++){
        
        total = total + *item;
        cout<<*item;
    
    }
    cout<<endl;
}
void average(vector<int> MyVec){
    int average,total=0;
    for (vector<int>::iterator item=MyVec.begin(); item != MyVec.end();item++){
        
        total = total + *item;
        
        
    }
    average = total/MyVec.size();
    cout<<" Average is "<<average<<endl;
    cout<<endl;
}
