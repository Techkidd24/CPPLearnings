#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=matrix.size();
    int col=matrix[0].size();
    int i=0; 
    int j=col-1;
    while(i<row && j>=0){
        if(matrix[i][j]==target)    return true;
        else if(matrix[i][j]>target)    j--;
        else if(matrix[i][j]<target)    i++;
    }
    return false;
}
int main(){
    int m,n;
    cout<<"Enter the no. of rows: ";
    cin>>m;
    cout<<endl;
    cout<<"Enter the no. of columns: ";
    cin>>n;
    vector< vector<int> > matrix(m,vector<int> (n));
    cout<<"Enter elements: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"Enter target value: ";
    cin>>target;
    searchMatrix(matrix,target);   
}