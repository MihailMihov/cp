#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if(n == 1) {
        std::cout << 1 << '\n';
        return 0;
    }

    if(n < 4) {
        std::cout << "NO SOLUTION\n";
        return 0;
    }

    if(n % 2 == 0) {
        for(int i = n - 1; i >= 1; i -= 2) std::cout << i << ' ';
        for(int i = n; i >= 2; i -= 2) std::cout << i << ' ';
        std::cout << '\n';
    } else {
        for(int i = n; i >= 1; i -= 2) std::cout << i << ' ';
        for(int i = n - 1; i >= 2; i -= 2) std::cout << i << ' ';
        std::cout << '\n';
    }
}
