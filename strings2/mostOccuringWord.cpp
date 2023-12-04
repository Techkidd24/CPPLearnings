//count the number of most occuring word
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="Techkidd is a maths teacher. He is a DSA mentor as well!";
    stringstream ss(str);
    vector<string> s;
    string temp;
    while(ss>>temp){
        s.push_back(temp);
    }
    int c=1;
    int maxCount=1;
    sort(s.begin(),s.end());            //will put all the similar words together according to ascii
    for(int i=0; i<s.size(); i++){
        if(s[i]==s[i-1])    c++;
        else    c=1;
        maxCount= max(maxCount,c);
    }
    c=1;
    for(int i=0; i<s.size(); i++){
        if(s[i]==s[i-1])    c++;
        else    c=1;
        if(c==maxCount) cout<<s[i]<<" "<<maxCount<<endl;
    }
}