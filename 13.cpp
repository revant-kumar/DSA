//Leet-485: Max Consecutive Ones

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0, count = 0, maxCount = 0;
        while(j<n){
            if(nums[j]!=0){
                i=j;
                count = 0;
                while(i<n && nums[i]!=0){
                    count++;
                    i++;
                }
                maxCount = max(count, maxCount);
                j = i+1;
            }
            else{
                j++;
            }
        }
        return maxCount;
    }
};

int main(){
    vector<int> nums = {0,0,1,1,1};
    Solution s;
    cout<<s.findMaxConsecutiveOnes(nums);
}