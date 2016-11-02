#include <iostream>

using namespace std;

class point{
private:
    int mval,copyNo=0;
    float mX,mY;
public:
    point(){};
    point(int i){mval=i;
      //  cout<<"Inside >>original<< constructor.."<<endl;
    }
    point(int i,int j){mX=i;mY=j;
       // cout<<"Inside >>original<< constructor.."<<endl;
    }
    ~point(){};
    
    point operator++(){mX++;mY++;return *this;}
    point operator++(int ignore){mX+=2;mY+=2;return *this;}
    point operator*(point object);
    point operator-(point object);
    point operator/(point object);
    point operator+(point object);
    
    
    void  setXY(int x,int y){mX=x,mY=y;}
    float getX(){return mX;}
    int getval(){return mval;}
    float getY(){return mY;}
    void show(){cout<<"("<<mX<<","<<mY<<")"<<endl;}
  //  point(const point &obj){mval=obj.mval;copyNo=obj.copyNo+1;cout<<"Inside >>copy<<constructor.."<<endl;}
    //~point(){if(copyNo==0)cout<<"Destructing >>original<<...."<<endl;else cout<<"Destructing copy "<<copyNo<<endl;}
    
    
    
};

point point::operator+(point object){point temp(mX+object.mX,mY+object.mY);return temp;}
point point::operator*(point object){point temp(mX*object.mX,mY*object.mY);return temp;}
point point::operator/(point object){point temp(mX/object.mX,mY/object.mY);return temp;}

int main(){
    
  
    int user_x1,user_y1,user_x2,user_y2;
    cout<<"Enter X1 "<<endl;
    cin>>user_x1;
    cout<<"Enter Y1 "<<endl;
    cin>>user_y1;
    cout<<"Enter X2 "<<endl;
    cin>>user_x2;
    cout<<"Enter Y2 "<<endl;
    cin>>user_y2;
    
    point xy1(user_x1,user_y1);
    point xy2(user_x2,user_y2);
    point z;
    
  //  point yx=xy1;
    cout<<"("<<xy1.getX()<<","<<xy1.getY()<<")"<<endl;
    cout<<"("<<xy2.getX()<<","<<xy2.getY()<<")"<<endl;
   
    ++xy1;
    xy2++;
    cout<<"First point incremented by 1";
    xy1.show();
    cout<<endl;
    cout<<"Second point incremented by 2";
    xy2.show();
    cout<<endl;
    cout<<"Sum of points";
    z=xy1+xy2;
    z.show();
    cout<<endl;
    cout<<"Mult of points";
    z=xy1*xy2;
    z.show();
    cout<<endl;
    cout<<"Division of points";
    z=xy1/xy2;
    z.show();
    cout<<endl;
    
    return 0;
    
}


