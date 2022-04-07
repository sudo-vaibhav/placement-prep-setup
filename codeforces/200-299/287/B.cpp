#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k;

    // = map(int, input().split())
    cin >> n >> k;
    n -= 1;

    k -= 1;
    ll ans = INT_MAX;
    if (n == 0)
        cout << (0);
    else
    {

        ll l = 1, r = k;

        while (l <= r)
        {
            ll m = l + (r - l) / 2;
            ll leave = k - m;
            if (-(leave * (leave + 1) / 2) + k * (k + 1) / 2 >= n)
            {
                ans = min(ans, m);
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        if (ans == INT_MAX)
            cout << (-1);
        else
            cout << (ans);
    }
}