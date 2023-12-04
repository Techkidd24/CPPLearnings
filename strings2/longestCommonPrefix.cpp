#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //["flower","flow","flight"]
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    sort(v.begin(),v.end());
    cout<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    string first=v[0];
    string last=v[v.size()-1];

    if(v[0]==v[v.size()-1]) cout<<"";
    string s="";
    for(int i=0; i<(min(first.size(),last.size())); i++){
        if(first[i]==last[i])   s+=first[i];
        else    break;
    }
    cout<<s;

}