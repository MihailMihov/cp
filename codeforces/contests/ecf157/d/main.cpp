#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <map>
#include <set>
#include <numeric>
#include <unordered_set>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n - 1);
    for(int& i : a) {
        std::cin >> i;
    }

    for(int i = 0; i < n; ++i) {
        bool f = true;
        std::vector<int> s = { i };
        std::unordered_set<int> used = { i };
        for(int j = 0; j < n - 1; ++j) {
            s.push_back(s.back() ^ a[j]);
            if(used.count(s.back()) || s.back() > n - 1) {
                f = false;
                break;
            }
            used.insert(s.back());
        }
        if(f) {
            std::copy(s.begin(), s.end(), std::ostream_iterator<int>(std::cout, " "));
            std::cout << std::endl;
            return;
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    int t = 1;

    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}