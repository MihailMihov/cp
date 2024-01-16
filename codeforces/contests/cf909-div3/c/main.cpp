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

long max_sum(std::vector<int>& a, int s, bool parity) {
    if(a.size() == s + 1) return a[s];

}

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for(int& i : a) {
        std::cin >> i;
    }

//    bool last_parity = a[0] % 2;
//    int max = a[0];
//    int sum = a[0];
//    for (int i = 1; i < n; ++i) {
//        if(a[i] % 2 != last_parity) {
//            sum += a[i];
//            last_parity = !last_parity;
//        } else {
//            sum = a[i];
//        }
//        if(sum > max) max = sum;
//    }
//
//    std::cout << max << '\n';

    std::cout << max_sum(a, 0, a[0] % 2)
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