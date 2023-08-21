#include<iostream>
using namespace std;
int main(){
    // int arr[]={1,2,1,2,3,4,4};
    // int i;
    // bool flag=false;
    // for(i=0; i<7; i++){
    //     for(int j=i+1; j<7; j++){
    //         if(arr[i]==arr[j])  continue;
    //         else    flag=true;
    //     }
    //     if(flag==true)  break;
    //     else    continue;
    //     cout<<arr[i];
    // }
    int arr[]={1,2,1,2,3,4,4};
    for(int i=0; i<7; i++){
        int count=0;
        for(int j=0; j<7; j++){
            if((i!=j) && (arr[i]==arr[j]))  count++;
        }
        if(count==0)    cout<<arr[i];
    }
    cout<<"No Unique Values.";
}