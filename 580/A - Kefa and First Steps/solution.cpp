#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    int count=1;
    int maxCount=1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>=arr[i-1]){
            count++;
            maxCount=max(maxCount,count);
        }else count=1;
    }
 
    cout<<maxCount<<endl;
}
 
int main(){
    solve();
    return 0;
}