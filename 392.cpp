//392. Is Subsequence
#include <bits/stdc++.h>
using namespace std;
bool IsSubsequences(string s,string t){
    int j=0;
    for(int i=0;i<t.size();i++){
        if(t[i]==s[j]){
            j++;
        }
        if(j==s.size()){
            return true;
        }
    }
    return false;
}
int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    if(IsSubsequences(s,t)){
        cout<<"Subsequences"<<endl;
    }else{
        cout<<"Not Subsequences"<<endl;
    }
    return 0;
}