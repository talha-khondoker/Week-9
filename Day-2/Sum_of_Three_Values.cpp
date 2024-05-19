#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x;
    cin>>n>>x;
    vector<vector<ll>> a(n, vector<ll>(2));
    for(int i=0; i<n; i++)
    {
        ll z;
        cin>>z;
        a[i][0]=z;
        a[i][1]=i+1;
    }
    sort(a.begin(), a.end());
    for(ll i=0; i<n-2; i++)
    {
        ll j=i+1;
        ll k=n-1;
        while (j < k) 
        {
            ll crsum = a[i][0] + a[j][0]+ a[k][0];
            if (crsum == x) 
            {
                cout << a[i][1] << " " << a[j][1]<< " " << a[k][1] << "\n";
                return 0;
            }
            else if (crsum > x) 
            {
                k--;
            }
            else if (crsum < x) 
            {
                j++;
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}