#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &price, vector<int> &consumer, int N, int M) {

    map<int, int> price_hike;
    for (int i = 0; i < N; i++) {
        price_hike[price[i]] += 1;
    }

    for (int i = 0; i < M; i++) {
        auto it = price_hike.upper_bound(consumer[i]);
        if (it == price_hike.begin()) {
            cout << -1 << "\n";
        }
        else {
            it--;
            cout << it->first << "\n";
            it->second -= 1;
            if (it->second == 0)
                price_hike.erase(it);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> price(n);
    vector<int> consumer(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> consumer[i];
    }
    solve(price, consumer, n, m);
}