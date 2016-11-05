#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Over_loading{
protected:
    int num;
    vector<int> MyVector;
public:
   
    Over_loading(){
        cout<<"Enter you numbers \nEnter -1 for exit "<<endl;
            do{
                cin>>num;
                if (num != -1) MyVector.push_back(num);
            }while(num !=-1);
        
        }

        
    
          friend ostream &operator<<(ostream &stream, Over_loading obj);
        //void showall(vector<int> MyVec){for(vector<int>::iterator item=MyVec.begin();item != MyVec.end();item++)
          //      {cout<<*item<<" ";}cout<<endl;}
    
    
    
    
};

ostream &operator<<(ostream &stream, Over_loading obj){
        for(vector<int>::iterator item=obj.MyVector.begin();item != obj.MyVector.end();item++)
        stream<<*item<<" ";
        return stream;
}

    
int main(){
     Over_loading obj;
    
    
   
    cout<<obj;
    
    return 0;
}
