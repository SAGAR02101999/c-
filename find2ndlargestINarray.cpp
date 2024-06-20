#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];
    cout<<"enter element of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
     }

     int mx= arr[0];
     int smx=INT_MIN;
     for(int i=0;i<n;i++)
     {
        if(arr[i]>mx)
        {
         smx=mx;
        mx=arr[i];
        }
     }
     cout<<"maximum="<<mx<<endl;
     cout<<"second maximum="<<smx;
}
