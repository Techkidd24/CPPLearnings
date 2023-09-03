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
    int max=arr[0][0];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(max<arr[i][j])   max=arr[i][j];
        }
    }
    cout<<endl;
    cout<<"largest element: "<<max;
}