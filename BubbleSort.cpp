#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    // Dynamic Array Creation and take value from user

    int limit,temp;
    cout<<"Enter Array Size for Bubble-Sort"<<endl;
    cin>>limit;

    int arr[limit];
    cout<<endl<<"Enter your "<<limit<<" Values"<<endl;
    for(int i=0;i<limit;i++)
           cin>>arr[i];

    // Bubble Sort with reduce Comparison

    for(int i=0;i<limit;i++){
             for(int j=0;j<limit-1-i;j++){
                    if(arr[j]>=arr[j+1]){
                         temp = arr[j];
                         arr[j]=arr[j+1];
                         arr[j+1]=temp;
                    }

             }
        }

  // Sorted data
  cout<<endl<<"Sorted Data ..."<<endl;
  for(int i=0;i<limit;i++)
           cout<<endl<<arr[i];

return 0;
}
