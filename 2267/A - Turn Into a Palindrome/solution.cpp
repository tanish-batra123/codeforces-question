#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    char ch;
    cin>> n>>ch;
    string ip="";
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        ip+=c;
    }
 
   
   int ans=0;
   int i=0,j=n-1;
   
 
   while(i<j){
   
     if(ip[i]==ip[j]){}
    else if( ip[i]==ch||ip[j]==ch) ans+=1;
    
    else{
      ans+=2;
    } 
    i++;
    j--;
 
   }
    
    cout<<ans<<endl;
 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}