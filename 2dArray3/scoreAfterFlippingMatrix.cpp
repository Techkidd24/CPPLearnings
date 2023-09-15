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
    cout<<"Enter elements(in binary): ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    cout<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //flip
    for(int i=0; i<m; i++){
        if(v[i][0]==0){
            for(int j=0; j<n; j++){
                if(v[i][j]==0)  v[i][j]=1;
                else    v[i][j]=0;
            }
        }
    }
    for(int j=0; j<n; j++){
        int noz=0;
        int noo=0;
        for(int i=0; i<m; i++){
            if(v[i][j]==0)  noz++;
            else    noo++;
        }
        if(noz>noo){
            for(int i=0; i<m; i++){
                if(v[i][j]==0)  v[i][j]=1;
                else    v[i][j]=0;
            }
        } 
    }
    int sum=0;
    for(int i=0; i<m; i++){
        int x=1;
        for(int j=n-1; j>=0; j--){
            sum+=v[i][j]*x;
            x*=2;
        }
    }
    cout<<sum;  
}