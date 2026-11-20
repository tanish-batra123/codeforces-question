#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
           if(arr[i]>=arr[k-1])cnt++;
        }
       
    }
    cout<<cnt<<endl;
}
int main(){
    solve();
    return 0;
}