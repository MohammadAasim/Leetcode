//217. Contains Duplicate
#include <bits/stdc++.h>
using namespace std;
bool IscontainsDuplicate(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            return true;
        }
    }
    return false;
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
    if(IscontainsDuplicate(nums)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}