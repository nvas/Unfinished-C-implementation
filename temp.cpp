#include <iostream>

using namespace std;

class MyClass{
    
    
public:
    MyClass(){};
    MyClass(int i);
    ~MyClass();
    void setx(int set_x){mX=set_x;}
    void sety(int set_y){mY=set_y;}
    int getx(){return mX;}
    int gety(){return mY;}
    int exm_show_out();
private:
     int mX,mY,x;

};

MyClass::MyClass(int i){x=i;cout<<"constructor with one parameter "<<endl;}
MyClass::~MyClass(){cout<<"Destructing........."<<endl;}

int main(){
    
    
    MyClass obj_1;
    MyClass obj_2(3);
    obj_1.setx(5555);
    obj_1.sety(77);
    obj_1.exm_show_out();
    cout<<obj_1.getx()<<"   "<<obj_1.gety()<<endl;

    
    
    return 0;
    
}

int MyClass::exm_show_out(){cout<<mX+mY<<endl;return 0;}


