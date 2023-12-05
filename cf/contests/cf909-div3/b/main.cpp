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
    for(int& i : a) {
        std::cin >> i;
    }

    long max = 0;
    for(int k = 1; k <= n; ++k) {
        if(n % k != 0) continue;
        long max1 = 0;
        long min1 = INT32_MAX;

        for(int i = 0; i < n / k; ++i) {
            long sum = 0;
            for(int j = 0; j < k; ++j) {
                sum += a[i * k + j];
            }
            if(sum > max1) max1 = sum;
            if(sum < min1) min1 = sum;
        }
        if(max1 != 0 && min1 != INT32_MAX && max1 - min1 > max) max = max1 - min1;
    }

    std::cout << max << '\n';
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