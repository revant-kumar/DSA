//Leet-283
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {0,1,0,3,12};
    int i, n=nums.size(), counter=0;
    for(i=0;i<n;i++){
        if(nums[i]!=0){
            nums[counter] = nums[i];
            counter++;
        }
    }

    for(i=counter;i<n;i++){
        nums[i] = 0;
    
    }
    for(auto i:nums){
        cout<<i<<" ";
    }
}