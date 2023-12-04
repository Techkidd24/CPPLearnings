#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)    cout<<"True";
    else    cout<<"False";
    // bool flag=false;
    // for(int i=0; i<s.size(); i++){
    //     if(s[i]==t[i])  flag=true;
    //     else{
    //         cout<<"False";
    //         break;
    //     }
    // }
    // if(flag==true)  cout<<"True";
}