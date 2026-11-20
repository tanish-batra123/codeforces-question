#include <bits/stdc++.h>
using namespace std;
int solve(){
     int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int cnt=0;
    int ans=INT_MIN;
 
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt++;
            ans=max(cnt,ans);
        }
        else cnt=0;
    }
    return ans==INT_MIN?0:ans;
 
 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}