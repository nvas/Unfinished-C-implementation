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
    void showDim(){cout<<"Width: "<<width<<" length: "<<length<<endl;}};

class Rectangle : public TwoDShape{
public:
    string style;
    Rectangle(string str,double _length,double _width):TwoDShape(_length,_width){style=str;}//Rectangle Constructor
    double area(){
                return width * length;}
            void showStyle(){cout<<"SHAPE is "<<style<<endl;}};
int main(){
            Rectangle R1("Rectangle Style ",5.0,5.0);
           // R1.set_width(4.0); R1.set_length(4.0);
           //  R1.style="Rectangle";
            R1.showStyle();
            R1.showDim();
            cout<<"Area is = "<<R1.area()<<endl;
            return 0;
        }
