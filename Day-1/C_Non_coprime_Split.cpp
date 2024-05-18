#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll check_prime(ll n)
{
    while (n % 2 == 0)
    {
        return 2;
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            return i;
            n = n/i;
        }
    }
    if (n > 2)
        return n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc ;
    cin >> tc;
    while (tc--)
    {
        ll l, r;
        cin >> l >> r;
        if(r<=3)
        {
            cout<<-1<<'\n';
        }
        else
        {
            if(l<r)
            {
                if(r%2!=0)
                {
                    r--;
                }
                cout<<2<<" "<<r-2<<endl;
            }
            else
            {
                ll prime=check_prime(l);
                if(prime==l)
                {
                    cout<<-1<<'\n';
                }
                else
                {
                    cout<<prime<<" "<<l-prime<<'\n';
                }
            }
        }
    }
    
    return 0;
}