#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr1;
    vector<int> arr2;
    
    int i=0,j=0,k=0;
    int n1,n2;
    cout<<"Enter size of array 1: ";
    cin>>n1;
    int a;
    cout<<endl;
    cout<<"Enter size of array 2: ";
    cin>>n2;
    cout<<endl;
    vector<int> arr3(n1+n2);
    int b;
    cout<<"Enter elements of array 1: ";
    for(int q=0; q<n1; q++){
        cin>>a;
        arr1.push_back(a);
    }
    for(int q=0; q<arr1.size(); q++){
        cout<<arr1[q]<<" ";
    }
    cout<<endl<<"Enter elements of array 2: ";
    for(int q=0; q<n2; q++){
        cin>>b;
        arr2.push_back(b);
    }
     for(int q=0; q<arr2.size(); q++){
        cout<<arr2[q]<<" ";
    }
    while(i<=n1-1 && j<=n2-1){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
        }
        else if(arr2[j]<arr1[i]){
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    //for remaining elements 
    if(i==n1){  //arr1 ke saare elements utha chuka hai
        while(j<=n2-1){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(j==n2){  //arr2 ke saare elements utha chuka hai
        while(i<=n1-1){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    }
    for(int q=0; q<arr3.size(); q++){
        cout<<arr3[q]<<" ";
    }

}