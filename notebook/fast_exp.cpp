#include <iostream>
#include <limits>

int32_t m = 1e9 + 7;

int64_t fast_exp_rec(int64_t a, int32_t n) {
    if(n == 0) return 1;
    if(n == 1) return a;
    if(n % 2 == 1) return a * fast_exp_rec(a * a, n / 2);
    else return fast_exp_rec(a * a, n / 2);
}

int64_t fast_exp(int64_t a, int32_t n) {
    int64_t r = 1;

    while (n) {
        if(n % 2 == 1)
            r *= a;
        a *= a;
        n /= 2;
    }

    return r;
}

int32_t main() {
    int32_t n;
    int64_t a;

    std::cin >> a >> n;

    std::cout << fast_exp_rec(a, n) << '\n' << fast_exp(a, n) << '\n';

    return 0;
}