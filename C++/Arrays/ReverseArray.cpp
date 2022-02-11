#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr,int n){

    int lo=0;
    int hi=n-1;

    while(lo<=hi){
        swap(arr[lo],arr[hi]);
        lo++;
        hi--;
    }
}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n,0);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);

    for(int val:arr){
        cout<<val<<" ";
    }
}