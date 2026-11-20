#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
   
    int ans=INT_MAX;
 
    if(n%1==0){
        
        ans=min(ans,n/1);
    }
    if(n%2==0){
        
        ans=min(ans,n/2);
    }
 
    if(n%3==0){
        
        ans=min(ans,n/3);
    }
 
    if(n%4==0){
        
        ans=min(ans,n/4);
    }
    if(n%5==0){
        
        ans=min(ans,n/5);
    }
   if(n%5!=0){
        ans=min(ans,n/5 + 1);
    }
 
    cout<<ans<<endl;
 
 
 
    return 0;
}
// 1 2 3 4 5
// 