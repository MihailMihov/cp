#include <iostream>
#include <vector>
#include <cmath>

long long pow2(int n) {
    if(n == 1) return 2;
    return 2 * pow2(n - 1);
}

int main() {
    int n;
    std::cin >> n;

    for(long long a = 0; a < pow2(n); ++a) {
        long long t = a;
        for(int i = n - 1; i >= 0; --i) std::cout << ((t & (1 << i)) ? 1 : 0);
        std::cout << '\n';
    }

    return 0;
}