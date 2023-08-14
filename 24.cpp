//Leet-151: Reverse Words in a String

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        vector<string> v;
        string strnew = "";
        int i = 0;
        while(i<n){
            if(s[i]==' '){
                i++;
                continue;
            }
            else{
                string str = "";
                while(s[i]!=' ' && s[i]!='\0'){
                    str = str+s[i];
                    i++;
                }
                v.push_back(str);
            }
        }
        i = v.size()-1;
        while(i>0){
            strnew = strnew+v[i]+" ";
            i--;
        }
        strnew = strnew+v[i];
        return strnew;
    }
};