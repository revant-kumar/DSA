//Leet-796: Rotate String

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        int i,j;
        int n = s.size(), count = 0;

        for(i=0;i<n;i++){
            count = 0;
            for(j=0;j<n;j++){
                if(s[j]==goal[(i+j)%n]){
                    count++;
                }
            }
            if(count==n){
                return true;
            }
        }

        return false;
    }
};


int main(){
    Solution s;
    cout<<s.rotateString("abcde", "cdeab");
}