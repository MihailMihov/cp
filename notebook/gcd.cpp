#include <iostream>

int32_t gcd_rec(int32_t a, int32_t b) {
    if(a > b) std::swap(a, b);
    if(a == 0) return b;
    return gcd_rec(a, b - a);
}

int32_t gcd(int32_t a, int32_t b) {
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int32_t main() {
    int32_t a, b;
    std::cin >> a >> b;

    std::cout << gcd_rec(a, b) << '\n' << gcd(a, b) << '\n';

    return 0;
}