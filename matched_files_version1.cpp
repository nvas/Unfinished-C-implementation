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
            
            if(str1==str2)
                true_line++;
            else false_line++;
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
