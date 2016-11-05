#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Compare_files{
    
public:
    
    void comp(){
        
        int true_line,false_line;
        string str1,str2;
        
        ifstream file1("test1.txt");
        ifstream file2("test2.txt");
        try{
            if(!file1){throw 1;}
            if(!file2){throw 2;}
        }catch(int i){if(i==1)cout<<"file 1 wrong name ";if(i==2)cout<<"file 2 wrong name "<<endl;}
        try{
            if(!file1.is_open()&&!file2.is_open()){throw 3;}
            else{
            while(getline(file1, str1)&&getline(file2,str2))
            {
                int i;
                if(str1==str2){
                    cout<<"Line No: "<<i+1<<" matched"<<endl;i++;
                    true_line++;
                } else {false_line++;cout<<"Line No: "<<i+1<<" Not Matched"<<endl;}
             

                    }
           cout<<"Matched Lines are: "<<true_line<<" and "<<"Unmatched Lines are: "<<false_line<<endl;
            }
        }catch(int t){if(t==3)cout<<"opening problem...."<<endl;}

    }
};


int main()
{
    Compare_files c;
    c.comp();
    
    return 0;
}
