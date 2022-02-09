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
    ll n;
    char c;
    cin >> n;
    stringstream s1, s2;
    for (auto i = 0; i < n; i++)
    {
        cin >> c;
        s1 << c;
    }
    for (auto i = 0; i < n; i++)
    {
        cin >> c;
        s2 << c;
    }

    auto S1 = s1.str(), S2 = s2.str();
    sort(S1.begin(), S1.end());
    sort(S2.begin(), S2.end());
    // dbg(S1);
    // dbg(S2);

    set<ll> a;
    for (auto i = 0; i < n; i++)
    {

        a.insert(S1[i] - S2[i]);
    }

    auto mi = *a.begin();
    auto ma = *a.rbegin();

    if (mi == 0 || ma == 0)
    {
        cout << "NO";
    }
    else
    {
        if (mi * ma < 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
}

int main()
{
    fast_cin();
// can run multiple test cases in one shot while debugging locally, codeforces will still only run the code one time
#ifndef ONLINE_JUDGE
    for (auto __i = 0; __i < 3; __i++)
#endif
    {
        solve();
        cout << endl;
    }
    return 0;
}