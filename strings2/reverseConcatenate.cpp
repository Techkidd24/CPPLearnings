#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter String: ";
    cin>>str;
    string temp=str;
    reverse(temp.begin(),temp.end());
    str+=temp;
    cout<<str;
}