#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,3,2,7,9,11};
    int x1=INT_MIN, x2=INT_MIN, x3=INT_MIN;
    for(int i=0; i<6; i++){
        if(arr[i]>x1){
            x3=x2;
            x2=x1;
            x1=arr[i];
        }
        else if(arr[i]>x2){
            x3=x2;
            x2=arr[i];
        }
        else if(arr[i]>x3){
            x3=arr[i];
        }
    }
    cout<<x3<<"\t"<<x2<<"\t"<<x1;
}