#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maximum=INT_MIN;
    int minimum=INT_MAX;

    for(int i=0;i<n;i++){
        maximum=max(maximum,arr[i]);
        minimum=min(minimum,arr[i]);
    }

    cout<<maximum<<" "<<minimum<<endl;
}