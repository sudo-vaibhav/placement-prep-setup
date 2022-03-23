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
    while (t-- > 0)
    {
        ll n;
        cin >> n;
        ll temp;
        unordered_map<ll, ll> m;
        ll sum = 0;
        ll odd_c = 0;
        n -= 2;
        cin >> temp;
        for (ll i = 0; i < n; i++)
        {
            cin >> temp;
            m[temp]++;
            sum += temp;
            if (temp % 2 == 1)
            {
                odd_c++;
            }
        }
        cin >> temp;
        if (n == 1 && odd_c == 1)
        {
            cout << -1 << nline;
            // return;
        }
        else if (odd_c == n && m.count(1) && m[1] == odd_c)
        {
            cout << -1 << nline;
            // return;
        }
        else
        {
            ll ans = 0;
            for (auto i : m)
            {
                ans += i.second * (ll)ceil((double)i.first / 2.0);
            }
            cout << ans << nline;
        }
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