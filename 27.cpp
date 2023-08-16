//Leet-14:Longest Common Prefix

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,j;
        int n = strs.size(), m=999999;
        int idx = -1;
        for(i=0;i<n;i++){
            if(strs[i].length()<m){
                m = strs[i].length();
                idx = i;
            }
        }
        
        for(i=0;i<m;i++){
            char temp = strs[idx][i];
            for(j=0;j<n;j++){
                if(strs[j][i]!=temp){
                    return strs[idx].substr(0,i);
                }
            }
        }

        if(i==m && j==n){
            return strs[idx];
        }
        
        return "";
    }
};


int main() {
    vector<string> strs = {"a"};
    Solution s;
    cout<<s.longestCommonPrefix(strs);
}