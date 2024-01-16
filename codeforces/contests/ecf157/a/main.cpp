#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <map>
#include <set>
#include <numeric>

void solve() {
    int x, y, k;
    std::cin >> x >> y >> k;

    if(y < x) {
        std::cout << x << '\n';
    } else if(y - x <= k) {
        std::cout << y << '\n';
    } else {
        int chest = x + k;
        std::cout << chest + (y - chest) * 2 << '\n';
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