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

struct team
{
    ll p;
    ll t;

public:
    team(ll p, ll t) : p(p), t(t) {}
    string toString()
    {
        return to_string(p) + " " + to_string(t);
    }
    team()
    {
    }
};

struct comp
{
    bool operator()(const team &t1, const team &t2)
    {
        if (t1.p < t2.p)
            return true;
        if (t2.p < t1.p)
            return false;
        return t1.t > t2.t;
    }
};
void solve()
{
    ll n, k;
    cin >> n >> k;
    unordered_map<string, ll> m;
    priority_queue<team, vector<team>, comp> q;
    for (auto i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        auto p = team(a, b);
        m[p.toString()]++;
        q.push(p);
    }

    team h;

    while (!q.empty())
    {
        auto temp = q.top();
        if (k > 0)
        {
            h = temp;
        }

        q.pop();
        k--;
    }
    cout << m[h.toString()];
}

int main()
{
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    // can run multiple test cases in one shot while debugging locally, codeforces will still only run the code one t
#ifndef ONLINE_JUDGE
    for (auto __i = 0; __i < 2; __i++)
#endif
    {
        solve();
        cout << endl;
    }
    return 0;
}