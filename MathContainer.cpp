#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class MathContainer{

public:
    MathContainer();
    ~MathContainer();
    vector<int> getVector();
    void printeven(vector<int> evenVec);
    double getVectorAverage(vector<int> avgVector);
    double get_stdv(vector<int> vecVariatns);


};

MathContainer::MathContainer(){};
MathContainer::~MathContainer(){};

int main(){
    
    MathContainer Obj;
    vector<int> v = Obj.getVector();
    Obj.printeven(v);
    
    cout<<"The average is = "<<Obj.getVectorAverage(v)<<endl;
    cout<<"The standard deviation is = "<<Obj.get_stdv(v)<<endl;
    
    
    return 0;
    
}



vector<int> MathContainer:: getVector(){
    vector<int> Vector1;
    int num;
    cout<<"Enter your Numbers"<<endl;
    do{
        cin>>num;
        if (num != -1)
            Vector1.push_back(num);
        
    }    while(num!=-1);
    cout<<"This is your vector numbers = ";
    for(vector<int>::iterator item=Vector1.begin();item!=Vector1.end();item++){
        cout<<*item<<"  ";
    }
    cout<<endl;
    return Vector1;
    
}

double MathContainer:: getVectorAverage(vector<int> avgVector){
    
    int total=0;
    int avg=0;
    
    for(vector<int>::iterator item=avgVector.begin();item<avgVector.end();item++){
        total=total + *item;
        
    }
    
    avg=total/avgVector.size();
    return avg;
    
}
double MathContainer:: get_stdv(vector<int> vecVariatns){
    
    double stdv,variant_variance,power_variance,sumOfVariances=0.00;
    for(vector<int>::iterator item=vecVariatns.begin();item<vecVariatns.end();item++){
        variant_variance=*item-getVectorAverage(vecVariatns);
        power_variance=pow(variant_variance,2);
        sumOfVariances=sumOfVariances+power_variance;
        
    }
    
    stdv=sqrt(sumOfVariances/vecVariatns.size()-1);
    
    
    return stdv;
    
}

void MathContainer:: printeven(vector<int> evenVec){cout<<"This is your even number/s = ";for(vector<int>::iterator item=evenVec.begin();item!=evenVec.end();item++){if (*item % 2 ==0){cout<<*item<<"  ";}}
    cout<<endl;
}







