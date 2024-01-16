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

bool r(std::vector<std::pair<int, int>>& s, int c, int k) {
    int d = std::min(c)
}

void solve() {
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> s(n);
    for(auto& p : s)
        std::cin >> p.first >> p.second;

    int k = 6;
    if(r(s, s.back().first, k) || r(s, s.back().second, k)) {
        std::cout << k << '\n';
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