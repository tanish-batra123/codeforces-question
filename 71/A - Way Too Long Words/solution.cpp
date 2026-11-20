#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<string>store;
 
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        store.push_back(s);
    }
    
 
    for(int i=0;i<n;i++){
       string s=store[i];
       string newstr="";
       if(s.size()>10){
        char firstchar=s[0];
        char lastchar=s[s.size()-1];
        int number=s.size()-2;
        newstr+=firstchar+to_string(number)+lastchar;
        store[i]=newstr;
       }
    }
 
    for(int i=0;i<n;i++){
        cout<<store[i]<<endl;
    }
}