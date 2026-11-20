#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n=5;
    int i1=0;
    int j1=0;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
 
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           if(arr[i][j]==1){
            i1=i;
            j1=j;
           }
        }
    }
 
    int ans=abs(2-i1) +abs(2-j1);
    cout<<ans<<endl;
}
 
 int main(){
    solve();
    return 0;
 }