#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define dbg(x)         \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define dbg(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
vector<ll> a;
ll n;
map<pair<ll, ll>, bool> dp;
bool s(ll idx, ll val)
{
    if (dp.count({idx, val}))
        return dp[{idx, val}];
    auto cur = a[idx];
    if (idx == n - 1)
    {
        if (abs(val - cur) <= 1)
        {
            return dp[{idx, val}] = true;
        }
    }
    else
    {
        if (idx < n - 1)
        {

            return dp[{idx, val}] = (abs(cur - val) <= 1) && (s(idx + 1, val + 1));
        }
    }
    return dp[{idx, val}] = false;
}
void solve()
{
    dp = map<pair<ll, ll>, bool>();
    cin >> n;
    a = vector<ll>(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool t = s(0, a[0] - 1) || s(0, a[0]) || s(0, a[0] + 1);
    if (t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << "\n";
}
int main()
{
    fastio();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
