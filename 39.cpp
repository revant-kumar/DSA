//Leet-455: Assign Cookies

//M-1: Using arrays --- greater to smaller
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend());
        int counter = 0;

        int i,j=0;
        for(i=0;i<g.size() ;i++){
            if(j<s.size() && g[i]<=s[j]){
                counter++;
                j++;
            }
        }

        return counter;
    }
};


//M-2: Using Heaps but same logic, accessing greater element first
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        priority_queue<int> p1, p2;

        int i, counter = 0;
        for(i=0;i<g.size();i++){
            p1.push(g[i]);
        }
        for(i=0;i<s.size();i++){
            p2.push(s[i]);
        }

        i = 0;
        while(i<g.size()){
            if(p1.empty() || p2.empty()){
                break;
            }
            else if(p1.top()<=p2.top()){
                counter++;
                p1.pop();
                p2.pop();
            }
            else if(p1.top()>p2.top()){
                p1.pop();
            }

            i++;
        }

        return counter;
    }
};