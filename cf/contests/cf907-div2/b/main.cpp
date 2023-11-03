#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

long long pow2(int b) {
    long long result = 1;
    while(b) {
        result *= 2;
        b--;
    }
    return result;
}

void solve_test_case() {
    int n, q;
    std::cin >> n >> q;

    std::vector<long long> a;
    std::vector<int> x;

    for (int i = 0; i < n; ++i) {
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < q; ++i) {
        int tmp;
        std::cin >> tmp;
        x.push_back(tmp);
    }

    long long X[31] = {0};
    for (int i = 0; i < q; ++i) {
        long long A = pow2(x[i] - 1);
        int max = x[i];
        for (int j = i + 1; j < q; ++j) {
            if(x[j] < max) {
                A += pow2(x[j] - 1);
                max = x[j];
                std::cout << "max: " << max << std::endl;
            }
            else continue;
        }
        X[x[i]] = A;
    }

    for (int i = 0; i < 31; ++i) {
        if(X[i] != 0) {
            std::cout << pow2(i) << ": " << X[i] << std::endl;
        }
    }

    for (int i = 0; i < n; ++i) {
        for(int j = 0; j < q; ++j) {
            if(X[j] == 0) continue;
            if(a[i] % pow2(j) == 0) {
                a[i] += X[j];
                break;
            }
        }
    }

    for (long long i : a) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        solve_test_case();
    }
    return 0;
}