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

void func(ll i, vector<vector<ll>> &adj, deque<ll> &path)
{
    dbg(i);
    dbg(adj[i - 1]);

    if (adj[i - 1].size() == 0)
    {

        path.push_back(i);
        cout
            << path.size() << nline;
        for (auto &elem : path)
        {
            cout << elem << " ";
        }
        cout << nline;
        path.pop_back();
    }
    else
    {
        auto used = false;

        for (auto child : adj[i - 1])
        {
            if (!used)
            {
                path.push_back(i);

                func(child, adj, path);
                // visited.insert(i);
                path.pop_back();
            }
            else
            {
                deque<ll> nothing;
                func(child, adj, nothing);
            }
            used = true;
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    dbg(n);
    ll parent;
    unordered_set<ll> vis;
    vector<vector<ll>> adj(n);
    for (ll i = 1; i <= n; i++)
    {
        ll temp;
        cin >> temp;
        if (temp == i)
        {
            parent = temp;
        }
        else
        {
            adj[temp - 1].push_back(i);
        }
    }
    // dbg(adj)
    //     dbg(parent)
    deque<ll>
        path;
    ll res = 0;
    for (auto &yut : adj)
    {
        if (yut.size() == 0)
        {
            res++;
        }
    }
    cout << res << nline;
    func(parent, adj, path);
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
        cout << nline;
    }
}
