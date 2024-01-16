#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <map>
#include <set>
#include <numeric>

long ab(std::vector<int>& a, std::vector<int>& b) {
    long result = 0;
    for(int i = 0; i < a.size(); ++i) {
        result += std::abs(a[i] - b[i]);
    }
    return result;
}

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n), b(n);

    for(int& i : a) {
        std::cin >> i;
    }
    for(int& i : b) {
        std::cin >> i;
    }

    int b0 = ab(a, b);

    std::cout << b0 << '\n';
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