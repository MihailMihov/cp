#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <map>
#include <set>
#include <numeric>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a (2 * n);
    for(int& i : a) {
        std::cin >> i;
    }

    std::sort(a.begin(), a.end());

    std::vector<std::pair<int, int>> p(n);
    for(int i = 0; i < n; ++i) {
        p[i] = {a[i], a[n + i]};
    }

    int distance = 0;
    for (int i = 0; i < n - 1; ++i) {
        distance += std::abs(p[i].first - p[i + 1].first) + std::abs(p[i].second - p[i + 1].second);
    }

    std::cout << distance << '\n';
    for(auto i : p) {
        std::cout << i.first << ' ' << i.second << '\n';
    }
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