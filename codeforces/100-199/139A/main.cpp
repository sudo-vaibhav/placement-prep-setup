#include <iostream>
#include <chrono>
#include <vector>
#define ll long long int
using namespace std;
int main()
{
    auto beg = chrono::high_resolution_clock::now();

    ll n;
    cin >> n;
    vector<ll> days;

    auto end = chrono::high_resolution_clock::now();
    ll temp;
    for (auto i = 0; i < 7; i++)
    {
        cin >> temp;
        days.push_back(temp);
    }

    auto ans = -1;
    auto i = 0;
    while (n > 0)
    {
        n -= days[i];
        ans = i;
        // cout << ans << endl;
        i = (i + 1) % 7;
    }

    cout << ans + 1;
    auto dur = chrono::duration_cast<chrono::microseconds>(end - beg);
    // cout << endl
    //      << dur.count() << " milliseconds";

    return 0;
}