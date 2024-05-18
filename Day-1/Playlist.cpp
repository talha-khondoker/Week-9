#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    map<ll, ll> mp;
    ll ans=0, cnt=0;
    for(int i=0; i<n; i++)
    {
        if(mp.find(a[i])== mp.end()) // not found
        {
            mp.insert({a[i], i});
        }
        else // if found
        {
            if(mp[a[i]]>=cnt)
            {
                cnt=mp[a[i]]+1;
            }
                mp[a[i]]=i;
        }
            ans=max(ans, i-cnt+1);
    }
    cout<<ans<<'\n';
    return 0;
}