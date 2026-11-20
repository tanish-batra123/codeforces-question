#include <bits/stdc++.h>
using namespace std;
void solve(){
int n,k;
cin>>n>>k;
vector<int>arr(n);
 
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 
int sum=0;
int minidx=0;
 
for(int i=0;i<k;i++){
    sum+=arr[i];
}
int minsum=sum;
 
for(int i=k;i<n;i++){
  int left=arr[i-k];
  sum=sum-left+arr[i];
 if(sum <minsum){
    minsum=sum;
    minidx=i-k+1;
 }
}
cout<<minidx+1<<endl;
 
}
 
int main(){
    solve();
    return 0;
}