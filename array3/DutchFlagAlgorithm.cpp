//sort array of 0s, 1s & 2s
#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums) {
    int lo=0;
    int mid=0;
    int hi=nums.size()-1;
    while(mid<=hi){
        if(nums[mid]==2){
            int temp=nums[mid];
            nums[mid]=nums[hi];
            nums[hi]=temp;
            hi--;
        }
        else if(nums[mid]==0){
            int temp=nums[mid];
            nums[mid]=nums[lo];
            nums[lo]=temp;
            lo++;
            mid++;
        }
        else    mid++;
    }
}
int main(){
    vector<int> nums;
    int n;
    cout<<"Enter size of your vector: "<<endl;
    cin>>n;
    int a;
    cout<<"Enter elements(0,1,2): ";
    for(int i=0;i<n; i++){
        cin>>a;
        nums.push_back(a);
    }
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    sortColors(nums);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}