#include <iostream>

using namespace std;

class point{
public:
    point(){};
    point(int i,int j){mX=i;mY=j;}
    void  setXY(int x,int y){mX=x,mY=y;}
    float getX(){return mX;}
   
    float getY(){return mY;}
private:
    float mX,mY;
    
};

int main(){
    
    
    int user_x,user_y;
    cout<<"Enter X "<<endl;
    cin>>user_x;
    cout<<"Enter Y "<<endl;
    cin>>user_y;
    point xy1;
    xy1.setXY(user_x, user_y);
    cout<<"("<<xy1.getX()<<","<<xy1.getY()<<")"<<endl;
    
    point xy2(6,0);
    cout<<"("<<xy2.getX()<<","<<xy2.getY()<<")"<<endl;
 


    return 0;

}
