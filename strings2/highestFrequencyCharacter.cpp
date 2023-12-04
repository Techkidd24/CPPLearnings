#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(26,0);               //special string array
    string str="leetcode";
    for(int i=0; i<str.size(); i++){    //this loop for updation and process    
        char ch=str[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }
    int max=0;
    for(int i=0; i<26; i++){            //this loop for checking max
        if(arr[i]>max)  max=arr[i];
    }
    for(int i=0; i<26; i++){        //this loop for printing
        if(arr[i]==max){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<max<<endl;

        }
    }
}