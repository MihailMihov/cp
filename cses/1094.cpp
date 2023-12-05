#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    long long max;
    long long r = 0;
    std::cin >> max;
    for(int i = 0; i < n - 1; ++i) {
        long long t;
        std::cin >> t;
        if(t < max) r += max - t;
        max = std::max(max, t);
    }

    std::cout << r << '\n';

    return 0;
}