//CN: Lower Bound using Binary Search
#include <bits/stdc++.h>
using namespace std;

int bs(vector<int>& arr, int l, int r, int x){
    int mid = (l+r)/2;
	if(l<=r){
		if(x<=arr[mid]){
			return bs(arr,l,mid-1,x);
		}
		else{
		    return bs(arr,mid+1,r,x);
		}
	}
	return l;
}

int lowerBound(vector<int> arr, int n, int x) {
	int k = bs(arr,0,n-1,x);
	return k;
}

int main(){
    vector<int> nums = {3,6,11,12,19,20,67}; 
    int n = nums.size();
    
    int x = 18;
    cout<<"Output: "<<lowerBound(nums,n,x);
}
