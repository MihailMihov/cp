#include <iostream>

void solve() {
    int a, b;
    std::cin >> a >> b;

    if(a > b) std::swap(a, b);
    // b >= a


}

int main() {
    int t;
    std::cin >> t;

    for(int i = 0; i < t; ++i) solve();

    return 0;
}