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
        ll n, m, temp;
        cin >> n >> m;

        priority_queue<ll, vector<ll>, greater<ll>> minheap;
        priority_queue<ll, vector<ll>> maxheap;
        for (auto i = 0; i < m; i++)
        {
            cin >> temp;
            minheap.push(temp);
            maxheap.push(temp);
        }

        auto mincost = 0, maxcost = 0;
        while (n > 0)
        {
            auto maxtemp = maxheap.top();
            auto mintemp = minheap.top();
            maxheap.pop();
            minheap.pop();
            maxcost += maxtemp;
            mincost += mintemp;
            maxtemp--;
            mintemp--;
            if (maxtemp > 0)
            {
                maxheap.push(maxtemp);
            }
            if (mintemp > 0)
            {
                minheap.push(mintemp);
            }
            n--;
        }
        cout << maxcost << " " << mincost;
        cout << endl;
    }
    return 0;
}