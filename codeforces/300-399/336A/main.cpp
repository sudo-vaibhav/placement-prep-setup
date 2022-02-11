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

ll get_x(ll y, ll slope, ll yInter)
{
    dbg(y);
    dbg(slope);
    dbg(yInter);
    return (y - yInter) / slope;
}
ll get_y(ll x, ll slope, ll yInter)
{
    return slope * x + yInter;
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    auto slope = ((double)a / (double)b > 0.0) ? -1 : 1;
    // dbg(slope);
    auto temp = abs(a) + abs(b);
    auto yInter = b > 0 ? temp : -temp;

    auto v = get_x(0, slope, yInter);
    pair<ll, ll> p1 = {v, 0};
    // cout << "0 " << v << " ";
    v = get_y(0, slope, yInter);
    pair<ll, ll> p2 = {0, v};

    cout << (p1.first < p2.first ? (to_string(p1.first) + " " + to_string(p1.second) + " " + to_string(p2.first) + " " + to_string(p2.second))
                                 : (
                                       to_string(p2.first) + " " + to_string(p2.second) + " " + to_string(p1.first) + " " + to_string(p1.second)));
}
int main()
{
    fastio();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#ifndef ONLINE_JUDGE
    for (auto __i = 0; __i < 2; __i++)
#endif
    {
        solve();
        cout << endl;
    }
}
