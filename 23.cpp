//Leet-162: Find Peak Element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 1, r = n-2;
        int max;
        int mid = (l+r)/2;;

        //Edge cases:
        if(n==1 || nums[0]>nums[1]){
            return 0;
        }
        
        if(nums[n-1]>nums[n-2]){
            return n-1;
        }

        //Actual
        while(l<=r){
            
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                return mid;
            }
            else if(nums[mid]>nums[mid+1] && nums[mid]<nums[mid-1]){
                mid = mid-1;
            }
            else if(nums[mid]<nums[mid+1] && nums[mid]>nums[mid-1]){
                mid = mid+1;
            }
            else{
                mid = mid+1;
            }
        } 

        return -1;   
    }
};

//Alter native Solution:
// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int n = nums.size();
//         int l = 1, r = n-2;
//         int max;
//         int mid;

//         //Edge cases:
//         if(n==1 || nums[0]>nums[1]){
//             return 0;
//         }
        
//         if(nums[n-1]>nums[n-2]){
//             return n-1;
//         }

//         //Actual
//         while(l<=r){
//             mid = (l+r)/2;
//             if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
//                 return mid;
//             }
//             else if(nums[mid]>nums[mid+1]){
//                 r = mid-1; //Peak element to the left
//             }
//             else {
//                 l = mid+1;
//             }
//         } 

//         return -1;   
//     }
// };