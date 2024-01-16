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

long pow2(int a) {
    long r = 2;
    while(a > 1) {
        r *= 2;
        --a;
    }
    return r;
}

bool equal(int i2, int j2) {
    int i1 = i2;
    int j1 = j2;
    while(i1 % 2 == 0 && j2 > 1) {
        i1 /= 2;
        --j2;
    }
    while(j1 % 2 == 0 && i2 > 1) {
        j1 /= 2;
        --i2;
    }
    return i1 * pow2(j2) == j1 * pow2(i2);
}

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> b(n);
    for(int& i : b) {
        std::cin >> i;
    }

    int c = 0;
    for(int i = 0; i < n - 1; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(equal(b[i], b[j])) {
//                std::cout << b[i] << ' ' << b[j] << '\n';
                c++;
            }
        }
    }

    std::cout << c << '\n';
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