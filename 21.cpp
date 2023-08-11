//CN-Rotation

#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &nums){
    int n = nums.size();
    int l = 0, r = n-1;
    int mid;
    long long int min = 9999999999999;
    int minIDX ;

    while(l<=r){
        mid = (l+r)/2;
        if(nums[l]<=nums[mid] && nums[mid]<=nums[r]){
            if(nums[l] < min){
                minIDX = l;
                min = nums[l];
            }
            break;
        }

        if(nums[l]<=nums[mid] && nums[mid]>nums[r]){ //left side sorted
            l = mid+1;
        }
        else if(nums[l]>nums[mid] && nums[mid]<=nums[r]){ //Right side sorted
            r = mid-1;
        }

        if (nums[mid]<min){
            minIDX = mid;
            min = nums[mid];
        }
    } 
    
    return minIDX;  
}

int main() {
    vector<int> arr = {6,7,8,0,1,2,3};
    cout<<findKRotation(arr);
}