#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the no. of rows: ";
    cin>>m;
    cout<<endl;
    cout<<"Enter the no. of columns: ";
    cin>>n;
    vector< vector<int> > v(m,vector<int> (n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}