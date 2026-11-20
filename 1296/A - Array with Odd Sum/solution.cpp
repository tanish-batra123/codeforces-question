#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int o=0;
    int e=0;
    int sum=0;
    for(int ele:arr){
        if(ele%2==0)e++;
        else{
            o++;
            sum+=ele;
        };
    }
    if(o==e){
        cout<<"YES"<<endl;
        return;
    };
    if(e==0){
        if(sum%2!=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return ;
    }
    if(o==0){
        cout<<"NO"<<endl;
        return;
    }
    if(o>e){
        cout<<"YES"<<endl;
        return;
    }
    if(e>o){
        if(e!=1){
            cout<<"YES"<<endl;
            return;
        }else cout<<"NO"<<endl; return;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
 
    return 0;
}