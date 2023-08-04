//Leet-189: Rotate Array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int i, n=nums.size();
        // for(i=0;i<k;i++){
        //     int temp = nums[n-1];
        //     nums.pop_back();
        //     nums.insert(nums.begin(),temp);
        // }

        // for(auto i:nums){
        //     cout<<i<<" ";
        // }
        int n = nums.size();
        vector<int> numcopy = nums;
        for(int i=0;i<n;i++) 
            nums[(i+k)%n]=numcopy[i];
        
    }
};