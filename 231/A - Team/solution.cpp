#include <bits/stdc++.h>
using namespace std;
 
 
 
 
int main(){
    int n;
 
    cin>>n;
    vector<vector<int>>arr;
 
  for(int i=0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    arr.push_back({a,b,c});
  }
 
  
  int ans=0;
 
  for(auto temp:arr){
    int cnt=0;
    for(int i=0;i<temp.size();i++){
        if(temp[i]==1)cnt++;
    }
    if(cnt>=2){
       ans++;
    }
  }
 
  cout<<ans;
 
   
}