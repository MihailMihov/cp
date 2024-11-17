#include <cstdint>
#include <iostream>
#include <algorithm>

void solve() {
    int32_t n, m;
    std::cin >> n >> m;

    int32_t layers = std::min(n / 2, m / 2);
    int32_t max_layer_length = 2 * (m + n - 2);
    int8_t c[layers][max_layer_length];
    for(int32_t i = 0; i < layers; ++i)
	for(int32_t j = 0; j < max_layer_length; ++j)
	    c[i][j] = 'X';

    for(int32_t i = 0; i < n; ++i) {
	for(int32_t j = 0; j < m; ++j) {
	    int32_t layer = std::min(std::min(i, n - i - 1), std::min(j, m - j - 1));
	    int32_t pos = -1;
	    if(i == layer) {
		pos = j - layer;
	    } else if(i == n - layer - 1) {
		pos = (m - layer * 2) + ((n - layer) - 2) + ((m - layer * 2) - j - 1);
	    } else if(j == layer) {
		pos = (m - layer * 2) + ((n - layer * 2) - 1) + ((m - layer * 2) - j - 1) + ((n - layer * 2) - (i - layer) - 1);
	    } else if(j == m - layer - 1) {
		pos = (m - layer * 2) + (i - 1 - layer);
	    }
	    std::cout << layer << ' ' << pos << '\n';

	    std::cin >> c[layer][pos];
	}
    }
    std::cout << '\n';

    int32_t count = 0;
    for(int32_t i = 0; i < layers; ++i) {
	int32_t c_len = 2 * ((m - i) + (n - i) - 2);
	//std::cout << c_len << '\n';
	for(int32_t j = 0; j < c_len; ++j) {
	    std::cout << c[i][j % c_len] << ' ' << c[i][(j + 1) % c_len] << ' ' <<
			c[i][(j + 2) % c_len] << ' ' << c[i][(j + 3) % c_len] << '\n';
	    if(c[i][j % c_len] == '1' && c[i][(j + 1) % c_len] == '5' &&
		    c[i][(j + 2) % c_len] == '4' && c[i][(j + 3) % c_len] == '3')
		++count;
	}
    }

    std::cout << count << '\n';

}

int main() {
    int32_t t;
    std::cin >> t;
    for(int i = 0; i < t; ++i)
	solve();
}
