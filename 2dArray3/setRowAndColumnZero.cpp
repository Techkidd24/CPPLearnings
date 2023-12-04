//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows in vector: ";
    cin>>m;
    int n;
    cout<<"Enter columns in vector: ";
    cin>>n;
    vector< vector<int> > arr(m, vector<int> (n));
    cout<<"Enter elements: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==0){
                for(int i=0; i<m; i++){
                    arr[i][j]=-1;
                    arr[j][i]=-1;
                }
        
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}