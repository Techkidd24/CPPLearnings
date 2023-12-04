#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;
    int size=str.size();
    for(int i=0; i<size; i++){
        if(str[i]!=str[size-i-1]){         //i+j=n-1--->j=n-i-1;
            cout<<"Not a palindrome.";
            break;
        }
        else    cout<<"It is a palindrome.";
    }
}