#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<ll, ll> save;
    save[0] += 1;
    ll rm = 0;
    ll cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        rm = ((rm + a[i]) % n + n) % n;
        cnt += save[rm];
        save[rm] += 1;
    }
    cout << cnt << '\n';
    return 0;
}