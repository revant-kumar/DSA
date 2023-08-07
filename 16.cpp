//Leet-34: Find First and Last Position of Element in Sorted Array
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lowerBound(vector<int>& nums, int l, int r, int x){
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]>=x){
                r = mid-1; 
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        

        int a = lowerBound(nums,0,n-1,target);
        int b = lowerBound(nums,0,n-1,target+1)-1;

        if(a < nums.size() && nums[a] == target){
            return {a, b};
        }

        return{-1,-1};
    }
};

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    Solution s;
    cout<<s.searchRange(nums,8)[0]<<" "<<s.searchRange(nums,8)[1];
}