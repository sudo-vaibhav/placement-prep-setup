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

int main()
{
    fast_cin();
// can run multiple test cases in one shot while debugging locally, codeforces will still only run the code one time
#ifndef ONLINE_JUDGE
    for (auto __i = 0; __i < 2; __i++)
#endif
    {
        ll t, hc, dc, hm, dm, k, w, a;
        cin >> t;
        while (t-- > 0)
        {
            cin >> hc >> dc;
            cin >> hm >> dm;
            cin >> k >> w >> a;

            bool success = false;
            for (auto shield_exp = 0; shield_exp <= k; shield_exp++)
            {
                auto dam_exp = k - shield_exp;
                auto c_dam = dc + dam_exp * w;
                auto c_h = hc + shield_exp * a;

                auto c_die_turns = ceil((double)c_h / (double)dm);
                auto m_die_turns = ceil((double)hm / (double)c_dam);
                if (c_die_turns >= m_die_turns)
                {
                    success = true;
                    break;
                }
            }
            if (success)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
            cout << endl;
        }
        //  cout<<endl;
    }
    return 0;
}