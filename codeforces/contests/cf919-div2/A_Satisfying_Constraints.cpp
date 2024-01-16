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

const long long U = 10e9;

void solve() {
    long long n;
    std::cin >> n;

    long long l = 0;
    long long u = U;
    std::vector<int> A(100);

    for(int i = 0; i < n; ++i) {
        int a;
        long long x;
        std::cin >> a >> x;

        if(a == 1) {
            l = std::max(l, x);
        } else if(a == 2) {
            u = std::min(u, x);
        } else {
            A.push_back(x);
        }
    }

    long long c = 0;
    for(int i : A) {
        if(i >= l && i <= u) c++;
    }
    std::cout << std::max(u - l + 1 - c, 0ll) << '\n';
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