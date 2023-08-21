#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,2,7,9,11};
    int x=5;
    int count=0;
    for(int i=0; i<6; i++){
        if(arr[i]>x){
            cout<<arr[i]<<endl;
            count++;
        }
    }
    cout<<"Total elements greater than 5: "<<count;
}