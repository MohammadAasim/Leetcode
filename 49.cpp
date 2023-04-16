//49. Group Anagrams
#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs){
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>umap;
    for(auto x : strs){
        string temp=x;
        sort(x.begin(),x.end());
        umap[x].push_back(temp);
    }
    for(auto x:umap){
        vector<string>temp=x.second;
        ans.push_back(temp);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<string>strs;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        strs.push_back(s);
    }
    vector<vector<string>>ans = groupAnagrams(strs);
    for(auto x:ans){
        for(auto s:x){
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return 0;
}