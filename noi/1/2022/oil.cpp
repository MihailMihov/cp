#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);

    int n, s;
    std::cin >> n >> s;

    std::vector<int> p(n);
    for(int& i : p) std::cin >> i;



    return 0;
}