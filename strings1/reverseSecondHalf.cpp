#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;
    int size=str.size();
    reverse(str.begin()+size/2, str.end());
    cout<<str;
}