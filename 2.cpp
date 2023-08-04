#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {78,14,2,16,89};
    int n = 5;
    
    int lar = arr[0];
    int seclar = arr[0];
    
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>lar){
            lar = arr[i];
        }
        if(arr[i]<lar && arr[i]>seclar){
            seclar = arr[i];
        }
    }
    
    cout<<seclar;
}