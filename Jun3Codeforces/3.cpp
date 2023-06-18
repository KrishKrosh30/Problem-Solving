#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0, k = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            ans.push_back(0);
        }
        else if (i > 0 && a[i - 1] == 0 && a[i] == 1)
        {
            cnt++;
            if (cnt >= k)
            {
                cout << "NO" << endl;
                return;
            }
            ans.push_back(cnt);
            cnt = 0;
        }
        else if (i > 0 && a[i] == 1)
        {
            cnt++;
            ans.push_back(0);
        }
        else
        {
            cnt++;
            if (cnt >= k)
            {
                cout << "NO" << endl;
                return;
            }
            ans.push_back(cnt);
        }
        k++;
    }
    cout << "YES" << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
