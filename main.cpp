//
//  main.cpp
//  Dissertation
//
//  Created by SajidQurashi on 03/03/2017.
//  Copyright © 2017 SajidQurashi. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "indexpage.cpp"

using namespace std;

int main () {

   indexpage index_object;
    cout << "Content-type:text/html\r\n\r\n";
//    for(int i=0;i<5;i++){
//    cout<<"Connection succed"<<endl;
//    cout<<"NewLine\n";
//        cout<<"After NewLine\n";
//    }
   index_object.writeIndex("index.html");
//   index_object.writeCss("style.css");
    
    return 0; }
