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

int rec(int *h, int n) {
    if(n == 1)
	return 0;

    return std::min(rec(h + 1, n - 1) + 1, n - 1);
}

void solve() {
    int n;
    std::cin >> n;
    
    int h[n];
    for(int i = 0; i < n; ++i) {
	std::cin >> h[i];
    }

    std::cout << rec(h, n) << '\n';
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
