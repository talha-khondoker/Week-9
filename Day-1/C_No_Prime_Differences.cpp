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
        ll n,m;
        cin>>n>>m;
        ll a[n+1][m+1];
        ll val=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                a[i][j]=val;
                val++;
            }
        }
        for(int i=2; i<=n; i+=2)
        {
            for(int j=1; j<=m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<'\n';
        }
        for(int i=1; i<=n; i+=2)
        {
            for(int j=1; j<=m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<'\n';
        }
    }
    
    return 0;
}