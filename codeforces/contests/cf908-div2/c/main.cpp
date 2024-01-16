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

bool can_shift(std::vector<int>& b) {

}

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> b(n);

    for(int& i : b) {
        std::cin >> i;
    }

    int r = 0;
    while(can_shift(b) && r < k) r++;

    if(r < k) {
        std::cout << "No\n";
    } else {
        std::cout << "Yes\n";
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