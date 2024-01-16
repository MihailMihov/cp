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

std::vector<std::pair<long long, long long>> jump(long long a, long long b, std::pair<long long, long long> p) {
    std::vector<std::pair<long long, long long>> r;
    for(int i = -1; i <= 1; i += 2) {
        for(int j = -1; j <= 1; j += 2) {
            r.emplace_back(p.first + i * a, p.second + j * b);
            if(a != b) r.emplace_back(p.first + i * b, p.second + j * a);
        }
    }
    return r;
}

void solve() {
    long long a, b;
    std::pair<long long, long long> k, q;
    std::cin >> a >> b >> k.first >> k.second >> q.first >> q.second;
    int r = 0;

    std::vector<std::pair<long long, long long>> jump1 = jump(a, b, k);

    for(auto p : jump1) {
        auto jump2 = jump(a, b, p);
        for (auto j2 : jump2) {
            if(j2.first == q.first && j2.second == q.second) ++r;
        }
    }

    std::cout << r << '\n';
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