//Leet-81: Search in Rotated Sorted Array II

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        int mid;


        while(l<=r){
            mid = (l+r)/2;

            

            if(nums[mid]==target){
                return true;
            }

            //Edge Case: l,mid,r all equal
            if (nums[l] == nums[mid] && nums[mid] == nums[r]) {
                l = l + 1;
                r = r - 1;
                continue;
            }

            if(nums[mid]>=nums[l]){ //left array is sorted
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


        return false;
    }
};