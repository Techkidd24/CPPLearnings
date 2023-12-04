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
    int cons=0;
    for(int i=0; i<n; i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u') cons++;
    }
    cout<<cons;
}