#include <iostream> 
#include<vector>
using namespace std;
void showall(vector<int> MyVec);
int main()
{
  
    int price;
    int index;
    vector<int> MyVector;
    
    cout<<"Enter your price \n";
  
    do{
        
        cin>>price;
        if (price != -1)
        MyVector.push_back(price);
      
   
    }while(price !=-1);
    
    cout<<"You Enetered "<<MyVector.size()<<" Prices "<<" for "<<MyVector.size()<<" products \n";
    cout<<"Enter an index \n";
    cin>>index;
    cout<<" at Index "<<index<<" : "<<MyVector[index]<<endl;
    cout<<"Your vector prices values are : ";
    showall(MyVector);
    cout<<"Enter the index of price you want to remove \n";
    cin>>index;
    MyVector.erase(MyVector.begin()+index);
    cout<<"Now vector values are \n";
    showall(MyVector);
    cout<<endl;
    cout<<" Numbers of prices are "<<MyVector.size()<<endl;
    
    
    return 0;
    }

void showall(vector<int> MyVec){

    for(vector<int>::iterator item=MyVec.begin();item != MyVec.end();item++)
    {
                cout<<*item<<" ";
        
    }
                 cout<<endl;


}
