//7- Union of two arrays 
#include<bits/stdc++.h>
using namespace std;

void findUnion(int *arr1, int *arr2, int n1, int n2){
    int i=0,j=0;
    vector<int> urr;
    while(i<n1 && j<n2){
        if(arr1[i]>arr2[j]){
            if(urr.size()!=0 && arr2[j]==urr.back()){
                j++;
                continue;
            }
            urr.push_back(arr2[j]);
            j++;
        }
        else{
            if(urr.size()!=0 && arr1[i]==urr.back()){
                i++;
                continue;
            }
            urr.push_back(arr1[i]);
            i++;
        }
    }
    
    while(i<n1){
        if (urr.back() != arr1[i])
            urr.push_back(arr1[i]);
        i++;
    }
    
    while(j<n2){
        if (urr.back() != arr2[j])
            urr.push_back(arr2[j]);
        j++;
    }
    
    for(auto i:urr){
        cout<<i<<" ";
    }
}

int main(){
    int arr1[] = {3,6,12,12,36,11,64,91};
    int arr2[] = {2,3,6,13,17,23,45};
    int n1 = 8, n2 = 7;
    findUnion(arr1, arr2, n1, n2);
}