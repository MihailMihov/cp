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

std::vector<std::pair<int, int>> base(int n, std::string s) {
    std::vector<std::pair<int, int>> b;
    int x1 = 0, y1 = 0;
    b.emplace_back(x1, y1);

    for(int i = 1; i <= n; ++i) {
        switch (s[i]) {
            case 'R':
                x1++;
                break;
            case 'L':
                x1--;
                break;
            case 'U':
                y1++;
                break;
            case 'D':
                y1--;
                break;
        }
        b.emplace_back(x1, y1);
    }
    return b;
}

void query(int n, std::string s, std::vector<std::pair<int, int>>& b) {
    int x, y, l, r;
    std::cin >> x >> y >> l >> r;

    if(x == 0 && y == 0) {
        std::cout << "YES\n";
        return;
    }

    for(int i = 1; i < l; ++i) {
        if(b[i] == std::make_pair(x, y)) {
            std::cout << "YES\n";
            return;
        }
    }

    int x1 = b[l].first, y1 = b[l].second;
    for(int i = l - 1; i <= n; ++i) {
        char current = s[i - 1];
        if(i <= r) current = s[r - (i - l) - 1];
        switch (current) {
            case 'R':
                x1++;
                break;
            case 'L':
                x1--;
                break;
            case 'U':
                y1++;
                break;
            case 'D':
                y1--;
                break;
        }
        if(x1 == x && y1 == y) {
            std::cout << "YES\n";
            return;
        }
    }

    std::cout << "NO\n";
}

void solve() {
    int n, q;
    std::cin >> n >> q;

    std::string s;
    std::cin >> s;

    std::vector<std::pair<int, int>> b = base(n, s);
    for(int i = 0; i < q; ++i) {
        query(n, s, b);
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
//    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}