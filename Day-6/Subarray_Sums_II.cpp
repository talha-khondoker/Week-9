#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<ll, ll> pre;
    pre[0] = 1;
    ll pref = 0;
    ll cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        pref += a[i];
        cnt += (pre[pref - x]);
        pre[pref] += 1;
    }
    cout << cnt << '\n';

    return 0;
}