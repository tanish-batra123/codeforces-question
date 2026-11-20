#include <bits/stdc++.h>
using namespace std;
string solve(){
    string s;
    cin>>s;
     int cnt=0;
   for(int i=0;i<s.size()-1;i++){
    if(s[i]==s[i+1]){
        cnt++;
         if(cnt>=6)return "YES";
    }
    else cnt=0;
   }
  
    return "NO";
}
int main(){
    cout<<solve()<<endl;
    return 0;
}