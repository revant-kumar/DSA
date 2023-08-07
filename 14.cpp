//Leet-35: Search Insert Position

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        int ans = n;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]>=target){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 2;
    Solution s;
    cout<<s.searchInsert(nums,target);
}