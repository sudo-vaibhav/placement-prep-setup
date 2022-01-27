#include <iostream>
#include <cmath>
#define ll long long
int main()
{
    ll a, b, c;
    std::cin >> a >> b >> c;
    auto x = std::sqrt(a * b / c), y = std::sqrt(b * c / a), z = std::sqrt(c * a / b);
    std::cout << 4 * (x + y + z);
}