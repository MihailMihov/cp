#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <map>
#include <set>
#include <numeric>
#include <cmath>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for(int& i : a) {
        std::cin >> i;
    }

    int result = 0;
    while(true) {
        for(int i = n - 1; i >= 1; --i) {
            int r = a[i];
            int l = a[i - 1];
            if(l > r) {
//                std::cout << l << ' ' << r << '\n';
                result++;
                a.insert(a.begin() + i, std::ceil(l / 2.0));
                a[i - 1] = std::floor(l / 2.0);
//                std::copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout));
//                std::cout << '\n';
                break;
            }
            if(i == 1 && l <= r) {
                std::cout << result << '\n';
//                std::copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout));
//                std::cout << '\n';
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