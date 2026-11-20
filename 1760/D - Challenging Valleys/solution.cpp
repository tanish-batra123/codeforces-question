#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int left=0;
    while(left<n){
        int right=left;
 
        while(right+1<n && arr[left]==arr[right+1]){
          right++;
        }
         bool leftbada=left==0 ||arr[left-1] >arr[left];
         bool rightbada= right==n-1 || arr[right+1] > arr[right];
 
         if(leftbada && rightbada)count++;
         left=right+1;
    }
    if(count>1)cout<<"no"<<endl;
    else cout<<"yes"<<endl;
}
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}