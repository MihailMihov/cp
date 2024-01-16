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

void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    std::unordered_map<char, int> o;
    for(char c : s) o[c]++;

    int max = 0;
    char maxc = 0;
    for(char i = 'a'; i <= 'z'; ++i) {
        if(o[i] > max) {
            max = o[i];
            maxc = i;
        }
    }

    int nmax = 0;
    for(char i = 'a'; i <= 'z'; ++i) {
        if(i != maxc) max -= o[i];
    }

    std::cout << std::max(max, n % 2 ? 1 : 0) << '\n';
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