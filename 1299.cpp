//1299. Replace Elements with Greatest Element on Right Side
#include <bits/stdc++.h>
using namespace std;
vector<int> replaceElements(vector<int>& arr) {
    int n= arr.size();
    int maxi=-1;
    int counter = n-2;
    vector<int>ans(n);
    ans[n-1]=-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
        if(counter>=0){
            ans[counter]=maxi;
            counter--;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int>arr;
    for (int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>ans = replaceElements(arr);
    for(auto x:ans){
        cout<<x<<" ";
    }
    
    return 0;
}
