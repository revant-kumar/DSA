//CN-Upper Bound using Binary Search
int upperBound(vector<int> arr, int x, int n) {
	int ans = n;
	int l = 0, r = n-1;
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]>x){
			ans = mid;
			r = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	return ans;
}