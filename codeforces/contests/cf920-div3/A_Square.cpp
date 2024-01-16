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
    std::vector<std::pair<int, int>> c(4);
    for(auto& i : c) {
        std::cin >> i.first >> i.second;
    }
    for(int i = 1; i < 4; ++i) {
        if (c[i].first == c[0].first) {
            long long d = c[i].second - c[0].second;
            std::cout << d * d << '\n';
        }
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