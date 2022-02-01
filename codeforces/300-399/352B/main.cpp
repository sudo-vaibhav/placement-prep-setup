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

struct num
{
    ll idx;
    ll val;
    num(ll idx, ll val) : idx(idx), val(val)
    {
    }
};
struct comp
{
    bool operator()(num a, num b)
    {
        return (a.val * 100000 + a.idx) > (b.val * 100000 + b.idx);
    }
};
int main()
{
    fast_cin();
// can run multiple test cases in one shot while debugging locally, codeforces will still only run the code one time
#ifndef ONLINE_JUDGE
    for (auto __i = 0; __i < 1; __i++)
#endif
    {
        ll n;
        cin >> n;
        priority_queue<num, vector<num>, comp> q;
        ll temp;
        for (auto i = 0; i < n; i++)
        {
            cin >> temp;
            q.push(num(i, temp));
        }
        num *prev = nullptr;
        ll diff = LONG_LONG_MIN;
        vector<num> a;
        stringstream buf;
        while (!q.empty())
        {

            a.push_back(q.top());
            q.pop();
        }
        auto count = 0;
        for (auto i = 0; i < n; i++)
        {
            ll j;
            for (j = i + 1; j < n; j++)
            {
                if (a[j].val != a[i].val)
                {
                    break;
                }
            }
            if (j - i <= 2)
            {
                buf << a[i].val << " " << (a[j - 1].idx - a[i].idx) << endl;
                count++;
            }
            else
            {

                ll diff = a[i + 1].idx - a[i].idx;
                bool succ = true;
                for (auto x = i + 1; x < j; x++)
                {
                    if ((a[x].idx - a[x - 1].idx) != diff)
                    {
                        succ = false;
                        break;
                    }
                }
                if (succ)
                {
                    buf << a[i].val << " " << (a[i + 1].idx - a[i].idx) << endl;
                    count++;
                }
                else
                {
                    // cout << a[i].val<< ;
                }
            }

            // dbg(succ);
            // dbg(i);
            // dbg(j);
            // cout << endl;
            i = j - 1;
        }
        cout << count << endl
             << buf.str();
#ifndef ONLINE_JUDGE
        cout << endl;
#endif
    }
    return 0;
}