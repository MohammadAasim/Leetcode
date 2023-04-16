//14.Longest Common Prefix
#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs){
    string ans="";
    //For travel first string
    for(int i=0;i<strs[0].size();i++){
        char ch = strs[0][i];

        bool match = true;
        for(int j=1;j<strs.size();j++){
            if(strs[j].size()<i || ch!=strs[j][i]){
                match=false;
            }
        }
        if(match==false){
            break;
        }else{
            ans.push_back(ch);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<string>str;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        str.push_back(s);
    }
    cout<<longestCommonPrefix(str)<<endl;
    return 0;
}