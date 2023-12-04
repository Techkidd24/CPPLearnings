#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="AZYZXBDXJK";
    string str="";
    for(int i=0; i<s.length(); i++){
        if(s[i]>='X'){
            str+=s[i];
        }
    }
    cout<<str;
}