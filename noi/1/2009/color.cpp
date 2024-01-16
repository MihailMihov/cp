#include <iostream>
#include <bitset>

int32_t main() {
    size_t n;
    std::cin >> n;

    std::bitset<500001> r(0);

    int32_t maxb = 0;
    for(size_t i = 0; i < n; ++i) {
        int32_t a, b;
        std::cin >> a >> b;
        maxb = std::max(maxb, b);
        for(size_t j = a - 1; j < b; ++j) {
            r.flip(j);
        }
    }

    int32_t max = 0, c = 0;
    for(size_t i = 0; i <= maxb; ++i) {
        if(r.test(i))
            ++c;
        else
            c = 0;
        max = std::max(max, c);
    }

    std::cout << max << '\n';

    return 0;
}