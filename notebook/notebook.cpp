#include <iostream>

int32_t main() {
    long long n;
    std::cin >> n;

    std::cout << n << '\n';
    std::cout << n*(n+1)/2 << '\n';
    std::cout << n*(n+1)*(2*n+1)/6 << '\n';
    std::cout << (n*(n+1)/2)*(n*(n+1)/2) << '\n';

    return 0;
}