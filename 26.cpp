//Leet-1903: Largest Odd Number in String

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();

        int i;
        for(i=n-1;i>=0;i--){
            if((int)(num[i]-'0')%2==1){
                return num.substr(0,i+1); 
            }
        }
        return "";
    }
};