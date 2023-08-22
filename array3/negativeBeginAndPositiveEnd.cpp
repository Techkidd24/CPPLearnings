#include<iostream>
#include<vector>
using namespace std;
void move(vector<int> &v){
    int n=v.size();
    int i=0;    //for negative numbers
    int j=n-1;  //for positive numbers
    while(i<j){
        if(v[j]>0)  j--;
        if(v[i]<0)  i++;
        if(i>j) break;
        if(v[i]>0 && v[j]<0){
            int temp=v[j];
            v[j]=v[i];
            v[i]=temp;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    move(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}