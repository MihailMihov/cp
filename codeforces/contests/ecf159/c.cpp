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
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::unordered_set<int> s;

    int min = INT32_MAX;
    int max = INT32_MIN;
    for(int& i : a) {
        std::cin >> i;
        min = std::min(min, i);
        max = std::max(max, i);
    }

    if(n == 1) {
        std::cout << 1 << '\n';
        return;
    }

    for(int& i : a) {
        i -= min;
        s.insert(i);

    }
    max -= min;

    int gcd = -1;
    for(int i : a) {
        if(gcd == -1 && i != 0) gcd = i;
        if(i == 0) continue;
        gcd = std::gcd(gcd, i);
        if(gcd == 1) break;
    }

    long long result = 0;
    for(int i : a) {
        result += std::abs(max - i) / gcd;
    }

    int next = 0;
    while (next <= n) {
        next++;
        if(!s.count(max - next * gcd)) break;
    }

    std::cout << result + next << '\n';
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