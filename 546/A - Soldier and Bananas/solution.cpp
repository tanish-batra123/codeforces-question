#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int cost=k*((w*(w+1))/2);
    int ans=cost-n;
    if(ans<0)cout<<0<<endl;
    else cout<<ans<<endl;
    return 0;
 
}