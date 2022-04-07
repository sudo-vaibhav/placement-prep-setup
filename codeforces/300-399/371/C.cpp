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
bool canMake(ll c, ll nb, ll ns, ll nc, ll pb, ll ps, ll pc, ll bc, ll sc, ll cc, ll R)
{
    ll rb = bc * c, rs = sc * c, rc = cc * c;
    ll requiredMoney = max((ll)0, (rb - nb) * pb) + max((ll)0, (rs - ns) * ps) + max((ll)0, (rc - nc) * pc);
    // dbg(c);
    // dbg(rb);
    dbg(requiredMoney);
    return requiredMoney <= R;
}
void solve()
{
    string s;
    cin >> s;
    ll nb, ns, nc, pb, ps, pc;
    ll R;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> R;
    ll l = 0;
    ll r = LONG_LONG_MAX / 10000;
    ll ans = INT_MIN;
    ll bc = 0, sc = 0, cc = 0;
    for (auto i : s)
    {
        switch (i)
        {
        case 'B':
            bc++;
            break;
        case 'S':
            sc++;
            break;
        case 'C':
            cc++;
            break;
        }
    }
    // dbg(bc);
    // dbg(sc);
    // dbg(cc);
    while (l <= r)
    {
        ll m = l + (r - l) / 2;
        if (canMake(m, nb, ns, nc, pb, ps, pc, bc, sc, cc, R))
        {
            ans = max(ans, m);
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    cout << ans;
}
int main()
{
    fastio();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    ll t = 1;
    while (t--)
    {
        solve();
    }
}
