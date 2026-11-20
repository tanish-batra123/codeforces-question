#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    
    
    while(t--){
        vector<string>store;
         int remaining=1;
  
        int n,k;
        cin>>n>>k;
     for(int i=0;i<n;i++){
        string s;
        cin>>s;
        store.push_back(s);
    }
    string mystr=store[0];
   
    for(int i=1;i<n;i++){
       if(store[i]==mystr) remaining++;
    }
     cout<<remaining<<endl;
    }
   
   
    return 0;
 
}