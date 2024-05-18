#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> prime[1001];
void praim_check()
{
    for(int i = 1; i <= 1000; ++i) 
    {
        for(int j = 1; j <= 1000; ++j) 
        {
            if(__gcd(i, j) == 1) 
            {
                prime[i].push_back(j);
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    praim_check();
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll n;
        cin>>n;
        vector<ll> idx[10001];
        for(int i = 1; i <= n; ++i) 
        {
            int x; 
            cin >> x;
            idx[x].push_back(i);
        }
        ll ans = -1;
        for(int i = 1; i <= 1000; ++i) 
        {
            for(int j: prime[i]) 
            {
                if(!idx[i].empty() && !idx[j].empty()) 
                {
                    ans = max(ans, idx[i].back() + idx[j].back());
                }
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}