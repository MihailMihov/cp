#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <map>
#include <set>
#include <numeric>

int strtoi(const char* cstr) {
    int r = 0;
    while(*cstr) {
        r = (*(cstr++) - '0') + r * 10;
    }
    return r;
}

int sum_of_digits(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool lucky_ticket(std::string s) {
    int l = s.length() / 2;
    if(sum_of_digits(strtoi(s.substr(0, l).c_str()))
    == sum_of_digits(strtoi(s.substr(l).c_str()))) return true;
    return false;
}

void solve() {
    int n;
    std::cin >> n;

    std::vector<std::string> s_even, s_odd;
    for(int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        if(s.length() % 2 == 0)
            s_even.emplace_back(s);
        else
            s_odd.emplace_back(s);
    }

    long long r = 0;
    for (auto s1 : s_even) {
        for(auto s2 : s_even) {
            std::string s = s1 + s2;
            if(lucky_ticket(s)) ++r;
        }
    }
    for (auto s1 : s_odd) {
        for(auto s2 : s_odd) {
            std::string s = s1 + s2;
            if(lucky_ticket(s)) ++r;
        }
    }

    std::cout << r << std::endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    int t = 1;

    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}