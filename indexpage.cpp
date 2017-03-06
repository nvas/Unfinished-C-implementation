//
//  index.cpp
//  Dissertation
//
//  Created by SajidQurashi on 04/03/2017.
//  Copyright © 2017 SajidQurashi. All rights reserved.
//

#include "indexpage.hpp"
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
void indexpage::writeIndex(string index_file_name){
    /*Read File*/
    
    vector<vector<string> > vec_2d;
    vector<string> vec_1d;
    string item;
    string val;
    std::fstream file(index_file_name,std::ios::in);
    if(!file){cout<<"INDEX something wrong";}
   
    for (string line; getline(file, line); )
    {
        stringstream l(line);
        while (getline(l, item, ','))
        {
            val = item;
            vec_1d.push_back(val);
            
        }
        
        vec_2d.push_back(vec_1d);
        vec_1d.clear();
        //
    }
   
    /*Write file*/

    for(int row=0;row<vec_2d.size();row++){
        for(int column=0;column<vec_2d[row].size();column++){
            string val=vec_2d[row][column];
            cout<<val<<"\n";
        }
      
    }
    file.close();
}
void indexpage::writeCss(string index_file_name){
    /*Read File*/
    
    vector<vector<string> > vec_2d;
    vector<string> vec_1d;
    string item;
    string val;
    std::fstream file(index_file_name,std::ios::in);
    if(!file){cout<<"CSSsomething wrong";}
    
    for (string line; getline(file, line); )
    {
        stringstream l(line);
        while (getline(l, item, ','))
        {
            val = item;
            vec_1d.push_back(val);
            
        }
        
        vec_2d.push_back(vec_1d);
        vec_1d.clear();
        //
    }
    
    /*Write file*/
    
    for(int row=0;row<vec_2d.size();row++){
        for(int column=0;column<vec_2d[row].size();column++){
            string val=vec_2d[row][column];
            cout<<val;
        }
        
    }
    
}



