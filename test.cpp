#include <bits/stdc++.h>
using namespace std;

int bs(vector<int>& arr, int l, int r, int x){
    int mid = (l+r)/2;
	if(l<=r){
		if(arr[mid]==x){
			return mid;
		}
		else if(x>arr[mid]){
			return bs(arr,mid+1,r,x);
		}
		else{
		    return bs(arr,l,mid-1,x);
		}
	}
	return -1;
}

int lowerBound(vector<int> arr, int n, int x) {
	int k = bs(arr,0,n-1,x);
	if(k==-1){
		return n;
	}
	else{
		return k;
	}
}


int main() {
    vector<int> nums = {3,6,11,12,19,20,67}; 
    int n = sizeof(nums)/sizeof(nums[0]);
    
    int x = 67;
    cout<<"Output: "<<lowerBound(nums,n,x);
}