#include <iostream>

void solve() {
    long long y, x;
    std::cin >> y >> x;

    long long r = std::max(x, y);
    long long u = r * r;
    if(y > x) {
        if(r % 2) {
            std::cout << u - r - (r - x) + 1 << '\n';
        } else {
            std::cout << u - x + 1 << '\n';
        }
    } else {
        if(r % 2) {
            std::cout << u - y + 1 << '\n';
        } else {
            std::cout << u - r - (r - y) + 1 << '\n';
        }
    }
}

int main() {
    int t;
    std::cin >> t;

    for(int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}