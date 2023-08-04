//Leet-26: Remove Duplicates from Sorted Array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> M;
        int i, k=0, n=nums.size();
        for(i=0;i<n;i++){
            if(M.find(nums[i])==M.end()){
                M.insert(make_pair(nums[i],1));
                nums.push_back(nums[i]);
                k++;
            }
        }

        vector<int>::iterator it1;
        it1 = nums.begin();

        nums.erase(it1, it1+n);

        return k;
        
    }
};