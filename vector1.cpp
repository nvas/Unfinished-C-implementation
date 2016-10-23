#include <iostream>
#include<vector>
using namespace std;
void showall(vector<int> vec); 
int main()
{
        int num, index;
        vector<int> my_vector;
        do {
            cout<<"Enter a number: "<<endl; 
            cin>>num;
                if (num!=-1)
                    my_vector.push_back(num);

        }   while (num!=-1);

                    cout<<"You entered "<<my_vector.size()<< " numbers."<<endl; 
                    cout<<"Enter an index: "<<endl;
                    cin>>index;
                    cout<<"At index "<<index<<": "<<my_vector[index]<<endl; 
                    cout<<"You vector values: ";
                    showall(my_vector);
                    cout<<"Index of the item you want to remove: "<<endl; 
                    cin>>index;
                    my_vector.erase(my_vector.begin()+index);
                    cout<<"You vector values: ";
                    showall(my_vector);
                    cout<<"Now you have "<<my_vector.size()<<"numbers."<<endl; 
                    return 0;
    }


void showall(vector<int> vec) 
{
for(vector<int>::iterator item =vec.begin(); item!=vec.end();item++) 

cout<<*item<<' ';

cout<<endl;
}





