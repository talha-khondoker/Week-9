#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.length();
    string ans(n, ' ');
    int freq[26] = {};
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'A'] += 1;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            cnt += 1;
        }
    }
    if (cnt > 1)
        cout << "NO SOLUTION";
    else
    {
        int left = 0, right = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (freq[s[i] - 'A'] % 2 == 1)
            {
                ans[n / 2] = s[i];
                freq[s[i] - 'A'] -= 1;
            }
            while (freq[s[i] - 'A'] > 0)
            {
                ans[left++] = ans[right--] = s[i];
                freq[s[i] - 'A'] -= 2;
            }
        }
        cout << ans;
    }
    return 0;
}