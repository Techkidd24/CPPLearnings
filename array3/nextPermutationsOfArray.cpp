#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(3);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int idx=-1; //pivot index
    for(int i=arr.size()-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(arr.begin(), arr.end()); //if there is no next permutation and array is already greatest
    }
    //sorting/reversing after pivot
    reverse(arr.begin()+idx+1, arr.end());
    //swapping idx and idx+1
    int temp=arr[idx];
    arr[idx]=arr[idx+1];
    arr[idx+1]=temp;

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}