#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <cmath>

void solve() {
    long long P;
    int n, l, t;
    std::cin >> n >> P >> l >> t;

    int days = 0;
    long long maxP = n * l + std::ceil(n / 7) * t;

    while (maxP > P && days < n - std::ceil(n / 7)) {
        maxP -= l;
        days++;
    }

    std::cout << n - days + 1 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}