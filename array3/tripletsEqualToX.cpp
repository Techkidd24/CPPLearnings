#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,3,2,4,5,7,2,1,3};
    int target=6;
    int count=0;
    for(int i=0; i<9; i++){
        for(int j=i+1; j<9; j++){
            for(int k=j+1; k<9; k++){
                if(arr[i]+arr[j]+arr[k]==target)    count++;
            }
        }
    }
    cout<<count;
}