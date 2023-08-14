//Leet-1021: Remove Outermost Parentheses

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        int lcount = 0, rcount = 0;
        stack<char> stk;
        string str = "";

        int i;
        for(i=0;i<n;i++){
            if(lcount==rcount && s[i]=='('){
                lcount++;
            }
            else if(s[i]=='('){
                lcount++;
                str+=s[i];
            }
            else if(lcount==rcount+1 && s[i]==')'){
                rcount++;
            }
            else if(s[i]==')'){
                rcount++;
                str+=s[i];
            }
        }

        return str;
    }
};