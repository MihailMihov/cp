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
    std::string s;
    std::cin >> s;

    std::string r = "";
    std::vector<int> l;
    std::vector<int> u;
    for(char c : s) {
        if(c == 'b') {
            if(l.empty() || r.empty()) continue;
            r[l.back()] = '-';
            l.pop_back();
        } else if(c == 'B') {
            if(u.empty() || r.empty()) continue;
            r[u.back()] = '-';
            u.pop_back();
        } else {
            if(c >= 'a' && c <= 'z') {
                l.push_back(r.size());
            } else {
                u.push_back(r.size());
            }
        }
        r.push_back(c);
    }

    for(char c : r) {
        if(c == '-' || c == 'b' || c == 'B') continue;
        std::cout << c;
    }
    std::cout << '\n';
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