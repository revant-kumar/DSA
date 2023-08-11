//CN: Number of Occurrences
#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& nums, int l, int r, int x){
    while(l<=r){
        int mid = (l+r)/2;
        if(nums[mid]>=x){
            r = mid-1; 
        }
        else{
            l = mid+1;
        }
    }
    return l;
}

int count(vector<int>& arr, int n, int x) {
	int a = lowerBound(arr,0,n-1,x);
	int b = lowerBound(arr,0,n-1,x+1)-1;

	if(a < arr.size() && arr[a] == x){
		return {b-a+1};
	}
	return 0;

}

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int x = 8;
    cout<<count(nums,nums.size(),x);

}