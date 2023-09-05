#include<iostream>
using namespace std;
int main(){
    int m1,n1,m2,n2;
    cout<<"Enter rows in first matrix: ";
    cin>>m1;
    cout<<endl;
    cout<<"Enter columns in first matrix: ";
    cin>>n1;
    cout<<endl;
    cout<<"Enter rows in second matrix: ";
    cin>>m2;
    cout<<endl;
    cout<<"Enter columns in second matrix: ";
    cin>>n2;
    cout<<endl;

    if(n1==m2){
        int arr1[m1][n1];
        cout<<"Enter elements in first matrix: ";
        for(int i=0; i<m1; i++){
            for(int j=0; j<n1; j++){
                cin>>arr1[i][j];
            }
        }
        int arr2[m2][n2];
        cout<<"Enter elements in second matrix: ";
        for(int i=0; i<m2; i++){
            for(int j=0; j<n2; j++){
                cin>>arr2[i][j];
            }
        }
        int res[m1][n2];
        for(int i=0; i<m1; i++){
            for(int j=0; j<n2; j++){
                res[i][j]=0;
                //filling elements
                for(int r=0; r<n1; r++){
                    res[i][j]+=arr1[i][r]*arr2[r][j];
                }
            }
        }
        for(int i=0; i<m1; i++){
            for(int j=0; j<n2; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else    cout<<"The matrices cannot be multiplied.";
}