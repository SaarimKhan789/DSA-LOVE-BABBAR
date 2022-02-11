#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    sort(arr.begin(),arr.end(),greater<int>());
    cout<<arr[k]<<endl;
    sort(arr.begin(),arr.end(),greater<int>());

   

}