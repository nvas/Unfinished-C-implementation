#include <iostream>
#include <vector>

using namespace std;
void showall(vector<vector<int>> MyVec);
int main(){

    int row,col,num,index;
    vector<vector<int>> MyVector;
    
    cout<<"Enter number of rows and column s :" << endl;
    cin>>row>>col;
    
    MyVector.resize(row);
        for(int i = 0 ; i < row ; i++){
            for (int j = 0 ; j < col ; j++){
            cout<<"Enetr your element " <<" ( "<<i + 1<<" ,"<< j + 1 <<" ) "<<endl;
            cin>>num;
            MyVector[i].push_back(num);
            }
        
        }
    showall(MyVector);
    cout<<endl;
    cout<<"Enter row to remove"<<endl;
    cin>>index;
    MyVector.erase(MyVector.begin()+index);
    showall(MyVector);
    return 0;

}
void showall(vector<vector<int>> MyVec){

    for (int i = 0 ; i< MyVec.size();i++){
        for (int j = 0; j< MyVec[i].size() ; j++){
            cout<<MyVec[i][j]<<" ";
           
            
        }
         cout<<endl;
    }




}
