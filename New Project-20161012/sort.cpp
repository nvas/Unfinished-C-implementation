#include <iostream>

using namespace std;

int main()
{
    int temp;
    int arr[8]={6,5,3,1,8,7,2,4};
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

