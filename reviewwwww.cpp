#include <iostream>
using namespace std;
class xy_point{
     float mx,my;
    int copynumber,val;
    int x,y,z;
public:
    
    xy_point(int e){mx=my=0;}
    xy_point(int i, int j){mx=i;my=j;}
    xy_point operator+(xy_point point);
    xy_point operator++(){mx++;my++; return *this;} //prefix!
    xy_point operator++(int ignore1){
        
            x+=2;y+=2; return *this;}//postfix
    xy_point operator*(float ignore2){
        return mx*my;
        
        }
    
    
    xy_point operator-(float ignore3){
    
        return mx-my;
    }
    
    xy_point operator/(float ignore4){
    
        return mx/my;
    }
    
    void show(){cout<<"x: "<<mx<<" y: "<<my<<endl;}
    
    
    xy_point(){mx=0.00f,my=0.00f;}
   
    xy_point(float x,float y){mx=x,my=y;}
   
    xy_point(const xy_point &o){
        val = o.val;
        copynumber = o.copynumber+1;
        cout<<"Inside copy constructor."<<endl;
    }
    
    ~xy_point(){
    
        if (copynumber==0)
            cout<<"Destructing original"<<endl;
        else
            cout<<"Destructing copy "<<copynumber<<endl;
    
    
    }
    
    
    
    
    void set_x(float x){
        mx = x;
        
            }
    float get_x(){
    
        return mx;
    
    }
    void set_y(float y){
        my = y;
        
    }
    float get_y(){
        
        return my;
        
    }
    

   
int getval(){return val;}
    
};
int main(){
    
    float user_x,user_y;
    
    cin>>user_x;
    cin>>user_y;
    
    
    xy_point point1,point2,point3;
    xy_point copyConst=point1;
    point1.set_x(user_x);
    point1.set_y(user_y);
    
    float Y=point1.get_y();
    float X=point1.get_x();
    
    point1.show();
    point2.show();
    point3 = point1+point2;
    point3.show();
    (point1+point2).show();
    (++point1).show();
    (point1++).show();
    
    
    cout<<"\t"<<Y<<","<<X<<endl;
    cout<<copyConst.getval()<<endl;
    
   
    
    return 0;
}
