#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int minOp=INT_MAX;
    int cnt=0;
 
    if(arr[0]==0&&arr[n-1]==0)return 0;
 
    if(arr[0]!=0&&arr[n-1]==0){
     for(int i=1;i<n;i++){
        if(arr[i]==0){
            swap(arr[0],arr[i]);
            cnt++;
            break;
 
        }
     }
    }
    else if(arr[0]==0&&arr[n-1]!=0){
       for(int i=n-2;i>=0;i--){
        if(arr[i]==0){
            swap(arr[n-1],arr[i]);
            cnt++;
            break;
 
        }
     }
    }
   else{
        int i = 1;
        int j = n-2;
 
        while(i <= j){
            if(arr[i] == 0){
                swap(arr[0], arr[i]);
                cnt++;
                break;
            }
            i++;
        }
 
        while(j >= i){
            if(arr[j] == 0){
                swap(arr[n-1], arr[j]);
                cnt++;
                break;
            }
            j--;
        }
    }
 
    if(arr[0] == 0 && arr[n-1] == 0)
        minOp = min(minOp, cnt);
 
    return minOp == INT_MAX ? -1 : minOp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       cout<<solve()<<endl;;
      
    }
    return 0;
}