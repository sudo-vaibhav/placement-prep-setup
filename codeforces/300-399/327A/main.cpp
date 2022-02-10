#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve()
{
    ll n, temp;
    cin >> n;
    ll *zcount = new ll[n + 1];
    zcount[0] = 0;

    ll _0 = 0;

    for (auto i = 1; i <= n; i++)
    {
        cin >> temp;
        // if (n == 1)
        // {
        //     if (temp == 0)
        //     {
        //         cout << 1;
        //     }
        //     else
        //     {
        //         cout << 0;
        //     }
        // return;
        // }
        if (temp == 0)
        {
            _0++;
        }
        zcount[i] = _0;
    }

    // for (auto i = 0; i <= n; i++)
    // {
    //     cout << zcount[i] << "\t";
    // }
    // cout << endl;

    ll ma = 0;
    // if (n == 1 && zcount[1] == 0)
    // {
    //     cout << 0;
    //     return;
    // }
    if (zcount[n] == n)
    {
        cout << n;
        return;
    }
    if (zcount[n] == 0)
    {
        cout << n - 1;
        return;
    }
    for (auto i = 1; i <= n; i++)
    {
        for (auto j = i + 1; j <= n; j++)
        {
            auto zir = zcount[j] - zcount[i - 1];
            auto oir = j - i + 1 - zir;
            auto eff = zir - oir;

            auto ob = 0;
            if (i > 0)
            {

                ob = i - 1 - zcount[i - 1];
            }

            ll za = (zcount[n] - zcount[j]);
            ll oa = n - j - za;
            ma = max(ma, zir + oa + ob);
            // cout << i << " " << j << endl;
            // dbg(ob);
            // dbg(zir);
            // dbg(oir);
            // dbg(za);
            // dbg(oa);
            // dbg(eff);
            // cout << endl;
        }
    }
    cout << ma;
}

int main()
{
    fast_cin();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    // can run multiple test cases in one shot while debugging locally, codeforces will still only run the code one time
#ifndef ONLINE_JUDGE
    for (auto __i = 0; __i < 1; __i++)
#endif
    {
        solve();
        cout << endl;
    }
    return 0;
}