#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val){
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==val){
            nums[i]=nums[n-1];
            i--;
            n--;
        }
    }
    return n;
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
    int val;
    cin>>val;
    cout<<removeElement(nums,val)<<endl;
    return 0;
}