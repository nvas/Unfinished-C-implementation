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
    void setname(string _name){
        name=_name;
    }
    void setaddress(string _address){
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
  
public:
      map<unsigned int, Student> map1;
    void setmap(){}

};


int main (){
    Student student;
    Students students;
    unsigned int num,age;
    string name,address;
    map<string,unsigned int> map1;
    
    cout<<"Enter student ID number"<<endl;
    student.setID(num) ;
    cout<<"Enter student name "<<endl;
    student.setname(name);
    cout<<"Enter address"<<endl;
    student.setaddress(address);
    cout<<"Enter age"<<endl;
    student.setage(age);
    
    Students.map1.insert(pair<unsigned int, Student>(id,&student));
    
    for(map<string,unsigned int>::iterator item=map1.begin();item!=map1.end();item++){
        cout<<item -> first <<" "<<item -> second<<" "<<endl;
    
    }
    
    
    return 0;
}
