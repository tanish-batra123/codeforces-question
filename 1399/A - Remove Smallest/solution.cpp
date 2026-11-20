#include <bits/stdc++.h>
using namespace std;
string solve(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
     int diff=abs(arr[i]-arr[i+1]);
     if(diff>1){
     
      return "NO";
     }
    }
  return "YES";
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
 
}