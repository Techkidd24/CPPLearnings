#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,7,9,11};
    bool flag=true;
    for(int i=0; i<5; i++){
        if(arr[i]<=arr[i+1])    continue;
        else{
            flag=false;
            break;
        }
    }
    if(flag==true)  cout<<"Array is sorted";
    else if(flag==false)    cout<<"Array is unsorted";
}