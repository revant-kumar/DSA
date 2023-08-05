//Leet-268-Missing Number

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // bool check[n+1];
        // memset(check,true,n+1);

        // int i;
        // for(i=0;i<n;i++){
        //     check[nums[i]] = false;
        // }

        // for(i=0;i<n+1;i++){
        //     if(check[i]==true){
        //         return i;
        //     }
        // }
        // return -1;

        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<n;i++){
            if(i!=nums[i]){
                return i;
            }
        }

        // int x;//for xor of 1-n natural nos
        // int y;//for xor of given nums array
        // //if numbers repeat in x and y, they become 0 and the one non repeating is returned.
        // for(i=1;i<=n;i++){
        //     x^=i;
        // }

        // for(i=1;i<n;i++){
        //     y^=nums[i];
        // }
        // return x^y;
    }
};

int main(){
    vector<int> nums = {1,0,3};
    Solution s;
    cout<<s.missingNumber(nums);
}