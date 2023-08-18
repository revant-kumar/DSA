//Leet-205: Isomorphic Strings
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool func(unordered_map<char,char> m, string str1,string str2,int n){
        int i;
        string temp;
        for(i=0;i<n;i++){
            temp+=m[str2[i]];
        }
        
        if(temp==str1){
            return true;
        }
        else{
            return false;
        }   
    }
    
    bool isIsomorphic(string s, string t) {

        if(s.length()!=t.length()){
            return false;
        }
        
        int i;
        int n = s.length();

        unordered_map<char,char> m1,m2;
        for(i=0;i<n;i++){
            if(m1.find(s[i])==m1.end()){
                m1[s[i]] = t[i];
            }
            
            if(m2.find(t[i])==m2.end()){
                m2[t[i]] = s[i];
            }
        }
        
        if(m1.size()<m2.size()){
            return func(m1,t,s,n);
        }
        else{
            return func(m2,s,t,n);
        }
        
    }
};


int main(){
    Solution s;
    cout<<"\n"<<s.isIsomorphic("badc", "baba");
}