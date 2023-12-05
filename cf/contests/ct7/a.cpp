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

    bool f = false;
    long first;
    std::cin >> first;
    if(first != 1) {
        f = true;
    }
    for(int i = 0; i < n - 1; ++i) {
        int a;
        std::cin >> a;
    }

    if(f) {
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