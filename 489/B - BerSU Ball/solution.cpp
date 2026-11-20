#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> boys(n);
    for (int i = 0; i < n; i++)
    {
        cin >> boys[i];
    }
    int m;
    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; i++)
    {
        cin >> girls[i];
    }
 
    int count = 0;
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int i = 0;
    int j = 0;
    while (i < boys.size() && j < girls.size())
    {
        if (abs(boys[i] - girls[j]) <= 1)
        {
            count++;
            i++;
            j++;
        }
        else if (boys[i] < girls[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << count << endl;
}
 
int main()
{
    solve();
    return 0;
}