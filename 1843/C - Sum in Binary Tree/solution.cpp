#include <bits/stdc++.h>
using namespace std;
 
long long solve(long long n){
    if(n ==0)return 0;
   
   return n+solve(n/2);
}
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}