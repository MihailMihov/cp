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

    std::string s, f;
    std::cin >> s >> f;

    int r = 0;
    int c = 0;
    for(int i = 0; i < n; ++i) {
        if(f[i] == '1') {
            if(s[i] == '0') r++;
        } else {
            if(s[i] == '1') c++;
        }
    }

    std::cout << std::abs(r + c - std::min(r, c)) << '\n';
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