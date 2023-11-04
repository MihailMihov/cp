#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <map>
#include <set>
#include <numeric>

void apply(std::vector<int>& a, std::vector<int> p) {
    std::vector<int> a0(a.size());
    std::copy(a.begin(), a.end(), a0.begin());
//    std::copy(p.begin(), p.end(), std::ostream_iterator<int>(std::cout, " "));
//    std::cout << std::endl;
    for(int i = 0; i < a.size(); ++i) {
        a[p[i]] = a0[i];
    }
}

std::vector<int> p_mul(std::vector<int> p1, std::vector<int> p2) {
    std::vector<int> p(p1.size());
    for(int i = 0; i < p.size(); ++i) {
        p[i] = p1[p2[i]];
    }
    return p;
}

std::vector<int> p_pow(std::vector<int> p, long long m) {
    if(m == 1) return p;
    if(m % 2) return p_mul(p, p_pow(p_mul(p, p), (m - 1) / 2));
    else return p_pow(p_mul(p, p), m / 2);
}

int main() {
    int n;
    long long m;
    std::cin >> n >> m;

    std::vector<int> p0(n);
    for(int& i : p0) {
        std::cin >> i;
        --i;
    }

    std::vector<int> a(n);
    for(int i = 0; i < a.size(); ++i) {
        a[i] = i + 1;
    }

//    std::cout << "0: ";
//    std::copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout, " "));
//    std::cout << '\n';
//    for(int i = 0; i < 10; ++i) {
//        std::cout << i << ": ";
//        apply(a, p0);
//        std::copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout, " "));
//        std::cout << '\n';
//    }

    std::vector<int> p = p_pow(p0, m);

    apply(a, p);
    std::copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';

    return 0;
}