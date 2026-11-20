#include <bits/stdc++.h>
using namespace std;
string solve(){
     int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
       sum+=ele;
    }
    
    if(sum%2==0)return "YES";
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
return 0;
}