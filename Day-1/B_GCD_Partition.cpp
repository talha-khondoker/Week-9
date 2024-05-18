#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        // vector<ll> pref(n);
        // pref[0]=a[0];
        // for(int i=1; i<n; i++)
        // {
        //     pref[i]=pref[i-1]+a[i];
        // }
        // for(auto x:pref)
        // {
        //     cout<<x<<" ";
        // }
        ll ans=1, cur=0;
        for(int i=0; i<n-1; i++)
        {
            cur+=a[i], sum-=a[i];
            ans=max(ans, __gcd(cur, sum));
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}