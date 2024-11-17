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
    int n;
    std::cin >> n;
    
    int64_t p[n];
    bool f;
    bool result = true;
    std::cin >> p[0];
    std::cin >> p[1];
    for(int i = 2; i < n; ++i) {
	std::cin >> p[i];
	if(f && p[i] != i + 1)
	    result = false;

	if((p[i] < p[i - 1] && p[i - 1] < p[i - 2]) ||
	   (p[i] > p[i - 1] && p[i - 1] > p[i - 2]))
	    f = true;
    }

    if(result)
	std::cout << "YES\n";
    else
	std::cout << "NO\n";
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
