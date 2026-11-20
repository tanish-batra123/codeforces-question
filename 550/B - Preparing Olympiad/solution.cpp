#include <bits/stdc++.h>
using namespace std;
int solve(int i,vector<int>&arr,int l,int r,int x,int maxi,int mini,int sum,int cnt){
    if(i == arr.size()) {
    if(cnt >= 2 && sum >= l && sum <= r && maxi - mini >= x)
        return 1;
    return 0;
}
    
    
    int take=0;
    
     take=solve(i+1,arr,l,r,x,max(arr[i],maxi),min(arr[i],mini),sum+arr[i],cnt+1);
     
   
    int nontake=solve(i+1,arr,l,r,x,maxi,mini,sum,cnt);
    return take+nontake;
 
}
int main(){
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(0,arr,l,r,x,INT_MIN,INT_MAX,0,0);
    return 0;
}