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
        ll a, b;
        cin>>a>>b;
        ll y=(2*a-b)/3;
        ll x=(a-2*y);
        if((2 * a - b) % 3 || (2 * a - b) < 0 || (2 * b - a) % 3 || (2 * b - a) < 0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
        cout<<'\n';
    }
    
    return 0;
}