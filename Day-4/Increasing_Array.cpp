#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    for(int i=0; i<n-1; i++)
    {
        ll tmp=0;
        ll cur=a[i];
        ll nxt=a[i+1];
        if(cur>nxt)
        {
            tmp=cur-nxt;
            a[i+1]=tmp+nxt;
            ans+=tmp;
            // cout<<tmp<<" ";
        }
    }
    // cout<<'\n';
    // for(int i=0; i<n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<'\n';
    cout<<ans<<'\n';
    return 0;
}