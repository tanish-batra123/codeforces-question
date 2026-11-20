#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr;
 
    for (int i = 1; i <= n; i++) {
        arr.push_back(pow(2, i));
    }
 
    int first = arr[n - 1];
    arr[n - 1] = -1;
 
    for (int i = 0; i < n / 2 - 1; i++) {
        first += arr[i];
        arr[i] = -1;
    }
 
    int second = 0;
 
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1) {
            second += arr[i];
        }
    }
 
    cout << first - second << endl;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}