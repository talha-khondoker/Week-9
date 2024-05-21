#include <bits/stdc++.h>
#define ll long long
using namespace std;
// go tmp for solution
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    vector<ll> price(n);
    vector<ll> consumer(n);
    map<ll, ll> consumer_hike;
    for (ll i = 0; i < n; i++)
    {
        cin >> price[i];
        consumer_hike[price[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> consumer[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     consumer_hike[price[i]] ++;
    // }
    for (ll i = 0; i < m; i++)
    {
        auto it = consumer_hike.lower_bound(consumer[i]);
        if (it->first == consumer[i])
        {
            cout << it->first << '\n';
            it->second -= 1;
            if (it->second == 0)
                consumer_hike.erase(it);
        }
        else
        {
            if (it == consumer_hike.begin())
            {
                cout << -1 << "\n";
            }
            else
            {
                it--;
                cout << it->first << "\n";
                it->second -= 1;
                if (it->second == 0)
                    consumer_hike.erase(it);
            }
        }
    }

    return 0;
}