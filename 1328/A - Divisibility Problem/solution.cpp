#include <bits/stdc++.h>
using namespace std;
 
int solve(){
    int a,b;
    cin>>a>>b;
    if(a%b==0)return 0;
    int rem=a%b;
    int move=0;
     move=b-rem;
    return move;
 
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
 
}