#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>v;
    int n = nums.size();
    for(int i=0;i<n;i++){
        int curr=1;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }else{
                curr = curr * nums[j];
            }
        }
        v.push_back(curr);
    }
    return v;
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
    vector<int>ans= productExceptSelf(nums);
    for(auto x : ans){
        cout<<x<<" ";
    }
    return 0;
}