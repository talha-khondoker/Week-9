#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> f(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            f[x]++;
        }
        ll z = 0;
        for (int i = 0; i <= n; i++)
        {
            z += (f[i] == 1);
            if ((z == 2) || (f[i] == 0))
            {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}