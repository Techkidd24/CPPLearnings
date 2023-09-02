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
    int arr1[m][n];
    int res[n][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            res[i][j]=arr1[j][i];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}