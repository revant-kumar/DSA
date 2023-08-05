//Leet-136: Single Number
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0,i,n=nums.size();
        for(i=0;i<n;i++){
            x^=nums[i];
        }

        return x;
    }
};

int main(){
    vector<int> nums = {2,2,1};
    Solution s;
    cout<<s.singleNumber(nums);
}