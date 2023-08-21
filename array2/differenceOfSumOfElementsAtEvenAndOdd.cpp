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
    for(int i=0; i<=(n/2)-1; i++){
        e+=arr[2*i];
    }
    cout<<endl;
    for(int i=1; i<=n/2; i++){
        o+=arr[(2*i)-1];
    }
    cout<<"Sum of even indices: "<<e<<endl;
    cout<<"Sum of odd indics: "<<o<<endl;
    int d=e-o;
    cout<<"Difference= "<<d;
}