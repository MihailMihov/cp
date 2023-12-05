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
    long a_count = 0;
    long result = 0;
    for(int i = 0; i < n; ++i) {
        char c;
        std::cin >> c;
        if(c == 'A') {
            ++a_count;
            f = true;
        }
        else {
            result += a_count;
            a_count = 0;
            if(f) ++a_count;
            f = false;
        }
    }

    std::cout << result << '\n';
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