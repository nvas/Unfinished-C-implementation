#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Compare_files{

public:
    
    void comp(){int true_line,false_line;
    string str1,str2;
    ifstream file1("test1.txt");
    ifstream file2("test2.txt");
    
    if(!file1&&!file2){cout<<"not..."<<endl;}
    if(file1.is_open()&&file2.is_open())
        
        while(getline(file1, str1)&&getline(file2,str2))
        {
            int i;
            if(str1==str2){
                cout<<"Line No: "<<i+1<<" matched"<<endl;i++;
                true_line++;
            } else {false_line++;cout<<"Line No: "<<i+1<<" Not Matched"<<endl;}
        }
        cout<<"Matched Lines are: "<<true_line<<" and "<<"Unmatched Lines are: "<<false_line<<endl;;
        
    }
};


int main()
{
    Compare_files c;
    c.comp();

    return 0;
}
