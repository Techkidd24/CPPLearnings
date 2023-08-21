#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,3,2,7,9,11};
    int x1=INT_MIN;
    int x2=INT_MIN;
    int x3=INT_MIN;
    for(int i=0; i<6; i++){
        if(arr[i]>x1)    x1=arr[i];
    }
    cout<<"first largest element: "<<x1<<endl;
    for(int i=0; i<6;i++){
        if(arr[i]>x2 && arr[i]!=x1) x2=arr[i];
    }
   cout<<"second largest element: "<<x2<<endl;
   for(int i=0; i<6; i++){
    if(arr[i]>x3 && arr[i]!=x1 && arr[i]!=x2)   x3=arr[i];
   }
   cout<<"third largest element: "<<x3;
}