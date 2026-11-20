#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(arr[i],2*arr[j])>1 || __gcd(2*arr[i],arr[j])>1){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
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