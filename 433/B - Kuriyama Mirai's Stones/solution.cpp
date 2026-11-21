#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<long long> temp(n);
    vector<long long> temp1(n);
    temp[0] = arr[0];
 
    for (int i = 1; i < n; i++)
    {
        temp[i] = temp[i - 1] + arr[i];
    }
    sort(arr.begin(), arr.end());
    temp1[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        temp1[i] = temp1[i - 1] + arr[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
       
 
        if (type == 1)
        {
            if(l==1){
                cout<<temp[r-1]<<endl;
                continue;
            }
            cout<<(abs(temp[l-2]-temp[r-1]))<<endl;
        }
        else
        {
            if(l==1){
                cout<<temp1[r-1]<<endl;
                continue;
            }
            cout<<(abs(temp1[l-2]-temp1[r-1]))<<endl;
        }
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
}