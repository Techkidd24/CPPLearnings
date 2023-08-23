#include<iostream>
#include<vector>
using namespace std;

void sortedMerge(vector<int> &arr1, vector<int> &arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int> arr3(m+n);
    int i=0;
    int j=0; 
    int k=0;
    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    if(i==n){  //arr1 ke saare elements utha chuka hai
        while(j<=m-1){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(j==m){  //arr2 ke saare elements utha chuka hai
        while(i<=n-1){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    }
    for(int q=0; q<arr3.size(); q++){
        cout<<arr3[q]<<" ";
    }
    return;
}
int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);

    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0; i<arr2.size(); i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    sortedMerge(arr1, arr2);
    
}