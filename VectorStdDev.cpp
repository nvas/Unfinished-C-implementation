#include <iostream>
#include<vector>
#include <iomanip>
#include <cmath>
using namespace std;
void stan_dev(vector<double> MyVec);
int main()
{
    
    double  numbers;
    
    vector<double> MyVector;
    
    cout<<"Enter your numbers \n";
    
    do{
        
        cin>> numbers;
        if ( numbers != 0)
            MyVector.push_back(numbers);
        
        
    }while( numbers !=0);
    
    cout<<"You Enetered "<<MyVector.size()<<"  Numbers \n";
    
    
    stan_dev((vector<double>) MyVector);
    
    
    return 0;

}
void stan_dev(vector<double> MyVec){
    double variance1=0,variance2=0,variance3=0,variance4=0,sumOfItems=0.00;
    int N;
    double Mean=0;
    N = MyVec.size();
    for(vector<double>::iterator item=MyVec.begin();item != MyVec.end();item++)
    {
        sumOfItems = sumOfItems +*item;
        
        
    }
    
       // cout<<"This is your sum \n "<<sumOfItems<<endl;
    
    
        Mean = sumOfItems/N;
        cout<<"This is your Mean \n "<<Mean<<endl;
    
    for(vector<double>::iterator item=MyVec.begin();item != MyVec.end();item++)
    {
        
        variance1= *item - Mean;
        
        cout<<"Number >> "<<*item<< " << Variance "<<" from the mean "<<Mean<<" is equal = "<<variance1<<endl;
        
        variance2 = pow(variance1,2);
        
      //  cout<<"Number  Variance power 2  \n "<<variance2<<endl;
        
        variance3 += variance2;
      
      //  cout<<"Sum of variances  Variance  \n "<<variance3<<endl;

        
        
        
        
        
    }
    
            variance4 = sqrt(variance3/(N-1));
    
   
            cout<<"Your standard deviation is equal to = "<<variance4<<endl;

    
    
    
    
    
   
    
    cout<<endl;
    
    
}
