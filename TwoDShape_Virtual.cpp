#include <iostream>
#include <string>
using namespace std;
class TwoDShape{
protected:
    double width;
    double length;
public:
    TwoDShape(double length_,double width_){width=width_;length=length_;}//TwoDShape Constructor
    void set_width(double width_) {width = width_;}
    void set_length(double length_) {length = length_;}
    double get_width(){return width;}
    double get_height(){return length;}
    void showDim(){cout<<"Width: "<<width<<" length: "<<length<<endl;}
    virtual double area()=0;//vitual Function
};

class Rectangle : public TwoDShape{
public:
    string style;
    Rectangle(string str,double _length,double _width):TwoDShape(_length,_width){style=str;}//Rectangle Constructor
    double area(){double result =width * length;//Rectangle using base class virtual function
    return result;}
    void showStyle(){cout<<"SHAPE is "<<style<<endl;}
};

class Triangle : public TwoDShape{
public:
    string style;
    Triangle(string str,double _length,double _width):TwoDShape(_length,_width){style=str;}//Triangle Constructor
    double area(){ double result =(width * length)/2.0;//Triangle using base class virtual function
    return result;}
    void showStyle(){cout<<"SHAPE is "<<style<<endl;}
};



int main(){
            Rectangle R1("Rectangle Style ",8.0,5.0);
            Triangle T1("Triangle Style",4.0,3.0);
           // R1.set_width(4.0); R1.set_length(4.0);
           //  R1.style="Rectangle";
            R1.showStyle();
            R1.showDim();
            T1.showStyle();
            T1.showDim();
            cout<<endl;
            cout<<"==> Rectangle Area is = "<<R1.area()<<endl;
            cout<<"==> Triangle Area is = "<<T1.area()<<endl;
            cout<<endl;
            return 0;
        }
