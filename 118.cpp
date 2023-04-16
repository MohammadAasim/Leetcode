#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows){
    vector<vector<int>>ans;
    for(int i=0;i<numRows;i++){
        vector<int>v(i+1,1);
        for(int j=1;j<i;j++){
            v[j]=ans[i-1][j-1]+ans[i-1][j];
        }
        ans.push_back(v);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>ans = generate(n);
    for(auto x:ans){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
