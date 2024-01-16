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
    char c;
    std::cin >> c;
    int r;
    std::cin >> r;

    for(char i = 'a'; i <= 'h'; ++i) {
        if(c == i) continue;
        std::cout << i << r << '\n';
    }
    for(int i = 1; i <= 8; ++i) {
        if(i == r) continue;
        std::cout << c << i << '\n';
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