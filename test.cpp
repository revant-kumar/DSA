// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int binarySearch(int *arr, int l, int r, int x){
//     int mid = (l+r)/2;
    
//     if(l<=r){
//         if(arr[mid]==x){
//             return mid;
//         }
//         else if(x>arr[mid]){
//             binarySearch(arr,mid+1,r,x);
//         }
//         else{
//             binarySearch(arr,l,mid-1,x);
//         }
//     }

//     return -1;
    
// }

// int main() {
//     int arr[] = {3,6,11,12,17,20,67}; 
//     int n = sizeof(arr)/sizeof(arr[0]);
    
//     int x = 455;
    
//     cout<<"Output: "<<binarySearch(arr,0,n-1,x);
// }


// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bs(vector<int>& nums, int l, int r, int x){
        int mid = (l+r)/2;
        if(l<=r){
            if(nums[mid]==x){
                return mid;
            }
            else if(x>nums[mid]){
                return bs(nums,mid+1,r,x);
            }
            else{
                return bs(nums,l,mid-1,x);
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int k = bs(nums,0,n,target);
        return k;
    }
};

int main() {
    vector<int> nums = {3,6,11,12,17,20,67}; 
    int n = sizeof(nums)/sizeof(nums[0]);
    
    int x = 67;
    Solution s;
    cout<<"Output: "<<s.search(nums,x);
}