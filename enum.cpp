

#include<iostream>
using namespace std;

struct Colorss{
    unsigned int R,G,B;
    float color;
    Colorss();
    
};


union  Co{
    Colorss rgba;
    unsigned int col;
    Co();
    
};


class Color{
private:
   Colorss Red,Green,Black;
public:
    void setC(Colorss r,Colorss b,Colorss g){
        r=Red;
        g=Green;
        b=Black;
        
    }
    Colorss  getC(){return Red;}

};
int main() {
    Color test;
    
    test.getC();
    Color coo;
    
    
    
    
    
    return 0;
}
