//Leet-1752: Check if array is sorted and rotated
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int i;
        int flag = 0, n = nums.size(), min = nums[0];
        for(i=0;i<n;i++){
            if(nums[i]<nums[(i+1)%n] && nums[i]<min && flag==0){
                min = nums[i];
            }
            else if(nums[i]>nums[(i+1)%n]){
                flag++;
            }
            else if(nums[i]<nums[(i+1)%n] && nums[(i+1)%n]>min && flag>=1){
                return false;
            }
        }

        if(flag==1 || flag==0){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    vector<int> nums = {1,2,3,4,5};
    Solution s;
    cout<<s.check(nums);
    return 0;
}

// The order of number are in ascending order, there can be 2 possibilities:
// 1. Ascending before rotation and 2. after rotation
// To denote after rotation we use a flag/counter
// Algo:
// 1. Find the minimum from the left of starting point and left must be in order
// 2. All elements after the starting point must be less than the min of left and         in order
       