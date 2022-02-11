#include<bits/stdc++.h>
#define MAX_SIZE 500
using namespace std;


int multiply(int x,vector<int> &res,int size){

    int carry=0;

    for(int i=0;i<size;i++){
        
        int product=res[i]*x+carry;

        res[i]=product%10;
        carry=product/10;
    }

    while(carry!=0){
        res[size]=carry%10;
        carry/=10;
        size++;
    }

    return size;



}
void findfact(int n){

    vector<int> res(MAX_SIZE,0);
    res[0]=1;
    int size=1;

    for(int i=2;i<=n;i++){
        size=multiply(i,res,size);
    }


    for(int i=size-1;i>=0;i--){
        cout<<res[i];
    }

    cout<<endl;





}
int main(){

    int n;
    cin>>n;

    findfact(n);


}