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

void solve() {
    long long n, f, a, b;
    std::cin >> n >> f >> a >> b;

    std::vector<long long> m(n);
    for(auto& i : m) std::cin >> i;

    long long c = 0;
    for(auto i : m) {
        f -= std::min((i - c) * a, b);
        c = i;
    }

    if(f <= 0) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
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