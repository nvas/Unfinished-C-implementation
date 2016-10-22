#include <iostream>

using namespace std;

int main()
{
    int temp;
    int arr[8];
    
    
    cout<<"Enter Your numbers "<<endl;
    
    for (int k =0 ; k < 8 ; k++){
        
        
        cin>>arr[k];
    }
    for (int i=0;i<=7;i++){             // visit row per i times
        for (int j=0;j<=7;j++){         //visit colomn per j times
            if (arr[j] > arr[j+1]){     // who greater than
                temp=arr[j];                // if true save in temp
                arr[j]=arr[j+1];            // swap
                arr[j+1]=temp;              // clean temp to save on it again later
            }
        }
    }
    
    for (int i=0;i<=7;i++)
        cout<<arr[i];                   //print sorted
    
    cout<<endl;
    
    
    
    return 0;
}
