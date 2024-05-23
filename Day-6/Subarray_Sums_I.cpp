#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    ll i=0, j=-1; 
    ll cnt=0;
    while (j<n)
    {
        while (j < n && sum < x) 
        {
            j++;
            sum += a[j];
        }
        while (i <= j && sum > x) 
        {
            sum -= a[i];
            i++;
        }
        if(sum==x)
        {
            cnt++;
            sum-=a[i];
            i++;
        }
    }
    cout<<cnt<<'\n';
    
    return 0;
}