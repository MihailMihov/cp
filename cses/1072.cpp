#include <iostream>

long long p(int k) {
    int k2 = k * k;
    return k2 * (k2 - 1) / 2;
}

long long i(int k) {
    if(k < 2) return 0;
    
}

void solve(int k) {
    std::cout << p(k) - i(k) << '\n';
}

int main() {
    int n;
    std::cin >> n;

    for(int k = 1; k <= n; ++k) {
        solve(k);
    }

    return 0;
}