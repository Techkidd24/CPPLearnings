#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    //selection sort
    for(int i=0; i<n-1; i++){
        //minimum element calculation
        int min=INT_MAX;    
        int mindx=-1;   //created for storing index
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}