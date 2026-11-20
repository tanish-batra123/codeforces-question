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
 
    
    int turn = 1;
    int s = 0;
    int d = 0;
    int i = 0, j = n - 1;
 
    while (i <= j)
    {
        if (turn % 2 != 0)
        {
            if (arr[i] > arr[j])
            {
                s += arr[i];
                i++;
            }
            else
            {
                s += arr[j];
                j--;
            }
        }
        else
        {
            if (arr[i] > arr[j])
            {
                d += arr[i];
                i++;
            }
            else
            {
                d += arr[j];
                j--;
            }
        }
        turn++;
    }
    cout << s << " " << d << endl;
}
 
int main()
{
    solve();
 
    return 0;
}