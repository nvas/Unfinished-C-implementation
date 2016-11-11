#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int max_i=70;

void shows(int i)
{
    
    cout << ' ' << i;}


bool equal_higher_70(int i)
{

    
    return i>max_i;

}
void showall(vector<int> my_vector)
{
    cout<<"All marks are : "<<for_each (my_vector.begin(), my_vector.end(), shows);
    }
int main () {
    int i;
    vector<int> my_vector;
    cout<<"Enter students mark "<<endl;
    while (cin>>i){
        my_vector.push_back(i);
        cout<<"Enter an integer (enter non-number to stop): "<<endl;
    }
    cin.clear();
    cin.ignore();
  //  cout<<"Enter desired mark : ";
   // cin>>max_i;
    cout<<"There are "<<count_if(my_vector.begin(), my_vector.end(), equal_higher_70)<<" marks "<<" larger than "<<max_i<<endl;
    showall(my_vector);
    cout<<endl;
    return 0;
}
