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

    //2)finding next greatest element with the help of same prev array
    prev[n-1]=-1;
    max=height[n-1];
    for(int i=n-2; i>=0; i--){
        if(max<prev[i]) prev[i]=max;
        if(max<height[i])   max=height[i];
    }

    //3) now calculating water
    int water=0;
    for(int i=1; i<n-1; i++){
        if(height[i]<prev[i])  water+= prev[i]-height[i];
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