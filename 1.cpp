#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    vector<int>ans;
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;
    
    vector<int>ans = twoSum(nums,target);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}