//Leet-242: Valid Anagram

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> M1,M2;

        if(s.length()!=t.length()){
            return false;
        }
        
        int n = s.length();
        int i;
        
        for(i=0;i<n;i++){
            M1[s[i]]+=1;
            M2[t[i]]+=1;
        }
        
        map<char,int> :: iterator itr1, itr2;
        for(itr1=M1.begin(),itr2=M2.begin();itr2!=M2.end();itr1++,itr2++){
            if(itr1->first!=itr2->first || itr1->second!=itr2->second){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution s;
    cout<<s.isAnagram("rat", "car");
}

