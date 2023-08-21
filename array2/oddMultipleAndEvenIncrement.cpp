#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter elements in array: ";
    cin>>n;
    int o=0;
    int e=0;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=n; i++){
        if(i%2==0)  arr[i]+=10;
        else    arr[i]*=2;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}