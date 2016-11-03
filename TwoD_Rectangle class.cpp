#include <iostream>
#include <string>
using namespace std;
class TwoDShape{
protected:
    double width;
    double length;
public:
    
    void set_width(double width_) {width = width_;}
    void set_length(double length_) {length = length_;}
    double get_width(){return width;}
    double get_height(){return length;}
    void showDim(){cout<<"Width: "<<width<<" length: "<<length<<endl;}};
class Rectangle : public TwoDShape{
public:
    string style;
    double area(){
                return width * length;}
            void showStyle(){cout<<"SHAPE is "<<style<<endl;}};
        int main(){
            Rectangle R1;
            R1.set_width(4.0); R1.set_length(4.0);
            R1.style="Rectangle";
            R1.showStyle();
            R1.showDim();
            cout<<"Area is "<<R1.area()<<endl;
            return 0;
        }
