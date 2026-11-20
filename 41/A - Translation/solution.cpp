#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    int n=s.size();
    
 
    for(int i=0;i<s.size()/2;i++){
        swap(s[i],s[n-i-1]);
    }
    if(s==t)cout<<"YES"<<endl;
    else cout<<"NO";
    return 0;
}