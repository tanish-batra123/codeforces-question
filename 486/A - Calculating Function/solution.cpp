#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    int fn=0;
    cin>>n;
 
    // for(int i=1;i<=n-1;i++){
    // if(i%2!=0){
    //     fn=fn-i;
    // }else{
    //     fn=fn+i;
    // }
    // }
    // if(n%2==0){
    //     fn+=n;
    // }else fn=fn-n;
 
    // cout<<fn;
 
    if(n%2==0){
        cout<<n/2;
 
    }else{
        long long x=-(n+1)/2;
        cout<<x;
    }
    return 0;
}