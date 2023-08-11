//Leett-33: Search in Rotated Sorted Array
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        int mid;
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>=nums[l]){ //left array is sorted
                if(nums[l]<=target && target<nums[mid]){
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            else{ //right array is sorted
                if(nums[mid]<target && target<=nums[r]){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
        }


        return -1;
    }
};

int main() {
    vector<int> arr = {6,7,8,0,1,2,3};
    int target = 8;
    
    Solution s;
    cout<<s.search(arr,target);
}