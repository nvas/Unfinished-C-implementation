#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void shows(int i) {
    cout << ' ' << i;}
void removedup( vector<int> my_vector) {
    
    vector<int>::iterator ite;
    for_each (my_vector.begin(), my_vector.end(), shows);
    cout<<" vector size before remove duplication = "<<my_vector.size()<<endl;
 
    sort(my_vector.begin(), my_vector.end());
    
    ite=unique(my_vector.begin(), my_vector.end());
    
     my_vector.resize(ite - my_vector.begin() );
    
   // ite=unique(my_vector.begin(), my_vector.end());

    
for_each (my_vector.begin(), my_vector.end(), shows);
    
    cout<<" vector size after remove duplication = "<<my_vector.size()<<endl;
    
    }



int main () {
    int i;
    vector<int> my_vector;

    cout<<"Enter an integer (enter non-number to stop): "<<endl;
    while (cin>>i){
        my_vector.push_back(i);
        cout<<"Enter an integer (enter non-number to stop): "<<endl;
    }
    removedup(my_vector);
    
    return 0;
}
