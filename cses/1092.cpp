#include <iostream>
#include <vector>
#include <iterator>

int main() {
    long long n;
    std::cin >> n;

    long long s = n * (n + 1) / 2;
    if(s % 2) {
        std::cout << "NO\n";
        return 0;
    }

    long long hs = s / 2;

    std::vector<int> s1;
    std::vector<int> s2;
    long long s1_s = 0;
    for(int i = n; i > 0; --i) {
        if(s1_s + i <= hs) {
            s1_s += i;
            s1.emplace_back(i);
        } else {
            s2.emplace_back(i);
        }
    }

    std::cout << "YES\n";
    std::cout << s1.size() << '\n';
    std::copy(s1.begin(), s1.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
    std::cout << s2.size() << '\n';
    std::copy(s2.begin(), s2.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';

    return 0;
}