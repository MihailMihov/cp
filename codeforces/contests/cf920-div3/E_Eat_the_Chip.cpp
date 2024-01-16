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
#include <cmath>

void solve() {
    long long h, w;
    std::cin >> h >> w;
    long long xa, ya, xb, yb;
    std::cin >> xa >> ya >> xb >> yb;

    long long dx = xb - xa;
    long long dy = std::abs(yb - ya);

    if(dx <= 0 || dy > dx) {
        std::cout << "Draw\n";
        return;
    }

    if(dx % 2 == 0) {
        if(std::abs(ya - yb) != 0) {
            if(ya < yb && dx / 2 >= dy + ya - 1) {
                std::cout << "Bob\n";
            } else if(ya > yb && dx / 2 >= dy + w - ya + 1) {
                std::cout << "Bob\n";
            } else std::cout << "Draw\n";
        } else {
            std::cout << "Bob\n";
        }
    } else {
        if(std::abs(ya - yb) > 1) {
            if(yb < ya && dx / 2 + 1>= dy + yb - 1) {
                std::cout << "Alice\n";
            } else if(yb > ya && dx / 2 + 1 >= dy + w - yb) {
                std::cout << "Alice\n";
            } else std::cout << "Draw\n";
        } else {
            std::cout << "Alice\n";
        }
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