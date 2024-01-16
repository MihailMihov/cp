//
// Created by mihail on 11/17/23.
//
#include <iostream>
#include <vector>
#include <stack>

bool can_order(int n, std::deque<int>& p, std::stack<int>& a, std::stack<int>& c) {
    if(n == 2) return true;
    if(c.size() > 0 && p.front() == c.top()) {
        p.pop_front();
        c.pop();
        return can_order(n - 1, p, a , c);
    }
    if(p.front() >= a.top()) {
        while (a.top() <= p.front()) {
            c.push(a.top());
            a.pop();
        }
        c.pop();
        p.pop_front();
        return can_order(n - 1, p, a, c);
    }
    return false;
}

int main() {
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for(int i = 0; i < 5; ++i) {
        std::deque<int> b(n);
        std::stack<int> c = {};
        std::stack<int> a;
        for(int i = n; i > 0; --i) a.push(i);
        for(int& i : b) {
            std::cin >> i;
        }
        std::cout << can_order(n, b, a, c);
    }

    std::cout << '\n';

    return 0;
}