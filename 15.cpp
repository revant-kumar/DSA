//CN: Ceil the Floor
#include<bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	sort(arr,arr+n);
	int l = 0, r = n-1;
	int CEIL = n;
	int FLOOR = -1;

	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]==x){
			return {arr[mid],arr[mid]};
		}
		else if(arr[mid]>x){
			r = mid-1;
			CEIL = mid;
		}
		else{
			l = mid+1;
			FLOOR = mid;
		}
	}

	if(CEIL==n){
		return {arr[FLOOR], -1};	
	}
	else if(FLOOR==-1){
		return {-1, arr[CEIL]};
	}
    return {arr[FLOOR], arr[CEIL]};
}

int main(){
    int arr[] = {4, 3, 8, 4, 7, 10};
    int n = 6;
    int x = 5;
    pair<int,int> p = getFloorAndCeil(arr,n,x);
    cout<<p.first<<" "<<p.second;
}
