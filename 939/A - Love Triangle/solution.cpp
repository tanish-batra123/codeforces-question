#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int>arr(n+1);
    for(int i=1;i<=n;i++){
       cin>>arr[i];
    }
   
    for(int i=1;i<=n;i++){
        int a=arr[i];
        int b=arr[a];
        if(arr[b]==i){
            cout<<"YES"<<endl;
            return 0;
        }
    }
   cout<<"NO"<<endl;
    return 0;
}