#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int> &height){
    int n=height.size();
    //1)finding previous greatest element
    int prev[n];
    prev[0]=-1;
    int max=height[0];
    for(int i=1; i<n; i++){
        prev[i]=max;
        if(max<height[i])   max=height[i];
    }

    //2)finding next greatest element
    int next[n];
    next[n-1]=-1;
    max=height[n-1];
    for(int i=n-2; i>=0; i--){
        next[i]=max;
        if(max<height[i])   max=height[i];
    }

    //3) finding smaller elements among upper two arrays and filling it into new array
    int small[n];
    small[0]=-1;
    small[n-1]=-1;
    for(int i=1; i<n-1; i++){
        if(prev[i]<next[i]) small[i]=prev[i];
        else    small[i]=next[i];
    }

    //4) now calculating water
    int water=0;
    for(int i=1; i<n-1; i++){
        if(height[i]<small[i])  water+= small[i]-height[i];
    }
    return water;
}

int main(){
    vector<int> height;
    height.push_back(0);
    height.push_back(1);
    height.push_back(0);
    height.push_back(2);
    height.push_back(1);
    height.push_back(0);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);
    cout<<"Height=[ ";
    for(int i=0; i<height.size(); i++){
        cout<<height[i]<<" ";
    }
    cout<<"]";
    cout<<endl;
    int water=trap(height);
    cout<<"Water Trapped= "<<water;

}