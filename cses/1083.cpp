#include <iostream>
#include <unordered_set>

int main() {
    int n;
    std::cin >> n;

    std::unordered_set<int> s;
    for(int i = 0; i < n - 1; ++i) {
        int t;
        std::cin >> t;
        s.insert(t);
    }

    for(int i = 1; i <= n; ++i) {
        if(!s.count(i)) {
            std::cout << i << '\n';
            break;
        }
    }

    return 0;
}