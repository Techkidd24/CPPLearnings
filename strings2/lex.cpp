//Given a sentence str, return the word that is lexicographically maximum.
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="proud to be pwians";
    stringstream ss(str);
    vector<string> v;
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    int size=v.size();
    string max=v[0];
    for(int i=0; i<size; i++){
        if(v[i+1]>v[i]){
            max=v[i+1];
        }
    }
    cout<<max;


    

}