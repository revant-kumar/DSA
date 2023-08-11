//Leet-153: Find Minimum in Rotated Sorted Array

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n-1;
        int mid;
        int min = INT_MAX;
        while(l<=r){
            mid = (l+r)/2;
            if(nums[l]<=nums[mid] && nums[mid]<=nums[r]){ //Both sides are sorted
                if(nums[l]<min){
                    // min = nums[l];
                    return nums[l];
                }
                else{
                    break;
                }
            }
            
            if(nums[l]<=nums[mid] && nums[mid]>nums[r]){ //Left side is sorted
                l = mid+1;
            }
            else if(nums[l]>nums[mid] && nums[mid]<=nums[r]){ //Right side is sorted
                r = mid-1;
            }

            //Common condition taken out of if-else
            if(nums[mid]<min){
                min = nums[mid];
            }
        }
        return min;
    }
};