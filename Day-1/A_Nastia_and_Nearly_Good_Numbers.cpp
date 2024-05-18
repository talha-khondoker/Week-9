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
        if(b==1)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        cout<<"YES"<<'\n'<<a<<" "<<(a*b)<<" "<<a*(b+1)<<'\n';
    }
    
    return 0;
}