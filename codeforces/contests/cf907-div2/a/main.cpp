#include <iostream>
#include <vector>
#include <cmath>

int pow2(int b) {
    int result = 2;
    while(b > 1) {
        result *= 2;
        b--;
    }
    return result;
}

bool solve_test_case() {
    int n;
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; ++i) {
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    for (int i = 0; i < std::ceil(std::log2(n)); ++i) {
        for(int j = pow2(i); j <= std::min(pow2(i + 1) - 2, n - 2); ++j) {
//            std::cout << j << ' ';
            if(a.at(j) > a.at(j + 1)) return false;
        }
//        std::cout << std::endl;
    }
    return true;
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        if(solve_test_case()) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}