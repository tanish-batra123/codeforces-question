#include <bits/stdc++.h>
using namespace std;
int solve(){
      int n;
    cin>>n;
    unordered_map<int,int>mpp;
    vector<int>arr;
    int target=0;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
       mpp[ele]++;
    }
    for(auto it:mpp){
        if(it.second==1){
         target=it.first;
        }
    }
 
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i+1;
        }
    }
    return -1;
 
}
int main(){
    int t;
    cin>>t;
    while(t--){
   
        cout<<solve()<<endl;
 
    }
    return 0;
}