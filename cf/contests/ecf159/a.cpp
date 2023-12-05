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
    std::string s;
    std::cin >> n >> s;

    if(s.find('0') != std::string::npos) {
        std::cout << "YES\n";
        return;
    }
    std::cout << "NO\n";
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