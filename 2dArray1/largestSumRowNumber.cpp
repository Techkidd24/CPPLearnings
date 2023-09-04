#include<iostream>
#include<climits>
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
    int max=INT_MIN;
    int idx=0;
    for(int i=0; i<m; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum+=arr[i][j];
        }
        if(max<sum){
            max=sum;
            idx=i;
        }
    }
    cout<<"Largest Sum row no: "<<idx<<endl;
    cout<<"Sum= "<<max<<endl;
}