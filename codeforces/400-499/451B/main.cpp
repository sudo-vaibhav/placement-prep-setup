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
    ll *a = new ll[n];
    for (auto t = 0; t < n; t++)
    {
        cin >> temp;
        a[t] = temp;
    }

    ll i = 0;
    ll j = n - 1;
    for (; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            break;
        }
    }

    for (; j >= 1; j--)
    {
        if (a[j - 1] > a[j])
        {
            break;
        }
    }
    // dbg(i);
    // dbg(j);
    if (n == 1)
    {
        cout << "yes\n1 1";
        return;
    }
    // if (i == 0 && j == n - 1)
    // {

    //     cout << "yes\n1 " << n;
    //     return;
    // }
    if (j == 0 && i == n - 1)
    {
        cout << "yes\n1 1";
        return;
    }
    if (j < i)
    {
        cout << "BRUH";
        return;
    }
    else
    {
        reverse(a + i, a + j + 1);
        // for (auto h = 0; h < n; h++)
        // {
        //     cout << a[h] << "\t";
        // }
        // cout << endl;
        bool yes = true;
        for (auto h = 1; h <= n - 1; h++)
        {
            if (a[h] < a[h - 1])
            {
                yes = false;
                break;
            }
        }
        if (yes)
        {

            cout << "yes\n";
            cout << i + 1 << " " << j + 1;
        }
        else
            cout << "no";
    }
}

int main()
{
    fast_cin();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    // can run multiple test cases in one shot while debugging locally, codeforces will still only run the code one time
#ifndef ONLINE_JUDGE
    for (auto __i = 0; __i < 4; __i++)
#endif
    {
        solve();
        cout << endl;
        //  << endl;
    }
    return 0;
}