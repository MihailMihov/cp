#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>

long long s(std::vector<int> a, int x, int k) {
    for(int i = a.size() - 1; k > 0 && i >= 0; --i) {
        if(a[i] > 0) {
            a[i] = 0;
            k--;
        }
    }

    for(int i = a.size() - 1; x > 0 && i >= 0; --i) {
        if(a[i] > 0) {
            a[i] = -a[i];
            x--;
        }
    }

    long long sum = 0;
    for(int i : a) sum += i;

    return sum;
}

void solve() {
    int n, x, k;
    std::cin >> n >> k >> x;

    std::vector<int> a(n);
    for(int& i : a) std::cin >> i;

    std::sort(a.begin(), a.end());

    int x1 = -1;
    for (int b = k + 1; b >= 1; b /= 2) {
        while (s(a, x, std::min(x1+b, k)) < s(a, x, std::min(x1+b+1, k))) x1 += b;
    }
    int k1 = x1+1;

    std::cout << k1 << " " << s(a, x, k1) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}