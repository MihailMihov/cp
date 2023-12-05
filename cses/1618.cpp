#include <iostream>

int main() {
    int n;
    std::cin >> n;

    long long f = 0;
    for(int i = 5; i <= n; i += 5) {
        int t = i;
        while (t % 5 == 0) {
            t /= 5;
            ++f;
        }
    }

    std::cout << f << '\n';

    return 0;
}