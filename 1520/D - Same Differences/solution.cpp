#include <bits/stdc++.h>
using namespace std;
 void solve(){
   long long n;
   cin>>n;
   vector<long long>arr(n);
   for(long long i=0;i<n;i++){
    cin>>arr[i];
   }
   unordered_map<long long,long long>mpp;
   long long cnt=0;
 
   for(long long i=0;i<n;i++){
    if(mpp.find(arr[i]-i)!=mpp.end()){
        cnt+=mpp[arr[i]-i];
 
    }
     mpp[arr[i]-i]++;
   }
   cout<<cnt<<endl;
 }
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   long long t;
   cin>>t;
   while(t--){
       solve();
 
   }
    return 0;
}