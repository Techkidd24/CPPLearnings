#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no. of rows: ";
    cin>>m;
    cout<<endl;
    cout<<"Enter no. of columns: ";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(max1<arr[i][j]){
                max1=arr[i][j];               
            }
            if(max2<arr[i][j] && arr[i][j]!=max1){
                max2=arr[i][j];
            }   
        }
    }
    cout<<max1<<endl;
    cout<<max2;
}