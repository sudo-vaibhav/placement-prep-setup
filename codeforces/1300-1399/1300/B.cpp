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

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int v[2 * n];
        for (ll i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
        }
        sort(v, v + 2 * n);
        // for (ll i = 0; i < 2 * n; ++i)
        // {
        //     cout << v[i] << "\t";
        // }
        // cout << nline;
        cout << (v[n] - v[n - 1]) << nline;
        // ll ans = LONG_LONG_MAX;
        // for (ll i = 0; i < n; i++)
        // {
        //     ll beforeMe = i;
        //     // 0 1 2 3 4 5 6
        //     ll secondHalfBeginIdx = 2 * beforeMe + 1, r = 2 * n - 1;
        //     dbg(secondHalfBeginIdx)
        //         ll m1 = v[i],
        //            m2 = v[secondHalfBeginIdx + (r - secondHalfBeginIdx) / 2];
        //     dbg("left part");
        //     for (ll j = 0; j <= 2 * i; j++)
        //     {
        //         cerr << v[j] << " ";
        //     }
        //     cerr << "\n";

        //     dbg("right part");
        //     for (ll j = 2 * i + 1; j < 2 * n; j++)
        //     {
        //         cerr << v[j] << " ";
        //     }
        //     cerr << ("\n");
        //     dbg(abs(m1 - m2));
        //     ans = min(ans, abs(m1 - m2));
        // }
        // cout << ans << nline;
    }
}
int main()
{
    fastio();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#ifndef ONLINE_JUDGE
    for (auto __i = 0; __i < 1; __i++)
#endif
    {
        solve();
        cout << endl;
    }
}
