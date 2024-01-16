#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <map>
#include <iterator>

long long factorial(int n) {
    if(n == 0) return 1;
    if(n == 1) return n;
    return factorial(n - 1) * n;
}

long long choose(int n, int k) {
    return factorial(n) / (factorial(k) * (factorial(n - k)));
}

std::vector<int> path_from(std::multimap<int, int> edges, int start, std::vector<int> path = {}) {
    auto next = edges.equal_range(start);
    if(next.first == edges.end() || next.second == edges.end()) {
        return path;
    }
    while (next.first != next.second) {
        return path_from(edges, next.first->second, path);
    }
}

long long paths_with_length(std::vector<int> nodes, std::multimap<int, int> edges, int length) {
    long long sum = 0;
    for(int node : nodes) {
        std::vector<int> path = path_from(edges, node);
    }
    return sum;
}

int main() {
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> nodes(n);
    for(int& i : nodes) {
        std::cin >> i;
    }

    std::sort(nodes.begin(), nodes.end());

    std::multimap<int, int> edges;
    for(int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if(nodes[j] % nodes[i] == 0) edges.insert({nodes[i], nodes[j]});
        }
    }

    std::cout << paths_with_length(nodes, edges, 3) << '\n';

    return 0;
}

// 7
// 2 1 3 10 7 30 6
// 1 2 3 6 7 10 30

// 1;2 1;3 1;6 1;7 1;10 1;30
// 2;6 2;10 2;30
// 3;6 3;30
// 6;30
// 10;30

// 3 + 2 + 1 + 1 + 1 + 1 + 1

// 2 =00010
// 1 =00001
// 3 =00011
// 10=01010
// 7 =00111
// 30=11110
// 6 =00110