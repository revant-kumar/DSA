//Leet-704: Binary Search
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bs(vector<int>& nums, int l, int r, int x){
        int mid = (l+r)/2;
        if(l<=r){
            if(nums[mid]==x){
                return mid;
            }
            else if(x>nums[mid]){
                return bs(nums,mid+1,r,x);
            }
            else if(x<nums[mid]){
                return bs(nums,l,mid-1,x);
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int k = bs(nums,0,n-1,target);
        return k;
    }
};

int main() {
    vector<int> nums = {3,6,11,12,17,20,67}; 
    int n = sizeof(nums)/sizeof(nums[0]);
    
    int x = 67;
    Solution s;
    cout<<"Output: "<<s.search(nums,x);
}