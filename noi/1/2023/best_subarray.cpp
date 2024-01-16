#include <iostream>
#include <vector>

int32_t main() {
    int32_t n;
    std::cin >> n;

    std::vector<int32_t> a(n);
    for(auto& i : a) std::cin >> i;

    std::pair<int32_t, int32_t> max1 = {0, 0};
    std::pair<int32_t, int32_t> max2 = {0, 0};
    if(a[0] > a[1]) {
        max1 = {a[0], 0};
        max2 = {a[1], 1};
    } else {
        max1 = {a[1], 1};
        max2 = {a[0], 0};
    }
    int best = max2.first - 2;
    int len = 2;

    for (int i = 2; i < n; ++i) {
        if(a[i] > max1.first) {
            max2 = max1;
            max1 = {a[i], i};
        }
    }

    return 0;
}