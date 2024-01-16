#include <iostream>

const long long m = 1e9 + 7;

long long pow2(unsigned int n) {
    long long result = 2;
    --n;

    while(n) {
        result *= 2;
        result = result % m;
        --n;
    }

    return result;
}

int main() {
    unsigned int n;
    std::cin >> n;

    std::cout << pow2(n) << '\n';

    return 0;
}