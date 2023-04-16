//58. Length of Last Word
#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s){
    int n = s.size();
    int i = n-1;
    while(i>=0 && s[i]==' '){
        i--;
    }
    while(i<0){
        return 0;
    }
    int count=0;
    while(i>=0 && s[i]!=' '){
        count++;
        i--;
    }
    return count;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<lengthOfLastWord(s)<<endl;
    return 0;
}