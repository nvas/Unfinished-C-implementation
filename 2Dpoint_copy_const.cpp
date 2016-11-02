#include <iostream>

using namespace std;

class point{
private:
    int mval,copyNo=0;
    float mX,mY;
public:
    
    point(int i){mval=i;cout<<"Inside >>original<< constructor.."<<endl;};
    point(int i,int j){mX=i;mY=j;cout<<"Inside >>original<< constructor.."<<endl;}
    void  setXY(int x,int y){mX=x,mY=y;}
    float getX(){return mX;}
    int getval(){return mval;}
    float getY(){return mY;
    }
    
    point(const point &obj){mval=obj.mval;copyNo=obj.copyNo+1;cout<<"Inside >>copy<< constructor.."<<endl;}
    ~point(){if(copyNo==0)cout<<"Destructing >>original<<...."<<endl;else cout<<"Destructing copy "<<copyNo<<endl;}



};

int main(){
    
    
    int user_x,user_y;
    cout<<"Enter X "<<endl;
    cin>>user_x;
    cout<<"Enter Y "<<endl;
    cin>>user_y;
    
    point xy1(user_x,user_y);
    point yx=xy1;
    cout<<"("<<xy1.getX()<<","<<xy1.getY()<<")"<<endl;
    
    
    
    return 0;
    
}
