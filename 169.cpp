#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums){
    int n= nums.size();
    if(n==0){
        return -1;
    }
    int maj = nums[0],cnt=1;
    for(int i=1;i<n;i++){
        if(maj==nums[i]){
            cnt++;
        }else{
            cnt--;
        }
        if(cnt==0){
            maj=nums[i];
            cnt=1;
        }
    }
    cnt=0;
    for(int i=0;i<n;i++){
        if(nums[i]==maj){
            cnt++;
        }
    }
    if(cnt>(n/2)){
        return maj;
    }else{
        return -1;
    }
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
    cout<<majorityElement(nums)<<endl;
    return 0;
}