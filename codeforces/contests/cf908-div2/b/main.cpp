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
    std::cin >> n;

    std::vector<int> a(n);
    std::unordered_set<int> a_set;
    std::unordered_map<int, int> a_count;

    for(int& i : a) {
        std::cin >> i;
        a_set.insert(i);
        ++a_count[i];
    }

    if(a_set.size() < 2) {
        std::cout << "-1\n";
        return;
    }

    int c = 0;
    for(auto p : a_count) if(p.second > 1) ++c;

    if(c < 2) {
        std::cout << "-1\n";
        return;
    }

    std::vector<int> b(n);
    std::unordered_set<int> a_used;
    int next_value = 2;
    for(int i = 0; i < n; ++i) {
        if(a_count[a[i]] < 2) b[i] = 1;
        if(a_count[a[i]] > 1 && a_used.count(a[i]) != 0) b[i] = 1;
        if(a_count[a[i]] > 1 && a_used.count(a[i]) == 0) {
            if(next_value < 4)
                b[i] = next_value;
            else
                b[i] = 1;
            --a_count[a[i]];
            ++next_value;
            a_used.insert(a[i]);
        }
    }

    std::copy(b.begin(), b.end(), std::ostream_iterator<int>(std::cout, " "));
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