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
    cout<<endl;
    int arr2[n][m];
    for(int j=n-1; j>=0; j--){
        for(int i=0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}