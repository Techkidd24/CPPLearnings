#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows in matrix: ";
    cin>>m;
    cout<<endl;
    cout<<"Enter columns in matrix: ";
    cin>>n;
    cout<<endl;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0; j<n; j++){
        if(j%2==0){
            for(int i=0; i<m; i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}