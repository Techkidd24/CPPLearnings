/*Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
two numbers formed from digits of the array. Please note that all digits of the given array must be
used to form the two numbers.*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,1,5,5,2,3};
    int n=6;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<n; i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<endl;
    int a1=0;
    for(int i=0; i<n; i++){
        a1*=10;
        a1+=arr[i];    
    }
    cout<<a1;
    cout<<endl;
    for(int i=n-1; i>=1; i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    int a2=0;
    for(int i=0; i<n; i++){
        a2*=10;
        a2+=arr[i];    
    }
    cout<<a2<<endl;
    cout<<"Sum= "<<a1+a2;
}