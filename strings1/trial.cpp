#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    string str;
    cout<<"Enter string: ";
    cin>>str;
    for(int i=1; i<n; i+=2)  str[i]='#';
    cout<<str;
}