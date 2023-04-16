//6. Zigzag Conversion
#include <bits/stdc++.h>
using namespace std;
string convert(string s, int numRows) {
    if(numRows==1){
        return s;
    }
    int cycle = 2*numRows - 2;
    string ans = "";
    for(int i=0;i<numRows;i++){
        for(int j=i;j<s.size();j += cycle){
            ans += s[j];
            int k = j+cycle-2*i;
            if(i!=0 && i!=numRows-1 && k<s.size()){
                ans += s[k];
            }
        }
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    int row;
    cin>>row;
    cout<<convert(s,row)<<endl;
    return 0;
}