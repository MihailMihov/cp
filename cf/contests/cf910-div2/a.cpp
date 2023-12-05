#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <map>
#include <set>
#include <numeric>

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::string s;
    std::cin >> s;

    int b_count = 0;
    for(int i = 0; i < s.length(); ++i) {
        if(s[i] == 'B') ++b_count;
    }

    int diff = k - b_count;

    if(diff == 0) {
        std::cout << "0\n";
        return;
    }
    if(diff > 0) {
        int result = 0;
        for(int i = 0; i < s.length(); ++i) {
            ++result;
            if(s[i] == 'A') {
                --diff;
            }
            if(diff == 0) {
                std::cout << "1\n" << result << ' ' << "B\n";
                return;
            }
        }
    } else {
        int result = 0;
        for(int i = 0; i < s.length(); ++i) {
            ++result;
            if(s[i] == 'B') {
                ++diff;
            }
            if(diff == 0) {
                std::cout << "1\n" << result << ' ' << "A\n";
                return;
            }
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