//Leet-540: Single Element in a Sorted Array

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        nums.push_back(-1);
        int n = nums.size();
        int l = 0, r = n-1;
        int mid;

        while(l<=r){
            if(nums[l]==nums[l+1]){
                l+=2;
            }
            else{
                return nums[l];
            }
        }

        return -1;
    }
};