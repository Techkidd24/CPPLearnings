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
    int minr=0, minc=0; //min-row and min-column starting from zero
    int maxr=m-1, maxc=n-1; //max row and coumn starting from size-1
    //spiral
    while(minr<=maxr && minc<=maxc){
        //right
        if(minr>maxr || minc>maxc)  break;
        for(int j=minc; j<=maxc; j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        //down
        if(minr>maxr || minc>maxc)  break;
        for(int i=minr; i<=maxr; i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        //left
        if(minr>maxr || minc>maxc)  break;
        for(int j=maxc; j>=minc; j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        //up
        if(minr>maxr || minc>maxc)  break;
        for(int i=maxr; i>=minr; i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}