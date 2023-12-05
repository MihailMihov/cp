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

int main() {
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::unordered_map<int, int> edge_count;
    std::multimap<int, int> edges;
    for(int i = 0; i < n; ++i) {
        int a, b;
        std::cin >> a >> b;
        ++edge_count[a];
        ++edge_count[b];
        edges.emplace(a, b);
        edges.emplace(b, a);
    }

    std::vector<int> leafs;
    int l = 1;
    while(*(std::max_element(edge_count.begin(), edge_count.end())) > 1) {
        for(auto i : edge_count) {


        }
        ++l;
    }

    return 0;
}