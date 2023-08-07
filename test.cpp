#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target){
                l = mid-1;
                r = mid+1;
            }
            else if(nums[mid]>target){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }

        return {l,r};
    }
};
int main(){
    vector<int> nums = {0,0,1,1,1};
    Solution s;
    cout<<s.searchRange(nums);
}