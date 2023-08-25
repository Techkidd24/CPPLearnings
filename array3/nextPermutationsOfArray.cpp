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
    int idx=-1; //1)pivot index
    for(int i=arr.size()-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(arr.begin(), arr.end()); //if there is no next permutation and array is already greatest
    }
    //2)sorting/reversing after pivot
    reverse(arr.begin()+idx+1, arr.end());
    //3)finding number just greater than pivot
    int j=0;
    for(int i=idx+1; i<arr.size(); i++){
        if(arr[i]>arr[idx]){
            j=i;
            break;
        }
    }

    //swapping idx and j
    int temp=arr[idx];
    arr[idx]=arr[j];
    arr[j]=temp;

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}