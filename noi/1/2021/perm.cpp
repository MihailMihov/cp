#include <iostream>
#include <vector>
#include <iterator>

int cycle_length(const std::vector<int>& p, int i) {
    int a = p[i];
    int r = 1;
    while(a != i) {
        ++r;
        a = p[a];
    }
    return r;
}

int rotate_m_index(int i, const std::vector<int>& p, long long m) {
    for (int j = 0; j < m % cycle_length(p, i); ++j) {
        i = p[i];
    }
    return i;
}

void rotate_m(std::vector<int>& a0, const std::vector<int>& p, long long m) {
    std::vector<int> a1(a0.size());
    for(int i = 0; i < a1.size(); ++i) {
        a1[i] = rotate_m_index(i, p, m) + 1;
    }

    a0 = a1;
}

int main() {
    int n;
    long long m;
    std::cin >> n >> m;

    std::vector<int> p(n);
    for(int& i : p) {
        std::cin >> i;
        --i;
    }

    std::vector<int> a(n);
    for(int i = 0; i < n; ++i)
        a[i] = i + 1;

//    for(int i = 0; i < 10; ++i) {
//        rotate_m(a, p, 1);
//
//        std::copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout, " "));
//        std::cout << '\n';
//    }

    rotate_m(a, p, m);

    std::copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';

    return 0;
}

/**
 5 2
 1 2 3 4 5
 2 5 1 4 3
 5 3 2 4 1
 3 1 5 4 2
**/