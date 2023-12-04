#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter string consisting of digits from '0' to '9': ";
    cin>>str;
    int n=str.size();
    char max1='!';
    char max2='!';
    for(int i=0; i<n; i++){
        if(str[i]>max1){
            max2=max1;
            max1=str[i];
        }
        else if(str[i]>max2 && str[i]!=max1)    max2=str[i];
    }
    cout<<max1<<endl;
    cout<<max2;
}