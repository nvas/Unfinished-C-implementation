#include <iostream>
#include <string>
#include <map>
using namespace std;

class Student{
private:
    unsigned int ID,age;
    string name,address;
    
public:
    void setID(unsigned int _id){
        ID=_id;
    }
    void setage(unsigned int _age){
        age=_age;
    }
    void setname(unsigned int _name){
        name=_name;
    }
    void setaddress(unsigned int _address){
        address=_address;
    }
    unsigned int getID(unsigned int _id){
        return ID;
    }
    unsigned int getage(unsigned int _age){
       return age;
    }
    string getname(unsigned int _name){
        return name;
    }
    string getaddress(unsigned int _address){
        return address;
    }
    
};

class Students{
private:
    map<string,unsigned int> map1;
public:
    void setmap(){}

};


int main (){

    int temp_num;
    string temp_string;
    map<string,unsigned int> map1;
    
    cout<<"Enter Number"<<endl;
    cin>>temp_num;
    
    cout<<"Enter string"<<endl;
    cin>>temp_string;
    
    map1.insert(pair<string, unsigned int>(temp_string,temp_num));
    
    for(map<string,unsigned int>::iterator item=map1.begin();item!=map1.end();item++){
        cout<<item -> first <<" "<<item -> second<<" "<<endl;
    
    }
    
    
    return 0;
}
