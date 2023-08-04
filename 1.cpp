	//Finding largest and smallest number in an array
	#include<iostream>
	using namespace std;

	struct MaxMin{
		int min;
		int max;	
	};

	struct MaxMin findMaxMin(int n, int *arr){
		struct MaxMin mm;
		
		int i;
		if(n==1){
			mm.max = arr[0];
			mm.min = arr[0];
		}
		
		if(n%2==0){
			if(arr[0]>arr[1]){
				mm.max = arr[0];
				mm.max = arr[1];
			}
			else{
				mm.max = arr[1];
				mm.max = arr[0];
			}
			
			i = 2;
		}
		else{
			mm.max = arr[0];
			mm.max = arr[0];
			i = 1;
		}
		
		while(i<n-1){
			if(arr[i]>arr[i+1]){
				if(arr[i]>mm.max){
					mm.max = arr[i];
				}
				
				if(arr[i+1]<mm.min){
					mm.min = arr[i+1];
				}
				
			}
			else{
				if(arr[i+1]>mm.max){
					mm.max = arr[i+1];
				}
				
				if(arr[i]<mm.min){
					mm.min = arr[i];
				}
					
			}
			
			i+=2;
		}
		
		return mm;
	}

	int main(){
		int n;
		cin>>n;
		
		int arr[n];
		
		int i;
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		
		struct MaxMin mm = findMaxMin(n,arr);
		
		cout<<mm.min<<" "<<mm.max;
	}