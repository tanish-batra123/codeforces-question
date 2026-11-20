#include <bits/stdc++.h>
using namespace std;
long long solve(){
    long long x,y,k;
    cin>>x>>y>>k;
    long long cnt=0;
    long long  d = y - x;
    while(k>0&&x<=d){
        long long himselfComp=d%x;
        long long others=y/x;
        cnt+=himselfComp;
        x=x+1;
        y=y+1;
        k--;
    }
    cnt+=k*d;
    return cnt;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}