#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter array of element";
    for(int i=0;i<=4;i++){
    cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
    cout<<arr[i]*2<<" ";
    }
    arr[0]=50; // update of no.
    cout<<endl;
    for(int i=0;i<=4;i++)
    cout<<arr[i]<<" ";
   /*cout<<arr[0]<<" ";
     cout<<arr[1]<<" ";
      cout<<arr[2]<<" ";
       cout<<arr[3]<<" ";
        cout<<arr[4]<<" ";*/


}

