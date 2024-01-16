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
    int n, m;
    std::cin >> n >> m;

    std::deque<long long> a(n);
    std::deque<long long> b(m);
    for(auto& i : a) std::cin >> i;
    for(auto& i : b) std::cin >> i;

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    long long d = 0;
    for(int i = 0; i < n; ++i) {
        long long d1 = std::abs(a.front() - b.back());
        long long d2 = std::abs(a.back() - b.front());
        if(d1 >= d2) {
            a.pop_front();
            b.pop_back();
        } else {
            a.pop_back();
            b.pop_front();
        }
        d += std::max(d1, d2);
    }

    std::cout << d << '\n';
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